
// TODO - try to minimize as much as possible

node_t nodes[ NUM_NODES ];
prg_t prgs[ NUM_PRGS ];
arch_t archs[ NUM_ARCHS ];
queue_t queue[ 100 ];

int prgs_list[ NUM_PRGS ];
int ready_list[ NUM_PRGS ]; // could be encoded into the prgs_list

task_set_t task_set;
battery_t battery;
energy_harvester_t energy_harvester;
cnt_t cnt_global;

int charges[ NUM_CHARGES ];
unsigned int charges_i = 0;

int queue_index = 0;

unsigned int cnt_prev = 0;
unsigned int cnt = 0;

int save_mode = 0;

int nodes_busy = 0;

int prgs_active = 0;

int leds_status = 0;

int preferred_archs[ NUM_ARCHS ];
