#include<iostream>
#include <string>
using namespace std;
void preQsBc(char *x,int m,int qsBc[]);
void QS(char *x,int m,char *y,int n);
void main()
{
	QS("abab",4,"abcababa",8);
}
void preQsBc(char *x,int m,int qsBc[])
{
	int i;

	for(i=0;i<256;++i)
	{
		qsBc[i] = m + 1;
	}
	for(i=0;i<m;++i)
	{
		qsBc[x[i]] = m - i;
	}
}
void QS(char *x,int m,char *y,int n)
{
	int j , qsBc[256];

	/*preprocessing*/
	preQsBc(x,m,qsBc);

	/*��кǹ��� Searching*/
	j=0;
	while(j <= n-m)
	{
		if(memcmp(x,y+j,m) == 0) 
		printf("Found at %d\n",j);
		printf("Before add j = %d qsBc[%c] = %d \n",j,y[j+m],qsBc[y[j+m]]);
		j += qsBc[y[j+m]];
		printf("After add j = %d \n",j);
	}
}
