#include <bits/stdc++.h>
using namespace std;

// PRINT NAME N TIMES
// void f (int i, int n)
// {
//     if(i==n) return;//base condition
//     cout<<n<<" ";
//     // ++i;
//     f(i+1,n);
// }



// PRINT 1->N
// void f(int i,int n){
//     if(i>n) return;
//     cout<<i<<" ";
//     i++;
//     f(i,n);
// }



// PRINT N-->1
// void f(int i,int n){
//     if(i==0) return;
//     cout<<i<<" ";
//     i--;
//     f(i,n);
// }



// PRINTING 1-->N USING BACKTRACKING
//  void f(int i,int n){
//      if(i<1) return;
//      f(i-1,n);
//      cout<<i<<" ";
//  }



// PRINTING N-->1 USING BACKTRACKING
//  void f(int i,int n){
//      if(i>n) return;
//      f(i+1,n);
//      cout<<i<<" ";
//  }



// PRINTING SUM OF 1-->N 
// //--------PARAMETERISED WAY
// void f(int i, int n, int sum)
// {
//     if (i > n)
//     {
//         cout << sum;
//         return;
//     }
//     sum += i;
//     f(i + 1, n, sum);
// }

// //-------FUNCTIONAL WAY
// int f(int n){
//     if(n==0)
//     {
//      return 0;
//     }
//     return n +f(n-1);
// }



// FACTORIAL OF N
//--------PARAMETERISED WAY
// void f(int i, int ans){
//     if(i<1)
//     {
//         cout<<ans;
//         return;
//     }
//     ans*=i;
//     f(i-1,ans);
// }

// //-------FUNCTIONAL WAY
// int f(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*f(n-1);
// }


void fibonacci(int i, int j, int ans,int n, int k){
    if(k>n) return;
    ans=i+j;
    cout<<ans<<" ";
    i=j;
    j=ans;
    fibonacci(i,j,0,n,k+1);
}


int main()
{

    // int n;
    // cin >> n;
    // f(n, n);
    // f(n,1);
    // cout<<f(n);
    // cout<<0<<" "<<1<<" ";
    // fibonacci(0,1,0,n,1);
}