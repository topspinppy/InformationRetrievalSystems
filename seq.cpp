#include<iostream>
using namespace std;
int sequentialSearch (int key[],int size,int value);
void main()
{
	cout<<"Sequencial Search"<<endl;


	int a[5];
	int x;

	a[0] = 5;
	a[1] = 8;
	a[2] = 12;
	a[3] = 72;
	a[4] = 93;

	x = sequentialSearch (a,5,72);

	cout<<x<<endl;
}
int sequentialSearch (int key[],int size,int value)
{
	int i=0;

	for(; i<size && key[i] != value ; i++);

	if(i < size)
		return i;

	return -1;
}