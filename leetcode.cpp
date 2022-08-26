#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i = 0;i<n;++i){
        cin>>num[i];
    }
    int x;
    cin>>x;
    int ct=0;
    for(int i=0;i<n;++i)
    {
        if(num[i]=x){
            ct++;
        }
        cout<<ct<<endl;
    }
}