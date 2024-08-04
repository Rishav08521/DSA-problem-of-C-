#include<iostream>
using namespace std;
int add(int n1 , int n2){
    int sum=n1+n2;
    return sum;
}
int main(){
    int a=2;
    int b=4;
    cout<<add(a,b)<<endl;
    return 0;
}