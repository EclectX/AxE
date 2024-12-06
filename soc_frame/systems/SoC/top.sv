
/* ****************************************************************************
  This Source Code Form is subject to the terms of the
  Open Hardware Description License, v. 1.0. If a copy
  of the OHDL was not distributed with this file, You
  can obtain one at http://juliusbaxter.net/ohdl/ohdl.txt
  
  Copyright (C) 2019 Stefan Huemer <stefan@huemer.tech>
  
***************************************************************************** */

`include "defines.vh"

`include "defines_arch.vh"
`include "defines_nodes.vh"

`include "defines_axi.vh"
`include "defines_noc.vh"
`include "defines_mem.vh"
`include "defines_clk.vh"

`include "defines_ascii.vh"
`include "defines_debugger.vh"

`include "../../rtl/interfaces/if_axi_light.sv"

`include "../../rtl/res_n_syn/res_n_syn.sv"

`include "../../rtl/pico/picorv32.v"

`include "../../rtl/pico/picorv32_if_wrapper.sv"

`include "../../rtl/memory/bram_controller.sv"
`include "../../rtl/memory/bram.sv"

`include "../../rtl/axi_detector/axi_detector.sv"

`include "../../rtl/buffer/ring_buffer.sv"
`include "../../rtl/debugger/debugger.sv"

`include "../../rtl/axi_demux/axi_demux.sv"

`include "../../rtl/control/control.sv"

// the following are modules that do not contain any logic.
// they are only used to bundle other modules together.

`include "../../rtl/controller_axi.sv"

//~ `include "../../rtl/memory_controller.sv"
`include "../../rtl/memory_controller_priority_input_soc.sv"

`ifdef SYNTHESIS
    
    `include "../../rtl/uart/uart.sv"
    
    `include "../../rtl/uart/uart_clk.sv"
    `include "../../rtl/uart/uart_tx.sv"
    
`endif

module top
(
     input clk
    ,(* mark_debug = "true" *) input res_n
    
    // debugging
    
    `ifdef SYNTHESIS
        
        ,(* mark_debug = "true" *) output tx_out
        
    `else
        
        ,output [ `ASCII_WIDTH-1:0 ] buffer_out_data
        ,output buffer_out_valid
        ,input buffer_recv_busy
        
    `endif
    
    ,(* mark_debug = "true" *) output trap
    ,output trap_nodes
    
    ,output [ 7:0 ] leds_status
    ,output [ 7:0 ] triggers
    
    ,input [ 31:0 ] spoon_feed
    ,output spoon_taken
    
    ,output [31:0] addr_pixel
    ,output request_pixel
    
    ,input [31:0] pixel
    ,input pixel_avail
);
    
    assign trap_nodes = trap_0  ||
                        trap_1;
    
    // -------------------------------------------------------------------------
    // PARAMETERS
    // -------------------------------------------------------------------------
    
    //---------------------
    // SYSTEM ITSELF
    //---------------------
    
    // the NoC id to which the memory controller is connected.
    
    parameter NOC_MEM_ADDR = 2'b10;
    //~ parameter NOC_MEM_ADDR = 4'b0010;
    
    // -------------------------------------------------------------------------
    // WIRES
    // -------------------------------------------------------------------------
    
    // all the debugging signals are outputted from the nodes and
    // combined into a parallel signal and fed into the debugger relay.
    
    // ring buffer
    
    `ifdef SYNTHESIS
        
        wire [ `ASCII_WIDTH-1:0 ] buffer_out_data;
        wire buffer_out_valid;
        wire buffer_recv_busy;
        
    `endif
    
    wire w_res_n_syn;
    
    wire [ `ASCII_WIDTH-1:0 ] w_ascii_c_0;
    wire                      w_ascii_s_0;
    
    wire trap_0;
    wire trap_1;
    
    // -------------------------------------------------------------------------
    // INTERFACES
    // -------------------------------------------------------------------------
    
    if_axi_light #() if_axi_light_controller();
    
    // -------------------------------------------------------------------------
    // R E S _ N _ S Y N
    // -------------------------------------------------------------------------
    
    res_n_syn #() res_n_syn_inst
    (
         .clk( clk )
        ,.res_n( res_n )
        
        ,.res_n_syn( w_res_n_syn )
    );
    
    // -------------------------------------------------------------------------
    // O U T P U T
    // -------------------------------------------------------------------------
    
    `ifdef SYNTHESIS
        
        uart
        #(
             .BAUD( 921600 )
        )
        uart_inst
        (
             .clk( clk )
            ,.res_n( w_res_n_syn )
            
            ,.wr( buffer_out_valid )
            ,.data( buffer_out_data )
            
            ,.tx( tx_out )
            ,.busy( buffer_recv_busy )
        );
        
    `endif
    
    ring_buffer
    #(
        
         .DATA_WIDTH( 7 )
        ,.BUFFER_DEPTH( 150 )
        
        ,.ALLOW_OVERWRITE_ON_FULL( 0 )
    )
    ring_buffer_inst
    (
         .clk( clk )
        ,.res_n( w_res_n_syn )
        
        ,.data_in( w_ascii_c_0 )
        ,.data_in_valid( w_ascii_s_0 )
        
        ,.data_out( buffer_out_data )
        ,.data_out_valid( buffer_out_valid )
        
        ,.full(  )
        ,.recv_busy( buffer_recv_busy )
    );
    
    // -------------------------------------------------------------------------
    // C O N T R O L L E R
    // -------------------------------------------------------------------------
    
    controller
    #(
         .ID( 0 )
        
        ,.SEND_TO( NOC_MEM_ADDR )
    )
    controller_inst
    (
         .clk( clk )
        ,.res_n( w_res_n_syn )
        
        ,.trap( trap )
        
        ,.if_axi_controller_master( if_axi_light_controller.master )
        //~ ,.noc( if_connect_node_controller.bridge )
        
        ,.debugger_sig( w_ascii_s_0 )
        ,.debugger_ascii( w_ascii_c_0 )
    );
    
    // -------------------------------------------------------------------------
    // N O D E s
    // -------------------------------------------------------------------------
    
    // no nodes
    
    // -------------------------------------------------------------------------
    // M E M O R Y _ C O N T R O L L E R
    // -------------------------------------------------------------------------
    
    memory_controller #() memory_controller_inst
    (
         .clk( clk )
        ,.res_n( w_res_n_syn )
        
        ,.if_axi_priority_input_slave( if_axi_light_controller.slave )
        
        ,.leds_status( leds_status )
        ,.triggers( triggers )
        
        ,.spoon_feed( spoon_feed )
        ,.spoon_taken( spoon_taken )
        
        ,.addr_pixel( addr_pixel )
        ,.request_pixel( request_pixel )
        
        ,.pixel( pixel )
        ,.pixel_avail( pixel_avail )
    );
    
    // -------------------------------------------------------------------------
    // N O C
    // -------------------------------------------------------------------------
    
    // no noc
    
endmodule
