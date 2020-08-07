b s
b s
# Binary Search

Binary search is a fast *search algorithm* with run-time complexity of **Ο(log n)**. This search algorithm works on the principle of **Divide & Conquer**. For this algorithm to work properly, the data collection should be in the **Sorted** form.

> Binary search looks for a particular item by comparing the middle most item of the collection. If a match occurs, then the index of item is returned. If the middle item is greater than the item, then the item is searched in the sub-array to the left of the middle item. Otherwise, the item is searched for in the sub-array to the right of the middle item. This process continues on the sub-array as well until the size of the subarray reduces to zero.

## How Binary Search Works?

For a binary search to work, it is mandatory for the target array to be **sorted**. We shall learn the process of binary search with a **pictorial example**. The following is our sorted array and let us assume that we need to search the location of value 31 using binary search.

![Binary search](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_search_0.jpg)

First, we shall determine half of the array by using this formula −

mid = low + (high - low) / 2

Here it is, 0 + (9 - 0 ) / 2 = 4 (integer value of 4.5). So, 4 is the mid of the array.

![Binary search](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_search_1.jpg)

Now we compare the value stored at location 4, with the value being searched, i.e. 31. We find that the value at location 4 is 27, which is not a match. As the value is greater than 27 and we have a sorted array, so we also know that the target value must be in the upper portion of the array.

![Binary search](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_search_2.jpg)

We change our low to mid + 1 and find the new mid value again.

low = mid + 1
mid = low + (high - low) / 2

Our new mid is 7 now. We compare the value stored at location 7 with our target value 31.

![Binary search](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_search_3.jpg)

The value stored at location 7 is not a match, rather it is more than what we are looking for. So, the value must be in the lower part from this location.

![Binary search](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_search_4.jpg)

Hence, we calculate the mid again. This time it is 5.

![Binary search](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_search_5.jpg)

We compare the value stored at location 5 with our target value. We find that it is a match.

![Binary search](https://www.tutorialspoint.com/data_structures_algorithms/images/binary_search_6.jpg)

We conclude that the target value 31 is stored at location 5.

Binary search halves the searchable items and thus reduces the count of comparisons to be made to very less numbers.

### Different Cases

#### 1.  Worst-case scenario [ Big O ( log n ) ] :
We have to divide a list of n elements in half **repeatedly** to find the target element, either because the target element will not be found at the end of the last division or doesn't exist in the array at all.
#### 2. Best-case scenario [ Sigma (1) ] :
The target element is at the midpoint of the full array, and so we can stop looking after we start


## Pseudocode

The pseudocode of binary search algorithms should look like this −

```
Procedure binary_search
   A ← sorted array
   n ← size of array
   x ←  value to be searched

   Set lowerBound =  1  
   Set upperBound = n

   while x not found

       if upperBound < lowerBound
           print("x does not exists.")
           EXIT  

       set midPoint = lowerBound + (upperBound - lowerBound)/2

       if A[midPoint]  < x  
         set lowerBound = midPoint +  1  

       if A[midPoint]  > x
         set upperBound = midPoint -  1  

       if A[midPoint]  = x
           print("x found at location midPoint")
           EXIT

      end  while loop

end procedure
```

## Code (in C language)

```
#include <stdio.h>

#define MAX 20

// array of items on which linear search will be conducted.
int intArray[MAX] = {1,2,3,4,6,7,9,11,12,14,15,16,17,19,33,34,43,45,55,66};

void printline(int count) {
   int i;

   for(i = 0;i <count-1;i++) {
      printf("=");
   }

   printf("=\n");
}

int find(int data) {
   int lowerBound = 0;
   int upperBound = MAX -1;
   int midPoint = -1;
   int comparisons = 0;      
   int index = -1;

   while(lowerBound <= upperBound) {
      printf("Comparison %d\n" , (comparisons +1) );
      printf("lowerBound : %d, intArray[%d] = %d\n",lowerBound,lowerBound,
         intArray[lowerBound]);
      printf("upperBound : %d, intArray[%d] = %d\n",upperBound,upperBound,
         intArray[upperBound]);
      comparisons++;

      // compute the mid point
      // midPoint = (lowerBound + upperBound) / 2;
      midPoint = lowerBound + (upperBound - lowerBound) / 2;

      // data found
      if(intArray[midPoint] == data) {
         index = midPoint;
         break;
      } else {
         // if data is larger
         if(intArray[midPoint] < data) {
            // data is in upper half
            lowerBound = midPoint + 1;
         }
         // data is smaller
         else {
            // data is in lower half
            upperBound = midPoint -1;
         }
      }               
   }
   printf("Total comparisons made: %d" , comparisons);
   return index;
}

void display() {
   int i;
   printf("[");

   // navigate through all items
   for(i = 0;i<MAX;i++) {
      printf("%d ",intArray[i]);
   }

   printf("]\n");
}

void main() {
   printf("Input Array: ");
   display();
   printline(50);

   //find location of 1
   int location = find(55);

   // if element was found
   if(location != -1)
      printf("\nElement found at location: %d" ,(location+1));
   else
      printf("\nElement not found.");
}
```
### Output:
```
Input Array: [1 2 3 4 6 7 9 11 12 14 15 16 17 19 33 34 43 45 55 66 ]
==================================================
Comparison 1
lowerBound : 0, intArray[0] = 1
upperBound : 19, intArray[19] = 66
Comparison 2
lowerBound : 10, intArray[10] = 15
upperBound : 19, intArray[19] = 66
Comparison 3
lowerBound : 15, intArray[15] = 34
upperBound : 19, intArray[19] = 66
Comparison 4
lowerBound : 18, intArray[18] = 55
upperBound : 19, intArray[19] = 66
Total comparisons made: 4
Element found at location: 19
```
