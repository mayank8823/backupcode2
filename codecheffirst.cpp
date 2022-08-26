#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N%9==0){
        cout<<9;
    }
    else if(N%8==0){
        cout<<8;
    }
    else if(N%7==0){
        cout<<7;
    }
    else if(N%6==0){
        cout<<6;
    }
    else if(N%5==0){
        cout<<5;
    }
    else if(N%4==0){
        cout<<4;
    }
    else if(N%3==0){
        cout<<3;
    }
    else if(N%2==0){
        cout<<2;
    }
    else{
        cout<<1;
    }
    
    
}