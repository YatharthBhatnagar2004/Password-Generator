#include<iostream>
using namespace std;
int main(){
    bool equal_result(false);
    bool not_equal_result(false);
    int num1{}, num2{};
    cout<<boolalpha;//will display true/false instead of 1/0 for booleans
    cout<<"Enter 2 integers seperated ny space: ";
    cin>>num1>>num2;
    equal_result=(num1==num2);
    not_equal_result=(num1!=num2);
    cout<<"Comparison result(equal): "<<equal_result<<endl;
    cout<<"Comparison result(not equal): "<<not_equal_result<<endl;
    char word1{},word2{};
    cout<<"Enter 2 words seperated by space: ";
    cin>>word1>>word2;
    equal_result=(word1==word2);
    not_equal_result=(word1!=word2);
    cout<<"Comparison result(equals): "<<equal_result<<endl;
    cout<<"Comparison result(not equals): "<<not_equal_result<<endl;
}