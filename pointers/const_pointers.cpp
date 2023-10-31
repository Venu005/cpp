// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
  int high_score{100};
  int low_score {50};
//   int *const score_pointer{&high_score};
//   std::cout << *score_pointer<< std::endl;
//   //*score_pointer =  88; // error
//   score_pointer =  &low_score;
//   std::cout << *score_pointer;   --can't do both the stuff
// int const *score_pointer{&high_score};
//   std::cout << *score_pointer<< std::endl;
//   //*score_pointer =  88; // error
//   score_pointer =  &low_score;
//   std::cout << *score_pointer;
// constant pointer   
 const  int const *score_pointer{&high_score};
  std::cout << *score_pointer<< std::endl;
  //*score_pointer =  88; // error
  score_pointer =  &low_score;
  std::cout << *score_pointer;
  

  
  

    return 0;
}