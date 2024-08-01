#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num n:";
    cin>>n;
    for(int i=1;i<=n-2;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}