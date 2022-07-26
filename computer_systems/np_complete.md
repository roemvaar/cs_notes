# NP-complete Problems [1]

1) No efficient algorithm for an NP-complete problem has ever been found
2) Nobody has ever proven that an efficient algorithm for one cannot exist, i.e., no one knows
   whether efficient algorithms exist for NP-complete problems
3) The set of NP-complete has the property that if an efficient algorithm exist for any
   of them, then efficient algorithms exist for all of them
4) Several NP-complete problems are similar to problems for which we have efficient algorithms.
   It's intriguing how a small change on the problem statement can change the efficiency of
   of the best known algorithm
 
Note: Only decision problems - those with a "yes/no" answer - can be NP-complete.
   
When you're facing an NP-complete problem (or something that looks like it), you should:

1. Spend sometime trying to figure out an efficient algorithm (remember that time > money)
2. If you can't come up with an efficient algorithm, then you should try to prove that it's an NP-complete problem
  2.1 If you prove it to be NP-complete, you need to develop an efficient approximation algorithm, i.e., 
      an algorithm that gives a good, but not the best possible, solution
  2.2 If you can't prove it, then ask someone else to solve it (jk lol), you need to try harder
      (either to come up with an efficient algorithm or to prove that's NP-complete)


[1] CLRS - Introduction to Algorithms (4th Ed)
