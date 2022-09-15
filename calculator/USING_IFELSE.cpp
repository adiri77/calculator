#include<iostream>
using namespace std;
int main(){
    char n;
    int a,b,c;
    cout<<"ENTER OPERAND"<<" ";
    cin>>n;

    cout<<"a="<<" ";
    cin>>a;

    cout<<"b="<<" ";
    cin>>b;

    if(n=='+'){
        c=a+b;
    }
    else if(n=='-'){
        c=a-b;
    }
    else if(n=='*'){
        c=a*b;
    }
    else if(n=='/'){
        c=a/b;
    }

    cout<<c;
    return 0;
}