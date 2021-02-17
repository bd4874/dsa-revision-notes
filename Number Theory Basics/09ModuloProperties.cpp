// Modulo Properties 
// Author: REET

/*
(a+b)%m = ((a%m)+(b%m))%m
(a-b)%m = ((a%m)-(b%m)+m)%m
(a*b)%m = ((a%m)*(b%m))%m
(a/b)%m = ((a%m)*((b^-1)%m))%m
where b^-1 is multiplicative modulo
inverse
Let's say we need to find value of y in
the equation
(6*y)%7=1
Here clearly value of y is 6, which is
multiplicative modulo inverse of 6 wrt
7.

Extra TIP:
If you are trying to calculate (a+b)%n,
where a and b can be negative also.
mod = (a+b)%n;
mod = (mod+n)%n;
a=2, b=4, n=5
then mod = (2+4)%5 = 6%5 = 1
again mod = (1+5)%5 = 1

a=2, b=-4, n=5
then mod = (2-4)%5 = -2%5 = -2
again mod = (-2+5)%5 = 3

a=2, b=-8, n=5
then mod = (2-8)%5 = -6%5 = -1
again mod = (-1+5)%5 = 4
*/