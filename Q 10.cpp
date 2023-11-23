#include<iostream>
using namespace std;
int main()
{
	int n, i, j, swap;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap=a[i];
				a[i]=a[j];
				a[j]=swap;
			}
		}
	}
	cout<<"The array after bubble sort is: ";
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}