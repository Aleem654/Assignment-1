#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"The factors of the number are: \n";
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			cout<<i<<endl;
	}
}