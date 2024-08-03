#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    float base,expo,result;
    cout<<"enter the base and exponenet:";
   
    cin>>base>>expo;
    result= pow (base,expo);
    cout<<result<<endl;
    return 0;
}