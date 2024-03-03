#include <bits/stdc++.h>
using namespace std;
//------------PRINTING ARRAY FUNCTION------------------
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}
//------------MAX INTEGER IN ARRAY FUNCTION------------------
// int getmax(int num[], int n)
// {
//     int maxi = INT32_MIN;
//     for (int i = 0; i < n; ++i)
//     {
//         maxi = max(maxi, num[i]);
//         //     if(num[i]>max){
//         //         max=num[i];
//         //     }
//     }
//     return maxi;
// }
//------------MIN INTEGER IN ARRAY FUNCTION------------------
// int getmin(int num[], int n)
// {
//     int mini = INT32_MAX;
//     for (int i = 0; i < n; ++i)
//     {
//         mini = min(mini, num[i]);
//         // if(num[i]<min){
//         //     min=num[i];
//         // }
//     }
//     return mini;
// }
// void update(int arr[],int n){
//     arr[0]=120;
//     cout<<"Array inside function "<<endl;
//         for(int i=0;i<3;++i){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     cout<<"Ending function "<<endl;;
// }
//------------REVERSING AN ARRAY------------------
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main()
{
    //------------INITAILISING ARRAY TO ONE NUMBER------------------
    // int array[100];
    // for (int  i = 0; i < size; i++)
    // {
    //     array[i]=5;
    // }
    // printarr(array,size);
    //------------CUSTOM INTIALISING ARRAY------------------
    // int n=0;
    // cin>>n;
    // int array[n];
    // for(int i=0;i<n;++i){
    //     cin>>array[i];
    // }
    // int size=sizeof(array)/sizeof(int);
    //------------MAX INTEGER IN ARRAY------------------
    // int max=array[0];
    // for(int i=0;i<size;++i){
    //     if (max<array[i])
    //    {
    //         max=array[i];
    //     }
    // }
    //------------MIN INTEGER IN ARRAY------------------
    // int min=array[0];
    // for(int i=0;i<size;++i){
    //     if (min>array[i])
    //    {
    //         min=array[i];
    //     }
    // }
    // cout<<min<<endl;
    // cout<<max;
    // cout<<getmax(array,n)<<endl;
    // cout<<getmin(array,n);
    //------------UPDATING THE ARRAY------------------
    // int array[3]={1,2,3};
    // update(array,3);
    // cout<<"Printing Array In Main function "<<endl;;
    // for(int i=0;i<3;++i){
    //     cout<<array[i]<<" ";
    // }
    //--------------------------------------HOMEWORK QUESTION 1-----------------------------------------------
    // int n=0;
    // cout<<"What is the size of Array: ";
    // cin>>n;
    // cout<<endl;
    // int arr[n];
    // for(int i=0;i<n;++i){
    //     cin>>arr[i];
    // }
    // int sum=0;
    // for(int i=0;i<n;++i){
    //     sum+=arr[i];
    // }
    // cout<<"The sum of all the elements of the array is: "<<sum;
    //------------REVERSING AN ARRAY------------------
    int arr[6]={1,4,0,5,-2,15};
    int array[5]{1,2,3,4,5};
    reverse (arr,6);
    reverse(array,5);
    cout<<endl;
    printarr(arr,6);
    cout<<endl;
    printarr(array,5);
    cout<<endl;
}