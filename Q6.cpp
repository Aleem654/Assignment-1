#include<iostream>
using namespace std;
int main()
{
	int n, d, res, rem;
	cout<<"Enter the dividend: ";
	cin>>n;
	cout<<"Enter the divisor: ";
	cin>>d;
	while(n>=d)
	{
		n-=d;
		res++;
	}
	rem=n;
	cout<<"The division result is: "<<res<<" with remainder: "<<rem;
}
	
	