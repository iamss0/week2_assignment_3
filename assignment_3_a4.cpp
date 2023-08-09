// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    // path1: without an extra variable, using ap formula
    int n, a =4 ;
    cout<<"Enter number of terms: ";
    cin>>n;
    int nth_term = 3*n+1;
    for(int i =4; i<=nth_term;i+=3){
        cout<<i<<" ";
    }
    cout<<endl;
    //path2:- using an extra variable
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a += 3;
    }
}