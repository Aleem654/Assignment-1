#include<iostream>
using namespace std;
int main()
{
	int n, p, i, j=1;
	bool j_is_prime;
	cout<<"Enter an integer: ";
	cin>>n;
	while(j<=n)
	{
		j_is_prime=true;
		i=2;
		while(i<=j/2)
		{	
			if(j%i==0)
			{
				j_is_prime=false;
				break;
			}
			i++;
		}
		if(j_is_prime==1)
			p=j;
		j++;
	}
	cout<<"The Largest prime number smaller than or equal to "<<n<<" is: "<<p;
}