/*
    cmd app :: Pattern Generator. 
        Dimensions of geometry figuares based on variable values NOT on actual length.
        i.e. Square is 3x3 buy doesn't look like square even it consists of 3x3 brick grid
    by Game Audio Programmer (Nikita Kvitka) as part of learningCpp (Github Link)
*/

#include <iostream>
#include <vector>
#include <algorithm>


static void GeneratePyramid(const unsigned int& size, const char& brick, const char& empty ){
    std::vector<unsigned int> pattern_bricks(size);
    
    unsigned int line = size;
    pattern_bricks[0] = line;
    for (unsigned int i = 1; i < size; ++i){
        line -=2;
        if (line > size){
            break;
        }
        pattern_bricks[i] = line;
        //std::cout << pattern_bricks[i];
    }
    std::sort(pattern_bricks.begin(), pattern_bricks.end());

    unsigned int pattern_space;
    for (unsigned int i = 0; i < size; ++i){
        if(pattern_bricks[i] == 0){
            continue;
        }
        pattern_space = (size - pattern_bricks[i]) / 2;
        std::cout << std::string(pattern_space, empty);
        std::cout << std::string(pattern_bricks[i], brick);
        std::cout << std::string(pattern_space, empty);
        std::cout << '\n';
        if (pattern_space == 0){
            break;
        }
    }

}



int main(){
    const char kBrick = '-';
    const char kEmpty = ' ';


    // square
    const int kSquareHeight = 4;

    for (int i = 0; i < kSquareHeight; ++i){
        for(int j = 0; j < kSquareHeight; ++j){
            std::cout << kBrick;
        }
        std::cout << '\n';
    }
    std::cout << "\n\n";


    // rectangle
    const int kRectangleHeight = 4;
    const int kRectangleWidth = 11;
    
    for (int i = 0; i < kRectangleHeight; ++i){
        for(int j = 0; j < kRectangleWidth; ++j){
            std::cout << kBrick;
        }
        std::cout << '\n';
    }
    std::cout << "\n\n";


    // left sided triangle
    const int kLtriagleHeight = 5;

    int ls_brick_step = 1;
    for (int i = 0; i < kLtriagleHeight; ++i){
        for(int j = 0; j < ls_brick_step; ++j){
            std::cout << kBrick;
        }
        ls_brick_step++;
        std::cout << '\n';
    }
    std::cout << "\n\n";


    // right sided triangle
    const int kRtriangleHeight = 5;
    
    int rs_brick_step = kRtriangleHeight - 1;
    for (int i = 0; i < kRtriangleHeight; ++i){
        for (int j = 0; j < kRtriangleHeight; ++j){
            if(j >= rs_brick_step){
                std::cout << kBrick;
            }
            else{
                std::cout << kEmpty;
            }
        }
        rs_brick_step--;
        std::cout << '\n';
    }
    std::cout << "\n\n";
    
    // pyramid
    const unsigned int kPyramid = 11;
    
    GeneratePyramid(kPyramid, kBrick, kEmpty);
    std::cout << "\n\n";

    return 0;
}
