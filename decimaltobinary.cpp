#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num n:";
    cin>>n;
    int binary=0;
    int power=1;
    while(n>0){
        int parity=n%2;
        binary+=parity*power;
        power*=10;
        n/=2;
    }
    cout<<binary<<endl;
    return 0;
}
