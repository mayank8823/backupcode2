// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         /* code */
//         int x;
//         cin>>x;
//         int n=3;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }

//         if(x==1){
//             if(a[0]==0 || a[0]==1){
//                 cout<<"NO"<<endl;
//             }
//             else{
//                 if((a[1]==3)&&(a[2]==2)){
//                     cout<<"YES"<<endl;
//                 }else if((a[1]==2)&&(a[2]==3)){
//                     cout<<"YES"<<endl;
//                 }else{
//                     cout<<"NO"<<endl;
//                 }
//             }
//         }

//         else if(x==2){
//                 if((a[0]==3 && a[2]==1)){
//                     cout<<"YES"<<endl;
//                 }
//                 else if((a[0]==1 && a[2]==3)){
//                     cout<<"YES"<<endl;
//                 }
//                 else{
//                     cout<<"NO"<<endl;
//                 }

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

//         if(x==1){
//             if((a==2 && b==3)|| (a==3 && c==2)){
//                 cout<<"YES"<<endl;
//             }
//             else{
//                 cout<<"NO"<<endl;
//             }
//         }

//         else if(x==2){
//             if((b==1 && a==3)||(b==3 && c==1)){
//                 cout<<"YES"<<endl;
//             }else{
//                 cout<<"NO"<<endl;
//             }
//         }
//         else{
//             if((c==2 && b==1)||(c==1 && a==2)){
//                 cout<<"YES"<<endl;
//             }else{
//                 cout<<"NO"<<endl;
//             }
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         if (n % 2 == 0)
//         {

//             for (int k = 1; k <= n / 4; k++)
//             {
//                 cout << n + 1 - k << " ";
//             }

//             for (int l = n / 2; l >= n / 4 + 1; l--)
//             {
//                 cout << n - l + 1 << " ";
//             }

//             for (int j = (n / 2) + 1; j <= n; j++)
//             {
//                 cout << j - (n / 2) << " ";
//             }
//             cout << endl;
//         }
//         else{

//             for(int i = n/4;i>=1;i--){
//                 cout<<n+1-i<<" ";
//             }

//             for(int k = n/4+1;k<=n/4+1;){
//                 cout<<n-k-1<<" ";
//             }

//             for(int l = n/4+2;l<=n/2;l++){
//                 cout<<l+n/3<<" ";
//             }

//             for(int m = n/2+2;m<=n;m++){
//                 cout<<
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n%2==0){
            
//         for(int perfect=2;perfect<=n;perfect++){
//                 cout<<perfect<<" ";
//             }cout<<1<<endl;
//         }
//         else{
//             if(n==1){
//                 cout<<1<<endl;
//             }
//             else{
//                 for(int permutation=2;permutation<=n;permutation++){
//                 cout<<permutation<<" ";
//             }cout<<1<<endl;
//             }
            
//         }
//     }
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         long long int a,b,c,d;
//         cin>>a>>b>>c>>d;
        
//         if((a*d)==(b*c)){
//             cout<<0<<endl;
//         }
//         else if(((a*d)%(b*c)==0) ||((b*c)%(a*d)==0)){
//             cout<< 1<<endl;
//         }
//         else{
//             cout<<2<<endl;    
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int t;
//     cin>>t;
//     while(t--){
//         long long int n;
//         cin>>n;
//         vector<long long int>v;
//         v.resize(n);
//         for(auto& it:v){
//             cin>>it;
//         }
//         sort(v.begin(),v.end());
        
//         cout<<v[n-1]+v[n-2]-v[0]-v[1]<<endl;
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
//         if(n==1){
//             cout<<2<<endl;
//         }
//         else if(n%3==0){
//             cout<<n/3<<endl;
//         }
//         else{
//             cout<<n/3 + 1<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
        int a,b,c;
        int count=0;
        for(int i=1;i<=t;i++){
            cin>>a>>b>>c;

            if((a==1&&b==1&&c==1)||(a==1&&b==1)||(b==1&&c==1)||(a==1&&c==1)){
                count++;
            }
        }
        cout<<count<<endl;
    
}