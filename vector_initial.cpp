#include <iostream>
#include <vector>
int main(){

    // std::vector <int> scores {100,95,97,89};
    // // accessing individually
    // std::cout << scores.at(2) << std::endl;
    // std::cout << scores.at(0) << std::endl;
    // //std::cout << scores << std::endl;
    // scores.push_back(56);
    // std::cout << scores.at(4) << std::endl;
    // std::cout << scores.size()<<std::endl;
    // std::vector <int> scores;
    // int n;
    // std::cin >> n;
    // scores.reserve(n);
    // for(auto it = scores.begin();it!=scores.end() && n>0 ;++it,--n){
    //     std::cin >> *it;
    // }
    // for (int score : scores){
    //     std::cout << score<< std::endl;
    // }

    // return 0;
    std::vector<int> scores;
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Reserve space in the vector for 'n' elements to avoid reallocations
    scores.reserve(n);

    for (int i=0;i<n;i++) {
        std::cin >> scores[i];
    }

    std::cout << "Scores entered:" << std::endl;
    

    for (int i=0;i<n;i++) {
        std::cout << scores[i] << std::endl;
    }

    return 0;
}