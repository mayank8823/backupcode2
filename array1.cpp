// day 1: 24/02/2022
// Problem Tag : LTG
// sample input :
// 5
// 140 82
// 89 134
// 90 110
// 112 106
// 88 90

// #include <iostream>
// using namespace std;

// int main() {
//  // your code goes here
//  int a, b, c, diff, max=0, winner, temp, p1=0, p2=0;
//  cin>>a;
//  while(a--) {
//   cin>>b>>c;
//   p1=p1+b;
//   p2=p2+c;
//   if(p1>p2) {
//    diff=p1-p2; temp=1;
//   }
//   else {
//    diff=p2-p1; temp=2;
//   }
//   if(diff>max) {
//   max=diff; winner=temp;
//   }
//  }
//  cout<<winner<<" "<<max;
//  return 0;
// }

// Problem Tag : TEMPLELA
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int s;
//     cin>>s;
//     while(s--){
//         int n;
//         cin>>n;
//         int h[n];
//         for(int i=0;i<n;i+){
//             cin>>h[i];
//         }
//         if(h[0]!=1){
//             cout<<"no"<<endl;
//         }
//         else if(h[0]==1){
//             for(int i=0;i<=n/2;i++){
                
//             }
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y;
//         cin>>x>>y;
//         int p;
//         for(int i=0;i<y;i++){
//             p=x+1;   
//         }
//         if(p%2==0){
//             cout<<"janmansh"<<endl;
//         }
//         else{
//             cout<<"jay"<<endl;
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,a,b,c;
//         cin>>x>>a>>b>>c;
//         if(x<3){
//             if(a<b && a<c && b<c){
//                 cout<<a+b<<endl;
//             }
//             else if(a<b && a<c && b>c){
//                 cout<<a+c<<endl;
//             }
//             else if(b<a && b<c && a<c){
//                 cout<<a+b<<endl;
//             }
//             else if(b<a && b<c && a>c){
//                 cout<<b+c<<endl;
//             }
//             else if(c<a && c<b && a>b){
//                 cout<<c+b<<endl;
//             }
//             else if(c<a && c<b && a<b){
//                 cout<<a+c<<endl;
//             }                        
//         }
//         else{
//             cout<<a+b+c<<endl;
//         }

//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,a,b,c;
//         cin>>x>>a>>b>>c;
//         if(x<3 && b<=c && a<=c){
//             cout<<a+b<<endl;
//         }
//         else if(x<3 && b>=c && b>=a){
//             cout<<a+c<<endl;
//         }
//         else if(x<3 && a>=c && a>=b){
//             cout<<b+c<<endl;
//         }
//         else{
//             cout<< a+b+c<<endl;
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int k,x;
//         cin>>k>>x;
//         cout<<k-x<<endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         // n - 2 m - 4
//         cout<<2*n+4*m<<endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int i,n,x;
//         cin>>n>>x;
//         int a[n];
//         for(i=0;i<n;i++){
//             cin>>a[i];
//         }
//         if(a[i]<x){
//             for(int j=1;j<i;j++){
//                 cout<<i+j<<endl;
//             }
//         }
//         else{
//             cout<<0<<endl;
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        for(int i=0;i<n;i++){
            cout<<str[i];
        }
        
    }
}