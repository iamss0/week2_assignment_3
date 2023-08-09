// Print all the odd numbers from 1 to 100.
#include<iostream>
using namespace std;
int main(){
    // path1:- without if else
    for(int i =1;i<=100;i+=2){
        cout<<i<<" ";
    }
    cout<<endl;
    // path2:- with if else
    for(int j=1; j<100; j++){
        if (j%2 != 0)
        {
            cout<<j<<" ";
        }
        
    }
}