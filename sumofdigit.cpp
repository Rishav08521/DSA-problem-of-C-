#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num n:";
    cin>>n;
    int sumofdigit=0;
    while(n>0){
        int lastdigit=n%10;
        sumofdigit=sumofdigit+ lastdigit;
        n=n/10;
    }
    cout<<sumofdigit<<endl;
    return 0;
}