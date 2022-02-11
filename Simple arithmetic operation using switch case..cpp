#include<iostream>
using namespace std;
int main()
{
 
      int a,b,c;
      cout<<"enter any two numbers"<<endl;
      cin>>a>>b;
      char op;
      cout<<"enter any operand(+,-,*,/)"<<endl;
      cin>>op;
      
      switch(op)
      {
      	
      	case'+':
      		
      	cout<<"addition of two numbers is "<<a+b<<endl;
		break;
		
		case'-':
		cout<<"substraction of two numbers is "<<a-b<<endl;
		break;
		
		case'*':
		cout<<"product of two numbers is "<<a*b<<endl;
		break;
		
		case'/':
		cout<<"ratio of two numbers is "<<a/b<<endl;	
		break;
	    default  :
	  	cout<<"wrong operator";
      return 0;
}
