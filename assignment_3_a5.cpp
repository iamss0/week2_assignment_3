// Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n, a=3;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i =1;i<=n;i++){
        cout<<a<<" ";
        a *= 4;
    }
}