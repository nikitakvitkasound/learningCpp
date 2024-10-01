#include <iostream>
#include <cmath>

int main(){
    class Alien {
        //todo accept x and y
        public:
        Alien(int new_x_coordinate, int new_y_coordinate){
            int x_coordinate = new_x_coordinate;
            int y_coordinate = new_y_coordinate;
        }
        int x_coordinate { };
        int y_coordinate { };
        

    };

    Alien alien{2, 0};
    std::cout << alien.x_coordinate << ", " << alien.y_coordinate;

    return 0;
}


