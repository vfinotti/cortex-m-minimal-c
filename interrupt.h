#ifndef INTERRUPT_H
#define INTERRUPT_H

void interrupt_reset ();
void interrupt_nmi ();
void interrupt_hard_fault ();
void interrupt_memmanage ();
void interrupt_bus_fault ();
void interrupt_usage_fault ();
void interrupt_reserved_0 ();
void interrupt_reserved_1 ();
void interrupt_reserved_2 ();
void interrupt_reserved_3 ();
void interrupt_svcall ();
void interrupt_debug ();
void interrupt_reserved_4 ();
void interrupt_pendsv ();
void interrupt_systick ();

#endif // INTERRUPT_H