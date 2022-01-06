//Find max 10 numbers in a list having 10M entries.
//Approach1:
/* 
    Maintain a minHeap of size 10
    Let's say you insert first 10 numbers (1,2,3,4,5,6,7,8,9,10) to the heap so that "1" will be the root
    Now next number is 11
    compare 11 with the root element
    if it is greater then remove the root and insert the number
    if it is smaller then do nothing
    In the end you will have largest 10 elements in the heap

    Followup: how do you handle if you have duplicates as well
*/
//Approach2:
/* 
It can be solved in a single traversal i.e. O(n) Time complexity.
APPROACH: Imagine the question as to find the max number from 10M entries : You would maintain a max int variable while iterating towards all the numbers.
Now, let's say we need to find max 2 numbers, then it can be done by maintaining 2 int variables and just adding one more if condition from above approach.
Finally for finding 10 numbers you can take int max[] = new int[10] and maintain 10 if conditions while iterating.
*/