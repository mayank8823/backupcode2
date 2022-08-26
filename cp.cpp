// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		string str;
//         getline(cin, str);
// 		int sum=0;
// 		int diff=0;
// 		for(int i=0;i<n;i++){
// 			if(str[i]==0){
// 				sum++;
// 			}else{
// 				diff++;
// 			}
// 		}
// 		int ans = n-sum+diff;
// 		int res=(ans*100)/n;
// 		if(res>=75){
// 			cout<<"YES"<<endl;
// 		}else{
// 			cout<<"NO"<<endl;
// 		}
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		int a[n];
// 		for(int i=0;i<n;i++){
// 			cin>>a[i];

// 		}
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,a,d;
// 	cin>>n>>a>>d;
// 	cout<<d<<" "<<n-a-d<<endl;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int x,y;
// 		cin>>x>>y;
// 		if(x>=y){
// 			cout<<"0"<<endl;
// 		}else{
// 			if((y-x)%8!=0){
// 				cout<<(y-x)/8+1<<endl;
// 			}else{
// 				cout<<(y-x)/8<<endl;
// 			}
// 		}
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int x,y;
// 		cin>>x>>y;
// 		int d = 500-2*x;
// 		int e = 1000-4*(x+y);
// 		int f = 500 - 2*(x+y);
// 		int g = 1000 - 4*y;
// 		int h=d+e;
// 		int i = f+g;
// 		if(h>i){
// 			cout<<h<<endl;
// 		}else{
// 			cout<<i<<endl;
// 		}
// 	}
// }

//#include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,i;
// 	cin>>n;
// 	int arr[n];
// 	for(i=0;i<n;i++){
// 		cin>>arr[i];

// 	}
// 	int count=0;
// 	if(arr[0]==0){
// 	    for(int i=1;i<n;i++){

// 		if((arr[i])%(i)==0){
//         count++;
// 		}else{
//             count=count;
// 		}}
// 	}
//     if(n-1==count){
// 	   	cout<<"Preety"<<endl;
// 	}
// 	else{
// 		cout<<"not preety"<<endl;
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int x,y;
// 		cin>>x>>y;
// 		int z=x+200;
// 		if(y>=x && y<=z){
// 			cout<<"yes"<<endl;
// 		}else{
// 			cout<<"no"<<endl;
// 		}
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,i;
//         cin>>n;
//         int a[n];
//         for(i=1;i<=n;i++){
//             cin>>a[i];
//         }
//         if(n==2){
//             cout<<a[1]+a[2]<<endl;
//         }else if(a[i]=a[i+1]){
//             cout<<a[1]+a[n]<<endl;
//         }
//         else{
//             if(a[i]<a[i+1]){
//                 cout<<a[n]+a[n-1]<<endl;
//             }
//             else{
//                 int p = sizeof(a)/sizeof(a[0]);
//                 sort(a,a+p);
//                 int c = a[n];
//                 cout<<a[n-1]+c;
//             }

//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int n, i, result = 0;
// 		cin >> n;
// 		int a[n];
// 		for (i = 1; i <= n; i++)
// 		{
// 			cin >> a[i];
// 		}

// 		result = a[1] + a[n];

// 		for (i = 1; i <= n - 1; i++)
// 		{
// 			result = max(result, a[i] + a[i + 1]);
// 		}

// 		cout << result << endl;
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		string str1,str2;
// 		cin>>str1>>str2;
// 		string k,l;
// 		int count=0;
// 		set <char> set_s1(begin(str1), end(str1));
// 		set <char> set_s2(begin(str2), end(str2));
// 		for(auto i:set_s1){
// 			k=i;
// 			i++;
// 		}cout<<endl;
// 		for(auto i:set_s2){
// 			l =i;
// 		}cout<<endl;
// 		for(int i=0;i<n;i++){
// 			if(k[i]==l[i]){
// 				count=count;
// 			}else{
// 				count++;
// 			}
// 		}
// 		// cout<<count<<endl;
// 		cout<<k<<endl<<l<<endl;
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		string str1,str2;
// 		cin>>str1>>str2;
// 		set <char> str1;
// 		for (auto i : str1){
// 			str1.insert(i);
// 		}
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	string str;
// 	cin >> str;
// 	int count = 0;
// 	for (int i = 0; i < str.length(); i++)
// 	{
// 		for (int j = i + 1; j < str.length(); j++)
// 		{
// 			if (str[i] != str[j])
// 			{
// 				count++;
// 			}
// 		}
// 	}
// 	if (count % 2 == 0)
// 	{
// 		cout << "CHAT WITH HER!" << endl;
// 	}
// 	else
// 	{
// 		cout << "IGNORE HIM!" << endl;
// 	}
// }

// string s;
// cin >> s;
// sort(s.begin(), s.end());
// s.erase(unique(s.begin(), s.end()), s.end());
// if (s.size() % 2 == 0) {
//     cout << "CHAT WITH HER!\n";
// } else {
//     cout << "IGNORE HIM!\n";
// }

//
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int a,b;
// 		cin>>a>>b;
// 		if(a==b){
// 			cout<<a<<endl;
// 		}else if(a>b){
// 			cout<<b<<endl;
// 		}else{
// 			cout<<a<<endl;
// 		}
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int k,x;
// 		cin>>k>>x;
// 		cout<<k*7-x<<endl;
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		string str;
// 		cin>>str;
// 		for(int i=0;i<n;i+=2){
// 			if(str[i]==0 && str[i+1]==0){
// 				str[i]=str[i+1]='A';
// 			}else if(str[i]==0 && str[i+1]==1){
// 				str[i]=str[i+1]='T';
// 			}else if(str[i]==1 && str[i+1]==0){
// 				str[i]=str[i+1]='C';
// 			}else{
// 				str[i]=str[i+1]='G';
// 			}
// 		}
// 		cout<<str<<endl;

// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin >> n;
// 	while (n--)
// 	{
// 		int i, count1 = 0, count2 = 0, count3 = 0, k = 0, l = 0, m = 0;
// 		int arr[n], brr[n], crr[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> arr[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> brr[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> crr[i];
// 		}
// 		for (i = 0; i < n; i++)
// 		{
// 			if (arr[i] != 0)
// 			{
// 				count1++;
// 			}
// 			else
// 			{
// 				count1;
// 			}
// 		}
// 		for (i = 0; i < n; i++)
// 		{
// 			if (brr[i] != 0)
// 			{
// 				count2++;
// 			}
// 			else
// 			{
// 				count2;
// 			}
// 		}
// 		for (i = 0; i < n; i++)
// 		{
// 			if (crr[i] != 0)
// 			{
// 				count3++;
// 			}
// 			else
// 			{
// 				count3;
// 			}
// 		}
// 		if (count1 >= 2)
// 		{
// 			k += 2;
// 		}
// 		else if (count1 <= 1)
// 		{
// 			k += 0;
// 		}
// 		else if (count2 >= 2)
// 		{
// 			l += 2;
// 		}
// 		else if (count2 <= 1)
// 		{
// 			l += 0;
// 		}

// 		else if (count3 >= 2)
// 		{
// 			m += 2;
// 		}
// 		else
// 		{
// 			m += 0;
// 		}
// 		cout << k + l + m << endl;
// 	}
// }