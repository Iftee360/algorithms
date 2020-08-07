## BINARY SEARCH

* In Binary Search, the idea of the algorithm is to
**DIVIDE & CONQUER**, reducing the search area by half each time, trying to find a target number...

    * in order to leverage this power however, our array must firt be SORTED, else we cannot make assumptions about the array's contents..

## pseudocode
* Repeat until the (sub)array is of size 0:
     * Calculate the **middle** point of the (sub)array
	             * if the target is at the middle, stop.

     * Otherwise, if the target is **lower** than what is in the middle, repeat, changing the end point to be just to the left of the middle.
     * Otherwise, if the target is **greater** than what is in the middle, repeat, changine the end point to be just to the right of the middle.


## Code (in C language)

			
