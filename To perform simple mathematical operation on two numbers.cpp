#include<iostream>
using namespace std;
int main()
{
	int  a,b,c,d;
	char op;
	cout<<"Enter any two number"<<endl;
	cin >>a;
	cin >>b;
	cout<<"enter any operand (+,-,*,/,)"<<endl;
	cin>>op;
	
	if ( op=='+')
	{cout<<"the sum of two numbers is = "<<a+b<<endl;}
	else if (op=='-')
	{cout<<"the difference of two numbers is = "<<a-b<<endl;}
	else if (op=='*')
	{cout<<"the product of two numbers is = "<<a*b<<endl;}
	else if (op=='/')
	{cout<<"the ratio of two numbers is = "<<a/b<<endl;}
	else
    {cout<<"Wrong operator";}
      
    return 0;
	  
	}


