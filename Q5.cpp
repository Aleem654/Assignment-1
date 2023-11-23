#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1, s2;
	int i;
	bool e=1;
	cout<<"Enter the fist string: ";
	cin>>s1;
	cout<<"Enter the second string: ";
	cin>>s2;
	if(s1.size()==s2.size())
	{
		for(i=0;i<s1.size();i++)
		{
			if(s1[i]!=s2[i])
				{ e=false;
				break;}
		}
		if(e==false)
			cout<<"The strings are not equal.";
		else
		{
			for(i=0;i<s1.size();i++)
			{
				s1[s1.size()-i-1]=s2[i];
			}
			cout<<"The strings entered were equal. To make them unequal the first string has been rotated. The first string is now :"<<s1<<endl;
		}
		
	}
	else
	cout<<"The strings are not equal.";
	
}
	
	