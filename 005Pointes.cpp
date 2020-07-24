// Pointers
// Author: REET

/*
Pointers are just the variable which
store the address of another variable.
They are used for:
1. Accessing heap
2. Accessing resoureces
3. Parameter passing

To get pointer to heap memory
In C:
p = (int*)malloc(5*sizeof(int));
Malloc function returns a void pointer
so we need to type cast it as required
data type.
In C++:
p = new int[5];
*/