#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numn:";
    cin>>n;
    int sum=0;
    while(n>0){
        int last=n%10;
        sum=sum+last;
        n/=10;
    }
    cout<<sum<<endl;
    return 0;
}