Part A
========================================
Compilation
----------------------------------------
Use "make a" to compile the program lab3_a.

Part B
=========================================
Compilation
-----------------------------------------
Use "make b" to compile the program lab3_b.

Empirical results
-----------------------------------------
### size 1000
	sort(): 0 seconds
	v1 and v2 are different.
	insertion_sort(): 0.02 seconds
	v1 and v2 are the same.
	

### size 10000
	sort(): 0 seconds
	v1 and v2 are different.
	insertion_sort(): 1.31 seconds
	v1 and v2 are the same.
	
### size 100000
	sort(): 0.05 seconds
	v1 and v2 are different.
	insertion_sort(): 127.99 seconds
	v1 and v2 are the same.
	
### size 1000000
	sort(): 0.56 seconds
	v1 and v2 are different.
	Write failed: Broken pipe
	
Explaination
--------------------------------------------
When size=1000000, it is hard to wait for such long time.<br/>
SSH automatically throw the message "Write failed: Broken pipe" and disconnect.

std::sort is used quick sort which is a divide and conquer algorithm.<br/>
Hence, the complexity is O(n log(n)).

Observe the following insertion sort code.
```c++
for(int next=1; next<v.size(); next++)
{
	insert = v.at(next); 
	moveItem = next;
	while((moveItem>0) && (v.at(moveItem-1) > insert))
	{
		v.at(moveItem) = v.at(moveItem-1);
		moveItem--;
	}
	v.at(moveItem) = insert;
}
```
A while loop is in a for loop; therefore the complexity is O(n^2).

By the empirical results.<br />
Compare the expected time with the result to confirm the complexity is right.

	sort():				size 100000 v.s. 1000000
	Expected:			0.05*(1000000/100000)*(log(1000000)*log(100000)) = 0.6
	result:				0.56
	
	insertion_sort:		size 10000 v.s. 100000
	Expected:			1.31*(100000/10000)^2 = 131
	result:				127.99	
	
The expected time is close to result one.<br/>
The complexity is confirmed to be right!
