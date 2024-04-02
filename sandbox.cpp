#include <iostream>

class Something{
public:
    int x;
    int y;
    int pup;

    void sumTwo(int xa, int ya){
        x += xa * pup;
        y += ya * pup;
    }
};

int main(){
    Something use_class;
    use_class.x = 3;
    use_class.y = 3;
    use_class.pup = 2;
    
    use_class.sumTwo(2, 4);
    std::cout << use_class.x << ' ' << use_class.y;
    
	return 0;
}
