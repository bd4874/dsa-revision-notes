// Author: REET

/*
Linear Probing is a collision resolution
technique.
It comes under closed hashing.
So we don't need extra spaces.

================INSERTING================
For inserting, we use modified hash 
function. 
    h(x) = (h(x) + f(i)), where f(i)=i
    i = 0, 1, 2, ...
Go to the index provided by the hash 
function if it's vacant just put the 
element there else keep moving until you
get a  vacant space for insertion.
It is done in circular fashion.
It is little time taking method(not
linear).

================SEARCHING================
Go to the index provided by the hash 
function if element is present there, 
well and good you've found the element
else keep moving on the next index until
you find the element.
If you encounter space while moving that
means element is not present.
So simply stop moving ahead.

================ANALYSIS=================
For linear probing the loading factor 
should be less than 0.5 only.
Time taken:
    For Average successful search
    t = (1/lambda)*ln(1/1-lambda)
    For Average unsuccessful search
    t = 1/1-lambda

================DELETING=================
Search for the element and delete that
but it is not that much easy as that
place will be vacant so you have to shift
all the element following hash function,
which is not that much easy.
So we first delete that element take out
all the elements and reinsert that a/c
to the hash function. This is known as 
rehashing.
As this process is kind of hectic and 
also time consuming so we don't usually
delete in linear probing hashing 
technique. Instead we can put a flag
which tells us whether that element is
present there or not.

================DRAWBACKS================
Loading factor should be less than 0.5
which implies that half of the space 
would be vacant.
Also there is cluster of element known
as primary clustering.
*/