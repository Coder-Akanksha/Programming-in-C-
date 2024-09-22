#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"*****Even/Odd checker*****";
    cout<<"\n Enter an Integer number that you want to check: ";
    cin>>n;
    if(n%2==0){
        cout<< n <<" is the Even number "<<endl;
    }
    else{
        cout<< n <<" is the Odd number"<<endl;
    }
    return 0;
}