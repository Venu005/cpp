#include <iostream>
#include <vector>

int main(){

   //2d vector 
   std::vector <std::vector <int>> twod_vector {{1,2,3},{4,5,6},{7,8,9}};
   //std::cout << twod_vector.at(0).at(0)<< std::endl;
  //  std::vector <int> second_row =  twod_vector.at(1);
  //  for(int element : second_row){
  //   std::cout << element;
  //  }
  for(auto firstrow : twod_vector.at(0)){
    std::cout << firstrow ;
  }
  
   for(auto first_col : twod_vector){
    std::cout<< std::endl << first_col.at(0)<< std::endl;
   }
    // for(auto vec: twod_vector){
    //   for(auto elem : vec){
    //     std::cout << elem << std::endl;
    //   }
    // }
}

