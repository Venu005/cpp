// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
   
//     int  *arr{};
//     size_t size{0};
//     std::cin >> size;
//     arr = new int[size];
//     for(int i=0;i<size;i++){
//         std::cin >>arr[i];
//     }
//     // for (auto s : arr){
//     //     std:: cout  << s;
//     // }
//       for(int i=0;i<size;i++){
//         std::cout << arr[i] <<  std::endl;
//     }
    
//  delete [] arr;
int scores []{100,200,300,1};
std::cout << scores << std::endl;
int *scores_pointer{scores};
// std::cout << scores_pointer<< std::endl;
// //std::cout << *(scores)<< std::endl;
// //std::cout << *(scores_pointer)<< std::endl;
// //*(scores_pointer)++;
// std::cout << (*scores_pointer ++) << std::endl;
// //std::cout << scores_pointer[1]<< std::endl;
while(*scores_pointer!=1){
    std::cout << *(scores_pointer)++ <<std::endl;
    
}
// std::cout << *(scores_pointer+1)+1;

    return 0;
}