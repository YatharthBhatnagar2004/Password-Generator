#include <bits/stdc++.h>
using namespace std;

// void swapping(int i, int j, int arr[]){
//     if(i>j){ 
//         return;
//     }
//     swap(arr[i],arr[j]);
//     swapping(i+1,j-1,arr);
// }


bool palindrome (string s,int i, int n){
    if (i>=n/2){
    return true;
    }

    if (s[i]!=s[n-i-1]){

        return false;
    }
    return palindrome(s,i+1,n);

}

int main()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    
    cout<<palindrome(s,0,n);
    // int arr[n];
    // for (int i = 0; i < n; ++i){
    //     cin >> arr[i];
    // }
    // swapping(0,n-1,arr);
    // for (int i = 0; i < n; ++i){
    //     cout<< arr[i]<<" ";
    // }
    

}