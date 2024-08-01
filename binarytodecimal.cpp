#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num n:";
    cin>>n;
    int decimal=0;
    int power=1;
    while(n>0){
        int binary=n%10;
        decimal=decimal+(binary*power);
        power*=2;
        n=n/10;

    }
    cout<<decimal<<endl;
    return 0;
}
