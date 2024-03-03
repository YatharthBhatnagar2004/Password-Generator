#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
char first_name[20];
char second_name[20];
char last_name[50];
char full_name[100];
char temp[50];
// cout<<"Please enter ur first name: ";
// cin>>first_name;
// cout<<first_name<<endl;
// cout<<"Please enter ur last name: ";
// cin>>last_name;
// cout<<last_name<<endl;
// cout<<"Your name is "<<first_name<<" "<<last_name<<endl;
// // cout<<"\nHello, "<<first_name<<" ur first name has "<<strlen(first_name)<<" characters."<<endl;
// // cout<<"\nHello, "<<last_name<<" ur last name has "<<strlen(last_name)<<" characters."<<endl;
// strcpy(full_name,first_name);
// strcat(full_name," ");
// strcat(full_name,last_name);
// cout<<"\n"<<full_name;
// cout<<"Enter ur full name: ";
// cin>>full_name;
// cout<<full_name;
cout<<"Enter ur full name: ";
cin.getline(full_name,50);
cout<<full_name<<endl;
// strcpy(temp,full_name);
// if(strcmp(full_name,temp)==0)
// cout<<"\nThey both are same";
// else
// cout<<"\nThey both are different";
for(size_t i=0;i<strlen(full_name);++i){
if(isalpha(full_name[i]))
full_name[i]=toupper(full_name[i]);
}cout<<full_name;

}