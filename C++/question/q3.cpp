#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int sum1=a+b+c+d;
    int sum2=a+e+c+d;
    int sum3=e+b+c+d;
    int sum4=a+b+c+e;
    int sum5=a+b+e+d;
    vector<int>sums;
    sums.push_back(sum1);
    sums.push_back(sum2);
    sums.push_back(sum3);
    sums.push_back(sum4);
    sums.push_back(sum5);
    int max=0;
    int min=sums[0];
    for(int i=0;i<5;++i){
        if(max<sums[i]){
            max=sums[i];
        }
        if(sums[i]<min){
            min=sums[i];
        }
    }
    cout<<min<<" "<<max;
}

