
void interval_advance( interval_t* interval )
{
    time_advance( &((*interval).cnt), (*interval).interval_cnt );
}

int interval_reached( interval_t* interval )
{
    return time_reached_cnt_t( &((*interval).cnt) );
}

//unsigned int time_get_cnt_until( unsigned int cnt, unsigned int overflows )
//{
//    if ( cnt_global.overflows < overflows )
//    {
//        return ( (MAX-cnt_global.cnt) + cnt );
//    }
//    else
//    {
//        return ( cnt - cnt_global.cnt );
//    }
//}
