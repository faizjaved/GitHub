/*
 Find Product
You have been given an array A of size N consisting of positive integers. 
You need to find and print the product of all the number in this array Modulo 10^9+7.

Input Format:
The first line contains a single integer 
N denoting the size of the array. The next line contains 
N space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo 
10^9+7.

Constraints:
1=N=10000
1=A[i]=10000

SAMPLE INPUT 
5
1 2 3 4 5
SAMPLE OUTPUT 
120

*/

#include <stdio.h>
int main()
{
int i,n,a[1000];
long long int m=1;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
m=(m*a[i])%1000000007;
}
printf("%lli",m);
return 0;
}