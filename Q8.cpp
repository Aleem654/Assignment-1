#include<iostream>
using namespace std;
int main()
{
	int n, i, a[5]={1,2,3,4,5};
	cout<<"Enter the number of elements you want to add: ";
	cin>>n;
	int b[5+n];
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
	cout<<"Enter the additional "<<n<<" elements: ";
	for(i=1;i<=n;i++)
		cin>>b[4+i];
	cout<<"The array with the additional elements is: ";
	for(i=0;i<5+n;i++)
		cout<<b[i]<<" ";
}