#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"\n Enter the value of b:";
    cin>>b;
    cout<<"\n Enter the value of c:";
    cin>>c;
    if(a>=b && a>=c){
        cout<< a << " is the gretest number"<<endl;
    }
    else if(b>=a && b>=c){
        cout<< b <<" is the gretest number"<<endl;
    }
    else{
        cout<< c <<" is the gretest number"<<endl;
    }
    return 0;
}