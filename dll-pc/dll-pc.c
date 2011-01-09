static void
one_more_tick(void)
/* 
Set the conditions for each state during bus activity.
It is a finite state machine which emulates a synchronous bus:
it keeps track of each bus cycle but the timing is finite, which means advancing the bus cycle depends on the number of 'ticks' in the system.
A 'tick' is a unit of time sufficient to define the clock of a bus as an integral number.
A tick might be a nanosecond or a microsecond or any other kind: what matters is that in a synchronous bus, it is the number of elapsed ticks that determins the next state of the bus cycle, not the activity on the bus.
A paramount requirement then is that every action increases the tick counter: since this is an emulation, we can not use a real clock.
When 
*/
{
	++ticks;
}

int clock_cycle_time = 250; // ticks

enum bus_cycle_state {
	BCS_RED,
	BCS_FED,
};

static void
set_bus_state(void)
{
/*
Set bus cycle state based on ticks elapsed since last cycle.

*/	
}

int
main(void)
{
/*
For every bus cycle, we call each device's run_one_cycle() to allow one cycle of action to be performed.
What this means is that all we are interested is one cycle.
The difference between a synch or asynch bus is that the synch bus works based on ticks, the async bus based on signals.
We are here trying to ensure we use the constraints of a synch bus, so we allow each device to perform what is possible in one bus cycle at a time.
For future reference, we know that some actions are sequential: parallel actions have their own tick count, while sequential actions share the tick count.
What this means is that, we establish the length of a cycle in ticks.
Two parallel actions have the same number of ticks available, but sequential actions do not.
When setting signals, only at the end of a cycle the parallel actions restart.

For example, if the CPU emits something to a latch, this is sequential, and the latch must be aware of how many ticks the cpu used.

Devices attached to the bus only respond to signals on the bus at the beginning of each cycle, not in the middle.o

Each device has its inputs/outputs, just like the bus.
How many buses? for simplification we only look at the main bus for now.

We could generalize the bus and the devices, but for now we will know about them.

Later we can generalize a device and provide ways to define a device so that it can be attached to a bus.
*/
	do {
	} while (1);
	return 0;
}

struct ibmpcbus {
// signals
	int RESET, A[20], D[8], ALE, nMEMR, nMEMW, nIOR, ;
} bus;
