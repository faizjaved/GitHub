/*
Given the size and the elements of array 
A, print all the elements in reverse order.

Input:
First line of input contains, N - size of the array. 
Following N lines, each contains one integer, 
ith element of the array i.e. A[i].

Output:
Print all the elements of the array in reverse order, each element in a new line.

Constraints:

1=N=100
0=A[i]=1000

SAMPLE INPUT 
5
4
12
7
15
9

SAMPLE OUTPUT 
9
15
7
12
4
*/

#include <stdio.h>
int main()
{
    int n, c, d, a[100], b[100];
	scanf("%d", &n);

    for (c = 0; c < n ; c++)
    	scanf("%d", &a[c]);

    for (c = n - 1, d = 0; c >= 0; c--, d++)
        b[d] = a[c];

    for (c = 0; c < n; c++)
        printf("%d\n", b[c]);
	return 0;
}
