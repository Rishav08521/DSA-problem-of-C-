#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num n:";
    cin>>n;
    int revrse=0;
    while(n>0){
        int an=n%10;
        revrse=revrse*10+an;
        n/=10;
    }
    cout<<revrse<<endl;
    return 0;
}