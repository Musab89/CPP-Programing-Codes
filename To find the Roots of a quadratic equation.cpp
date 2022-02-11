#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g;
	cout<<"enter the values of a , b and c"<<endl;
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c);
	e=2*a;
	f=(-b+sqrt(d))/e;
	g=(-b-sqrt(d))/e;
	cout<<"the roots of the quadratic equation are as follows "<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	return 0;
	
}
