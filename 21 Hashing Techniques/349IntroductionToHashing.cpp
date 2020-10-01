// Author: REET

/*
==============INTRODUCTION===============
So far we already know searching 
algorithms like linear search(O(n)) & 
faster one binary search(O(logn)).
Binary search is only applicable for
sorted array.
This can further be improved if we
search using Hashing Technique(O(1)).
But the space consumption is going to be
more.
For hashing we need to map elements from
the domain to the range.
Now the mapping can be of several types
like 1)One -> One     [Function] 
     2)One -> Many    [Not a function] 
     3)Many -> One    [Function] 
     4)Many -> Many   [Not a function] 
One to one hashing is known as ideal
hashing. One drawback is consumption of
huge space.
If you modify the ideal hash function to
any other function lets say modulus
function. Then there is going to be
collisions. And the function may be many
one.
The solution for collision are as follow
1)Open Hashing (Extra space required)
    a)Chaining
2)Closed Hashing (No extra space)
  *Open Addressing (Key not neccessarily
  needs to be stored at place provided by
  hash function)
    a)Linear Probing
    b)Quadratic Probing
    c)Double Hashing
*/