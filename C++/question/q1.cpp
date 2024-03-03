#include <bits/stdc++.h>
using namespace std;
int main()
{
  // vector<int> v = {1, 2};
  // vector<int> m = {2, 1};

  // int n = 0;
  // cin >> n;
  // int k = v.size();
  // for (int i = 0; i < n; ++i)
  // {
  //   if (i % 2 == 0)
  //   {
  //     for (int l = 0; l <= v.size(); ++l)
  //     {
  //       for (int j = 0; j < v.size(); ++j)
  //       {
  //         cout << v[j];
  //       }
  //     }
  //   }
  //   else
  //   {
  //     for (int l = 0; l <= m.size(); ++l)
  //     {
  //       for (int j = 0; j < m.size(); ++j)
  //       {
  //         cout << m[j];
  //       }
  //     }
  //   }

  //   cout << endl;
  // }
  // int n=0;
  // cin>>n;
  // for(int i=1;i<=n;++i){
  //   if(i==1||i==n){
  //     for(int j=1;j<=n;++j){
  //       cout<<j;
  //     }
  //   }
  //   else{
  //     cout<<1;
  //     for(int j=2;j<n;++j ){
  //       cout<<" ";
  //     }
  //     cout<<n;
  //   }
  //   cout<<endl;
  // }int i{};
  //   int i{};
  //   int j{};
  //   int m{};
  //   cout << "Enter the height of the pyramid : ";
  //   cin >> i;
  //   for (j = i; j >= 1; j--)
  //   {
  //     for (m = j; m >= 1; m--)
  //     {
  //       cout << "*";
  //     }
  //     cout << endl;

  //   }
  //  return 0;
  int n = 0;
  cin >> n;
  cout << "Is " << n << " Prime or Not " << endl;
  int num = 2;
  if (num < n)
  {
    if(n%num==0){
      cout<<"NOT"<<endl;
    }else{
      num+=1;
    }
  }else{
    cout<<"PRIME"<<endl;
  }
}
