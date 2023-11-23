#include<iostream>
#include<cctype>
#include<string.h>
using namespace std;
int main()
{
	string s;
	int i, j;
	cout<<"Enter a string: ";
	cin>>s;
	string s1=s;
	for(i=0;i<s1.size();i++)
	{
		s1[i]=tolower(s[i]);
	}
	for(i=0;i<s1.size();i++)
	{
		for(j=i+1;j<s1.size();j++)
		{
			if(s1[i]==s1[j])
			{
				s[i]=' ';
				s[j]=' ';
			}
		}
	}
	cout<<"After removing all duplicate characters the string is: "<<s;
}