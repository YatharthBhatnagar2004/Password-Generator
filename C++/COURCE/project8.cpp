#include<iostream>
#include<vector>
using namespace std;
int main(){
    int numbers=0;
    cout<<"Enter the size of vector "<<endl;
    cin>>numbers;
    vector<int>vec(numbers);
    cout<<"Enter the numbers seperated by space for calculation: "<<endl;
    for(int i=0;i<numbers;i++){
        cin>>vec[i];
    }

    char selection;
   do{
    cout<<"\nMenu options: "<<endl;
    cout<<"\nP - Print numbers."<<endl;
    cout<<"\nA - Add a number."<<endl;
    cout<<"\nM - Display mean of the numbers."<<endl;
    cout<<"\nS - Display the smallest number."<<endl;
    cout<<"\nL - Display the largest number."<<endl;
    cout<<"\nQ - Quit."<<endl;
    cout<<"Enter ur choice "<<endl;
    cin>>selection;
    if (selection=='P'||selection=='p'){
    if (vec.size()==0)
    cout<<"The list is empty";
    else
    cout<<"[ ";
    for(auto v:vec)
    cout<<v<<" ";
    // for(int i=0;i<numbers;i++){
    //        cout<<vec[i]<<endl;} 
    cout<<" ]";
     
    }else if(selection=='A'||selection=='a'){
        if (vec.size()==0)
        cout<<"The list is empty";
        else {
        cout<<"Enter the number "<<endl;
        int number1;
        cin>>number1;
        vec.push_back(number1);}
    }else if (selection=='M'||selection=='m'){
                int result1=0;
        int result=0;
        for(int i=0;i<numbers;++i){
            result1+=vec[i];
            result=result1/vec.size();
            
        }cout<<result;
    }else if(selection=='S'==selection=='s'){
        int min=vec[0];
        for(int i=0;i<vec[numbers];++i){
            if (vec[i]<min)
            min=vec[i];
        }cout<<min;
    }
    
    

    
 }while(selection!='Q'&&selection!='q');
    

}