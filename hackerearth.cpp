// #include <bits/stdc++.h>
// using namespace std;

// int findHCF(int num1, int num2)
// {
    
//     if (num1 == 0 || num2 == 0)
//     {
//         return (num1 + num2);
//     }

    
//     if (num1 == num2)
//     {
//         return num1;
//     }

   
//     if (num1 > num2)
//     {
//         return findHCF(num1 - num2, num2);
//     }
//     else
//     {
//         return findHCF(num1, num2 - num1);
//     }
// }

// int main()
// {
//     long long int t;
//     cin >> t;
//     while (t--)
//     {
//         long int a, b;
//         cin >> a >> b;
//         long int k = findHCF(a, b);
//         long int m=a/k;
//         long int n=b/k;
//         cout<<m*n<<endl;;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[n];
        }int b[q];
        for(int i=1;i<=q;i++){
            cin>>b[i];
        }
        cout<<Solution()
    }
}