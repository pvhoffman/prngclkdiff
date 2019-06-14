### Clock Differential Pseudorandom Number Generator 

This is C++ version of the pseudorandom number generator using clock differential created by Dan Kaminsky in JavaScript.

The premise of the viability of the entropy produced by this pseudorandom number generator is that the time taken to reach the boot screen, at system startup, is nondeterministic for the same system.  Dan Kaminsky writes, "... the biggest lie about your computer is that it's just one computer.  CPU cores talk to memory busses talk to expansion busses talk to storage and networking and the interrupt of the month club."  The entropy caused by clock drift from all these disparate internal systems could (should?) be enough to sufficiently generate random numbers.

I don't know if Dan Kaminsky is correct or not in his assertion as the burden to produce a PoC || GTFO is on a challenger of this assertion.

This C++ implementation is considerably more than the 4 lines in Dan's JavaScript example.

