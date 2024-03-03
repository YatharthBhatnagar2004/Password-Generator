#include<iostream>
using namespace std;
int main(){
    int score;
//     cin>>score;
//     if (score>90)
//     if (score >95)
//     cout<<"A+";
//     else
//     cout<<"A";
//     else
//     cout<<"Sorry, no A.";
//    char letter_grade {};
//     cout<<"Enter your score: ";
//     cin>>score;
//     if (score>=0&&score<=100){
//       if(score>=90)
//           letter_grade='A';
//     else if(score>=80)
//          letter_grade='B';
//     else if(score>=70)
//          letter_grade='C';
//     else if (score>=60)
//          letter_grade='D';
//     else
//            letter_grade='F';
//     cout<<"Your grade is "<<letter_grade<<endl;
//     if(letter_grade=='F')
//     cout<<"Repeat your class.";
//      else
//      cout<<"Congrats!!, You have passed ur exam. ";
//     }else{
//         cout<<score<<"not in range";
//     }
   char letter_grade{};
   cout<<"Enter ur score: ";
   cin>>score;
   if(score>=0&&score<=100){
    if (score>=90)
   letter_grade='A';
   else if (score>=80)
   letter_grade='B';
   else if(score>=70)
   letter_grade='C';
   else if (score>=60)
   letter_grade='D';
   else
   letter_grade='F';
   
     if (letter_grade=='F')
     cout<<"REPEAT UR CLASS!!";
     else 
     cout<<"CONGRATULATIONS!!!!, YOU PASSED UR EXAM";
   }else {
   cout<<score<<" not in range.";}

   }
     


       