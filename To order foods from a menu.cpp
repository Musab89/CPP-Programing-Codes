#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	string name,shopname;
	int totalbill,nooforders,quantity,ordernumber,temp;
	totalbill=0;
	

	cout<<"what is your good name sir/madam?"<<endl;
	cin>>name;
	{//MENU
		cout<<"---------------------------------Menu---------------------------------"<<endl;
		cout<<"No Items						Prices"<<endl;
		cout<<endl;
		cout<<"1) Sausage						Rs:220"<<endl;
		cout<<"2) Cheese and Mushroom Omelet				Rs:50"<<endl;
		cout<<"3) Paratha						Rs:25"<<endl;
		cout<<"4) French Toast						Rs:45"<<endl;
		cout<<"5) Coffee						Rs:120"<<endl;
		cout<<"6) Tea							Rs:40"<<endl;
		cout<<"7) Pan cake with Nutella serving			Rs:395"<<endl;
		cout<<"----------------------------------------------------------------------"<<endl;
	}
	cout<<"customer name "<<name<<endl;
	cout<<"How many itemms you want to order"<<endl;
	cin>>ordernumber;
	if( nooforders>=1)

{
for(int i=1;i<=nooforders;i++)
{
	cout<<"	Please Enter Code of menu"<<endl;
	cin>>ordernumber;
	if(ordernumber==1)
	{
	cout<<"what is quantity"<<endl;
	cin>>quantity;
	cout<<"sausage ordered "<<endl;
	temp= 220 * quantity;
	}
	else if(ordernumber==2)
	{
	cout<<"what is quantity"<<endl;
	cin>>quantity;
	cout<<"mushroom and cheese omelet ordered"<<endl;
	temp= 50 *quantity;
	}
	else if(ordernumber==3)
	{
	cout<<"what is quantity"<<endl;
	cin>>quantity;
	cout<<"paratha ordered"<<endl;
	temp= 25 *quantity;
	}
	else if(ordernumber==4)
	{
	cout<<"what is quantity"<<endl;
	cin>>quantity;
	cout<<"french toast";
	temp= 45 *quantity;
	}
	else if(ordernumber==5)
	{
	cout<<"what is quantity"<<endl;
	cin>>quantity;
	cout<<"coffee ordered"<<endl;
	temp= 120 *quantity;
	}
	else if(ordernumber==6)
	{cout<<" what is quantity"<<endl;
	cin>>quantity;
	cout<<"tea ordered"<<endl;
	temp= 40 *quantity;
	}
	else if(ordernumber==7)
	{
	cout<<"what is quantity"<<endl;
    cin>>quantity;
	cout<<"pan cake with nutella serving ordered"<<endl;
	temp=395*quantity;
	}
	else
	{
		cout<<"not available"<<endl;
	}
	totalbill=totalbill+temp;
	temp=0;
	quantity=0;
    }   
	
{
	cout<<"Your total bill is "<<totalbill<<endl;
}
}
else  

{
		cout<<"You entered 0 No. Of order"<<endl;

	}	return 0;

}
