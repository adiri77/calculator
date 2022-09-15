#include<iostream>
using namespace std;
int main(){
int b ,c,a;
char n;
cout<<"ENTER OPERAND"<<" ";
cin>>n;

cout<<"b="<<" ";
cin>>b;

cout<<"c="<<" ";
cin>>c;

switch(n)
{
    case '+':
    a=b+c;
    break;

     case '-':
    a=b-c;
    break;

     case '*':
    a=b*c;
    break;

     case '/':
    a=b/c;
    break;

    default: cout<<"INVALID OPERAND";
}
cout<<a;
return 0;



}
