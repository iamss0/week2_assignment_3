// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a
// while loop.
#include<iostream>
using namespace std;
int main(){
    int i =0;
    while (i<26)
    {
        cout<<"ASCII "<<(int)(i+'a')<<" is for the alphabet "<<(char)(i + 'a')<<"\n";
        i++;
    }    
}