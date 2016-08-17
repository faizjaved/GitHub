/*
Death, the Multiverse and Nothing

You'll be given an array A of N integers as input. 
For each element of the array A[i], print A[i]-1.

Input:
There will be N+1 iines of input each consisting of a single integer.
Integer in first line denotes N
For the following N lines the integer in ith line denotes the integer A[i-1]

Output:
For each element of the array A[i], print A[i]-1 in a new line.

Constraints:
1=N=10
1=A[i]=10

Sample Input
2
2
6

Sample Output
1
5
*/

#include<stdio.h>

int main()

{

int a,o[11],i;

scanf("%d",&a);

for(i=0;i<a;i++)
{

scanf("%d",&o[i]);
printf("%d\n",o[i]-1);

}

return 0;

}