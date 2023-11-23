#include<iostream>
using namespace std;
int main()
{
	int n, x, i, j, k;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the integer of which you want to find the triplets: ";
	cin>>x;
	cout<<"The triplets are: ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[i]+a[j]+a[k]==x)
					cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
			}
		}
	}
}