#include <iostream>
#include <cmath>

int score(double x, double y);

int main(){
    double x = 10;
    double y = 11;

    std::cout << score(x, y);    

    return 0;
}

int score(double x, double y){
    const int CIRCLE_SIZE_OUTER {10};
    const int CIRCLE_SIZE_MIDDLE{5};
    const int CIRCLE_SIZE_INNER {1};

    const int POINTS_MISS   {0};
    const int POINTS_OUTER  {1};
    const int POINTS_MIDDLE {5};
    const int POINTS_INNER  {10};

    double pos_on_target = std::sqrt((x * x) + (y * y));
    if(pos_on_target <= CIRCLE_SIZE_INNER){
        return POINTS_INNER;
    }
    else if(pos_on_target <= CIRCLE_SIZE_MIDDLE){
        return POINTS_MIDDLE;
    }
    else if(pos_on_target <= CIRCLE_SIZE_OUTER){
        return POINTS_OUTER;
    }
    else{
        return POINTS_MISS;
    }
}

