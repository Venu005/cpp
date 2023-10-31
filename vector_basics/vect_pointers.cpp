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
// CONST POINTERS WITH FUNCTIONS 
/*
#include <iostream>
#include <vector>
#include <string>


void display(const std::vector <std::string>  *const );
void display(const std::vector<std::string>  *const v){
    for (auto elem : *v){
        std::cout << elem << " ";
    }
    //v->at(0)="kats";
    //(*v).at(0)="kats";
    //v = nullptr; // error as *v set to const 
}

int main(){
    std::vector <std::string> names{"Venu","sat","meghs"};
    display(&names);
    display(&names);
    
}
// void double_data(int *int_ptr){
//     *int_ptr*=2;
// }

// int main(){
//     int value{10};
//     int *int_ptr{&value};
//     double_data(int_ptr);
//     std::cout << *int_ptr << std::endl; 
*/  
