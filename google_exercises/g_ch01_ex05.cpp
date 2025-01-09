#include <iostream>

void factorial(int a, int& comb){
    if(a < 1){
        return;
    }
    comb *= a;
    --a;
    factorial(a, comb);
}

int main(){
    // horses, pigs and rabbits

    for (int h = 0; h < 100; ++h){
        for (int p = 0; p < 100; ++p){
            for (int r = 0; r < 100; ++r)
                if ((h + p + r) == 100){
                    if (((10 * h) + (3 * p) + (0.5 * r)) == 100){
                        std::cout << "Found one! " << h << " horses " << p << " pigs " << r << " rabbits.\n";
                    }
                }
        }
    }
    std::cout << '\n';

    // books and bookshelf (for-loop and recursion)
    const int BOOK_AMOUNT { 6 };
    int combinations { 1 };
    // for(int i = BOOK_AMOUNT; i > 0; --i){
    //     combinations *= i;
    // }
    factorial(BOOK_AMOUNT, combinations);
    std::cout << "You can arrange " << BOOK_AMOUNT << " different books on bookshelf in " << combinations << " possible combinations.\n";

    std::cout << '\n';
    system("pause");
    return 0;
}
