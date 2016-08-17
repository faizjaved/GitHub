/*
Count the bits 
Given a number N, print the number of set bits in the binary representation of this number.

Input:
The first contains a single integer T denoting the number of test cases.
Each test case contains a single integer N

Output:
For each test case, print a single integer denoting the number of set bits in 
the binary representation of the given N .

Constraints:

1=T=1000
1=N=1000

SAMPLE INPUT 
1
4

SAMPLE OUTPUT 
1

*/

#include <stdio.h>
 
int main()
{
    int t,i,a,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    	a=0;
    	scanf("%d",&n);
    	while(n!=0)
    	{
    		n=n&(n-1);
    		a++;
    	}
    	printf("%d\n",a);
    }
    return 0;
}