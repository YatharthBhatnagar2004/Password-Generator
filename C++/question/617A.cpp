#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int steps=0;
    int i=5;
    while(n!=0){
        steps+=n/i;
        n=n%i;
        i--;
    }   
    cout<<steps;
}