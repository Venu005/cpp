#include <iostream>
#include <vector>
int main() {
    std::vector <int> v;
    int n;
    std:: cin >> n;
    
    std::vector <int> *vect_pointer{nullptr};
    vect_pointer =  &v;
    for(auto i = 0;i<n;i++){
        int num;
        std::cin >>num;
        (vect_pointer)->push_back(num);
        
    }
    
    for(auto elem : *vect_pointer){
        std::cout <<  elem << std::endl;
    }
    // for(auto i = 0;i<n;i++){
    //     std::cout <<  v[i];
    // }

    return 0;
}
