/*********************************************************************
   PicoTCP. Copyright (c) 2012 TASS Belgium NV. Some rights reserved.
   See LICENSE and COPYING for usage.

 *********************************************************************/
#ifndef _INCLUDE_PICO_ND
#define _INCLUDE_PICO_ND
#include "pico_frame.h"

/* RFC constants */
#define PICO_ND_REACHABLE_TIME         30000 /* msec */
#define PICO_ND_RETRANS_TIMER          1000 /* msec */

struct pico_nd_hostvars {
    uint32_t mtu;
    uint8_t hoplimit;
    pico_time basetime;
    pico_time reachabletime;
    pico_time retranstime;
};

void pico_ipv6_nd_init(void);
struct pico_eth *pico_ipv6_get_neighbor(struct pico_frame *f);
int pico_ipv6_nd_recv(struct pico_frame *f);
#endif