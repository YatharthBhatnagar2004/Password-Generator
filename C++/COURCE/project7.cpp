#include <vector>
#include<iostream>
using namespace std;

int calculate_pairs(vector<int> vec) {
        int result;
       for (size_t i=0; i< vec.size(); ++i)
       for (size_t j=i+1; j< vec.size(); ++j) 
            result = result + vec.at(i) * vec.at(j);



    
    
     

    return result;
}