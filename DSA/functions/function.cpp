#include <iostream>
using namespace std;
// -------------------power of interger-----------------------
// int pow(int a, int b)
// {
//     int ans = 1;
//     for (int i = 1; i <= b; ++i)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }
//----------------------is even or odd-------------------------
// bool evenodd(int n){
//     if(n%2==0){
//         return 1;
//     }else
//     return 0;
//}
//----------------------(nCr)-------------------------
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;++i){
//         fact*=i;
//     }
//     return fact;
// }
// int nCr(int n,int r){
//     int numerator=factorial(n);
//     int denominator=factorial(r)*factorial(n-r);
//     int ans=numerator/denominator;
//     return ans;
// }
//----------------------Print Counting-------------------------
// void printcounting(int n){
//     for(int i=1;i<=n;++i){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
//----------------------Prime or not-------------------------
// bool primeornot(int n)
// {
//     // 1-prime
//     // 0-notprime
//     for (int i = 2; i < n; ++i)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
//----------------------AP-------------------------
// int ap(int n){
//     int ans = 3*n+7;
//     return ans;
// }
//----------------------COUNTING BITS-------------------------
// int bits(int a, int b)
// {
//     int count = 0;
//     while (a != 0&&b!=0)
//     {
//         if (a & 1)
//         {
//             count++;
//         }
//         if (b & 1)
//         {
//             count++;
//         }
//         b = b >> 1;
//         a = a >> 1;
//     }
//     return count;
// }
//----------------------FIBONACCI SERIES-------------------------
int fibonacci(int n)
{

}

int main()
{
    //----------------------is even or odd-------------------------
    // int n;
    // cin>>n;
    // if (evenodd(n)){
    //     cout<<"number is even";
    // }else{
    //     cout<<"number is odd";
    // }
    // -------------------power of interger-----------------------
    // int a, b;
    // cin >> a >> b;
    // int answer=pow(a, b);
    //----------------------(nCr)-------------------------
    // int n=0;
    // int r=0;
    // cin>>n>>r;
    // cout<< nCr(n,r);
    //----------------------Print Counting-------------------------
    // int n;
    // cin>>n;
    // cout<<endl;
    // printcounting(n);
    //----------------------Prime or not-------------------------
    // int n = 0;
    // cin >> n;
    // if (primeornot(n) != 0)
    // {
    //     cout << "number is prime";
    // }
    // else
    // {
    // cout << "number is not prime";
    // }
    //----------------------AP-------------------------
    // int n = 0;
    // cin >> n;
    // cout << "Answer is " << ap(n) << endl;
    //----------------------COUNTING BITS-------------------------
    // int a, b;
    // cin >> a >> b;
    // cout << "Answer is " << bits(a, b) << endl;
    int n=0;
    cin>>n;
    cout<<fibonacci(n);
}