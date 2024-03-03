#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

    //-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //
    // ARRAY
    //
    //  int basic[3]={1,2,3};
    //  array<int,4>a={1,2,3,4};
    //  int capacity=a.capacity();
    //  for(int i=0;i<capacity;++i){
    //      cout<<a[i]<<endl;
    //  }
    //  cout<<"element at index 2 "<<a.at(2)<<endl;
    //  cout<<"empty or not "<<a.empty()<<endl;
    //  cout<<"Front element "<<a.front()<<endl;
    //  cout<<"Last element "<<a.back()<<endl;
    //
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //
    // VECTORS
    //
    // vector<int> v;
    // vector<int> a(5, 1);
    // cout << "Printing a " << endl;
    // for (int i : a)
    // {
    //     cout << i << endl;
    // }
    // cout << "capacity-->" << v.capacity() << endl;
    // v.push_back(1);
    // cout << "capacity-->" << v.capacity() << endl;
    // v.push_back(2);
    // cout << "capacity-->" << v.capacity() << endl;
    // v.push_back(3); // dynamic vectors when gets filled create a new vector of double capacity and copies the content of old vector in it
    // cout << "capacity-->" << v.capacity() << endl;
    // v.push_back(4);
    // cout << "capacity-->" << v.capacity() << endl;
    // v.push_back(5);
    // cout << "capacity-->" << v.capacity() << endl;
    // cout << "element at index 2 " << v.at(2) << endl;
    // cout << "front " << v.front() << endl;
    // cout << "Last " << v.back() << endl;
    // cout << "Before pop " << endl;
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     cout << v[i] << endl;
    // }
    // v.pop_back();
    // cout << "after pop " << endl;
    // for (int i : v)
    // { // new method to print vector elements
    //     cout << i << endl;
    // }
    // cout << "Size and capacity before clear: " << v.size() << "," << v.capacity() << endl;
    // v.clear(); // after clearing size of vector is 0 not capacity , size is number of elements in vector and capacity is the memory assigned to vector
    // cout << "Size and capacity after clear: " << v.size() << "," << v.capacity() << endl;
    //
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



    //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //
    // DEQUE(DQ)
    //
    // deque<int>d;
    // d.push_back(1);
    // d.push_front(2);
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // d.push_back(1);
    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // d.push_front(2);
    // cout<<"print second element "<<d.at(1)<<endl;
    // cout<<"first element "<<d.front()<<endl;
    // cout<<"back element "<<d.back()<<endl;
    // cout<<"empty or not"<<d.empty()<<endl;
    // cout<<"before erase "<<d.size()<<endl;
    // d.erase(d.begin(),d.begin()+1);//this erases the first element (it is not like vector or array we have to specify the range from which we have to delete)
    // cout<<"after erase "<<d.size()<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    //
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // LISTS
    //
    // list<int>l;
    // list<int>n(5,100);
    // for(int i:n){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // l.push_back(1);
    // l.push_front(2);
    // for(int i:l){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // l.erase(l.begin());
    // cout<<"After erase"<<endl;
    // for(int i:l){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<"size of list "<<l.size();
    //
    //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------



    //-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //
    // STACKS
    //
    // stack<string>s;
    // s.push("Love");
    // s.push("Babbar");
    // s.push("Kumar");
    // cout<<"Top element "<<s.top()<<endl;
    // s.pop();
    // cout<<"Top element "<<s.top()<<endl;
    // cout<<"size of stack "<<s.size()<<endl;
    // cout<<"empty or not "<<s.empty()<<endl;
    //
    //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //
    // QUEUE
    //
    // queue<string>q;
    // q.push("LOVE");
    // q.push("BABBAR");
    // q.push("KUMAR");
    // cout<<"first element "<<q.front()<<" "<<endl;
    // cout<<"Last element "<<q.back()<<endl;
    // cout<<"size before pop "<<q.size();
    // q.pop();
    // cout<<"first element "<<q.front()<<" "<<endl;
    // cout<<"size after pop "<<q.size();
    //
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //
    // PRIORITY QUEUE
    //
    // //MAX HEAP
    // priority_queue<int>maxi;
    // //MIN HEAP
    // priority_queue<int,vector<int>,greater<int>> mini;
    // maxi.push(1);
    // maxi.push(3);
    // maxi.push(2);
    // maxi.push(0);
    // cout<<"size of priority queue "<<maxi.size()<<endl;
    // int n=maxi.size();
    // for(int i=0;i<n;++i){
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();
    // }
    // mini.push(5);
    // mini.push(1);
    // mini.push(0);
    // mini.push(4);
    // mini.push(3);
    // cout<<"size of mini "<<mini.size()<<endl;
    // int l=mini.size();
    // for(int i=0;i<l;++i){
    //     cout<<mini.top()<<" ";
    //     mini.pop();
    // }
    // cout<<"Khaali hae kya bhai mini "<<mini.empty()<<endl;
    // cout<<"Khaali hae kya bhai maxi "<<maxi.empty()<<endl;
    //
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //
    // SETS
    //
    // set<int> s;
    // s.insert(5);
    // s.insert(5);
    // s.insert(5);
    // s.insert(6);
    // s.insert(6);
    // s.insert(1);
    // s.insert(0);
    // for(int i:s){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // s.erase(s.begin());
    // for(int i:s){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<"is 5 present in set "<<s.count(5)<<endl;
    // cout<<"is -5 present in set "<<s.count(-5)<<endl;
    // set<int>::iterator itr=s.find(5);
    // set<int>::iterator it=s.begin();
    // cout<<"Value present at itr "<<*it<<endl;
    // for(auto it=itr;it!=s.end();it++)
    // cout<<*it<<endl;
    //
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //
    //MAPS
    //
    // map<int,string> m;
    // m[1]="BABBAR";
    // m[13]="KUMAR";
    // m[2]="LOVE";
    // m.insert({5,"Bheem"});
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;
    // cout<<"Finding 13 "<<m.count(13);
    // cout<<"Finding -13 "<<m.count(-13);
    // cout<<"BEFORE ERASE---->"<<endl;
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // m.erase(13);
    // cout<<"AFTER ERASE---->"<<endl;
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // auto it=m.find(5);
    // for(auto i=it;i!=m.end();++i){
    //     cout<<(*i).second<<endl;
    // }
    //
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //
    //STL ALGOHRITHMS
    //
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<"Binary search for finding 5 "<<binary_search(v.begin(),v.end(),5 )<<endl;
    cout<<"Binary search for finding 6 "<<binary_search(v.begin(),v.end(),6 )<<endl;
    








}