#include <iostream>
// #include <vector>
// #include <algorithm>

// int main(){
//     std::vector<std::vector<int>> nums {{0, 1, 2}, {0, 4, 8}, {0, 3, 6}, {12, 12, 12}};
//     for(const auto& row : nums){
//         bool search_result = std::all_of(row.begin(), row.end(), [](int i){ return i == 12;});
//         if(search_result){
//             std::cout << "win!\n";
//         }
//         else{
//             std::cout << "lost\n";
//         }
//     }
//     return 0;
// }
int main(){
    int test {0};
    while(test < 9){
        std::cout << test << '\n';
        test++;
    }
}
