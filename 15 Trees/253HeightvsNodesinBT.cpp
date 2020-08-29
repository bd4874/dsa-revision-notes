// Author: REET

/*
==========HEIGHT TO NODE COUNT==========
If height is given how many minimum and
maximum nodes are required to get that
height.
e.g. for h=1, min=2, max=3
     for h=2, min=3, max=7
     for h=3, min=4, max=15

*Min nodes(n) = h+1
*Max nodes(n) = 2^(h+1)-1

==========NODES TO HEIGHT COUNT==========
If number of nodes are provided then max
and min height of binary tree can be 
found by equating the formula.
*Max height(h) = n-1
*Min height(h) = (log(base2)(n+1))-1 

CONCLUSION:
Height of binary tree:
    (log(base2)(n+1))-1 <= h <= n-1
Number of nodes in a binary tree:
    h+1 <= n <= (2^h+1)-1  
*/