// Author: REET

/*
=======DEFINITION OF BIINARY TREE=======
Trees having maximum number of nodes as 2
are known as binary trees.
It can have 0,1,2 children only. Not more 
than 2.

====NO. OF TRESS FOR UNLABELLED NODES====
*Catalan Number
T(n) = 2nCn/n+1
e.g. T(3)=5, T(5)=42...
*Recursive formula
T(n) = Summ(i=1 to n)T(i-1) * T(n-i)

======TREES WITH MAXm HEIGHT FOR UN======
*Max height trees = 2^(n-1)

=====NO. OF TRESS FOR LABELLED NODES=====
*T(n) = (2nCn/n+1)*n!
2nCn/n+1 -> for shapes
n! -> for filling
*/