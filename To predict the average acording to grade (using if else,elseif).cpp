#include <iostream>
using namespace std;
int main()
{
char grade;
cout<<"Enter your grade(a,b,c,d,f):"<<endl;
cin>>grade;
if (grade=='a'||grade=='A')
{

cout<<"Your average must be between 90 – 100"<<endl; }

else if (grade=='b'||grade=='B')
{
cout<<"Your average must be between 80 - 89"<<endl;
}
else if (grade=='c'||grade=='C')
{
cout<<"Your average must be between 70 - 79"<<endl;
}
else if (grade=='d'||grade=='D')
{
cout<<"Your average must be between 60 - 69"<<endl;}

else 
{
cout<<"Your average must be below 60"<<endl;}
return 0;

}
