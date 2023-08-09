// Print all numbers from 1 to 100 that are divisible by 3
#include<iostream>
using namespace std;
int main(){
    // path1:- without if else
    for(int i =3;i<=100;i+=3){
        cout<<i<<" ";
    }
    cout<<endl;
    // path2:- with if else
    for(int j=1; j<100; j++){
        if (j%3 == 0)
        {
            cout<<j<<" ";
        }
        
    }
}