#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the row n:";
    //cout<<"enter the column m";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;  //space=n-i
                // num=2*i-1

}