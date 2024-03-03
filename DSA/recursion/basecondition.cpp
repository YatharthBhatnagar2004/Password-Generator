#include<bits/stdc++.h>
using namespace std; 
// void print1(){
//     cout<<1<<" ";
//     print();
// }
void print2(int count){
    cout<<count<<endl;
    count++;
    if(count==5) return;// base condition
    print2(count);
}
int main(){
    int count=1;
    print2(count);
}