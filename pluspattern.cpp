#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-2;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}