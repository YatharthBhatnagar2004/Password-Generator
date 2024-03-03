#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>Test_Score{100,99,98,97,95,99};
    cout<<"First test score: "<<Test_Score[0]<<endl;
    cout<<"Second test score: "<<Test_Score[1]<<endl;
    cout<<"Third test score: "<<Test_Score[2]<<endl;
    cout<<"Fourth test score: "<<Test_Score[3]<<endl;
    cout<<"Fifth test score: "<<Test_Score[4]<<endl;
    cout<<"Sixth test score: "<<Test_Score.at(5)<<endl;
    Test_Score.push_back(99);
    cout<<"seventh test score: "<<Test_Score.at(6);
} 
