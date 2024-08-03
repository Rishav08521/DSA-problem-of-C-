#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    //int ans=0;
    cout<<"enter the n:";
    cin>>n;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
    return count;

}