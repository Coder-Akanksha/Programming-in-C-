#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    char ope;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"\n Enter the value of b: ";
    cin>>b;
    cout<<"\n Enter the operation : ";
    cin>>ope;
    if(ope == '+'){
        c=a+b;
        cout<<c;
     
    }
    else if(ope == '-'){
        c=a-b;
        cout<<c;
    }
   else if(ope == '*'){
        c=a*b;
        cout<<c;
   }
   else if(ope == '/'){
    c=a/b;
    cout<<c;
   }
    else if(ope == '%'){
    c=a%b;
    cout<<c;
   }
    else{
        cout<<"wrong operator entered";
    }
    return 0;
}