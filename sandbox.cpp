#include <iostream>

class Alien {
    public:
        int x_coordinate { 0 };
        int y_coordinate { 0 };
        bool shielded { false };
        bool move_blocked { false };

        Alien(int x, int y){
            x_coordinate = x;
            y_coordinate = y;
        }
        
        int get_health(){
            return health;
        }

        bool teleport(int x, int y){
            if(move_blocked){
                return false;
            }
            x_coordinate = x;
            y_coordinate = y;
            return true;
        }

        bool collision_detection(Alien collided_with){
            return x_coordinate == collided_with.x_coordinate && y_coordinate == collided_with.y_coordinate;
        }

        bool hit(){
            if(shielded || health == 0){
                return false;
            }
            --health;
            return true;
        }

        bool is_alive(){
            return health > 0;
        }
    private:
        int health { 3 };
};

int main(){
    Alien bork {2 , 0};
    Alien dork {22, 58};
    std::cout << std::boolalpha;

    std::cout << bork.collision_detection(dork) << '\n';
    
    bork.teleport(22, 58);

    std::cout << bork.collision_detection(dork) << '\n';
    

    // alien.hit();
    // alien.hit();
    // alien.hit();
    // std::cout << alien.is_alive() << '\n';

    return 0;
}
