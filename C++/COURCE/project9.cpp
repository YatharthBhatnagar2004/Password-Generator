#include<iostream>
#include<string>
using namespace std;
int main(){
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key1  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string numbers{0,1,2,3,4,5,6,7,8,9,10};
    string key2{10,9,8,7,6,5,4,3,2,1,0};
    string s1{};
    // cout<<"Enter a code u will like to be encrypted: ";
    // getline(cin,s1);
    // cout << "\nEncrypting message..." << endl;
    // string encrypted_mssg{};
    // for(char c:s1){
    //     size_t positon=alphabet.find(c);
    //     if(positon!=string::npos){
    //     char new_char{key1.at(positon)};
    //     encrypted_mssg+=new_char;}
    //     else
    //     encrypted_mssg+=c;
    // }
    // cout << "\nEncrypted message: " << encrypted_mssg << endl;
    // string dencrypted_message{};
    // for(char c:encrypted_mssg){
    // size_t positon=key1.find(c);
    // if(positon!=string::npos){
    //     char new_char{alphabet.at(positon)};
    //     dencrypted_message+=new_char;
    // }else
    // dencrypted_message+=c;
    // }cout<<"Dencrypted message "<<dencrypted_message<<endl;
    return 0;
}
