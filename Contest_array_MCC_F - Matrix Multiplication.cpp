/*
Write a program which reads a n×m matrix A and a m×l matrix B, and prints their product, a n×l matrix C. An element of matrix C is obtained by the following formula:
      m
cij = ∑aik.​bkj
      k-1
​
where aij, bij and cij  are elements of A, B and C respectively.
​Input
In the first line, three integers n,m,l are given separated by space characters

In the following lines, the n×m matrix A and the m×l matrix B are given.

Output

Print elements of the n×l matrix C (cij). Print a single space character between adjacent elements.

Constraints
1≤n,m,l≤100
0≤aij,bij≤10000

Sample Input
3 2 3
1 2
0 3
4 5
1 2 1
0 3 2
Sample Output
1 8 5
0 9 6
4 23 14

*/

#include<iostream>
using namespace std;
int main(){
   long long int n, m,l;
   cin>>n>>m>>l;
   long long int a[n][m], b[m][l],c[n][l];
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		cin>>a[i][j];
    }
    }
    for(int i=0;i<m;i++){
    	for(int j=0;j<l;j++){
    		cin>>b[i][j];
    }
    }

    for(int i=0;i<n;i++){
    	for(int j=0;j<l;j++){
      		c[i][j]=0;
    		for(int k=0; k<m;k++){
     			c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
    }
    }
    }

    for(int i=0;i<n;i++){
    	for(int j=0;j<l;j++){
    		if(j!=l-1)	cout<<c[i][j]<<" ";
    		else   cout<<c[i][j]<<"\n";
    }
    }
}

