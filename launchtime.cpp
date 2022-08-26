// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x;
//         cin>>x;
//         if(x<=15){
//             cout<<"yes"<<endl;
//         }
//         else{
//             cout<<"no"<<endl;
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         if((a-c)>0 && (b-d)>0){
//             cout<<max((a-c),(b-d))<<endl;
//         }
//         else if((a-c)<0 && (b-d)>0){
//             cout<<max((c-a),(b-d))<<endl;
//         }
//         else if((a-c)>0 && (b-d)<0){
//             cout<<max((a-c),(d-b))<<endl;
//         }
//         else{
//             cout<<max((c-a),(d-b))<<endl;
//         }  
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x;
//         cin>>x;
//         if(x%4==0){
//             cout<<"GOOD"<<endl;
//         }
//         else{
//             cout<<"NOT GOOD"<<endl;
//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int x,y;
//     cin>>x>>y;
//     cout<<x-y/2<<endl;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         vector<ll>code;
//         ll chef=0;
//         for(ll i=0;i<n;i++){
//             ll y;
//             cin>>y;
//             code.push_back(y);
//             chef+=y;
//         }
//         ll sneh=chef;
//         ll max=0;
//         vector<pair<ll,ll>>op;
//         for(ll i=0;i<n;i++){
//             max+=code[i];
//             op.push_back({max,sneh-max});
//         }
//         sort(op.begin(),op.end(),[&](pair<ll,ll>&a,pair<ll,ll>&b){
//             return abs(a.first-a.second)<abs(b.first-b.second);
//         });
//         if(op[0].first>op[0].second){
//             cout<<op[0].first<<endl;
//         }
//         else{
//             cout<<op[0].second<<endl;
//         }
//     }
// }
/* This C program is prepared by Pushkar Choudhary
Roll No : 202152333
Date of preparation : 05/03/2022

This program display the stored binary equivalent of a given signed integer on the screen, using bitwise operators.*/

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//  int a, b;
// printf("give a number to create its binary\n");
//  scanf("%d", &a);
 
//  for(int i=31; i>=0; i-- )
//  { b=a>>i;
//  if(b&1)
//  printf("1");
//  else printf("0");
 
//  }
 
 
//  return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,y;
//         cin>>x>>y;
//         int sum=((x*107)/100);
//         if(sum<=y){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a = 10*n;
//         int b = 15*n;
//         cout<<50*n-2*a-b<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int ans;
        if(x==1||x==n||y==1||y==n){
            ans=(n-1)*3;`
        }else{
            ans=(n-1)*3;
        }
        if(x>n/2){
            x=(n+1)-x;
        }if(y>n/2){
            y=(n+1)-y;
        }
        int a = min(x,y);
        if(n%2!=0 && x==y && x=(n/2)+1){
            ans+=(n-1);
        }else{
            ans+=(a-1)*2;
        }
        cout<<ans<<endl;
    }
}