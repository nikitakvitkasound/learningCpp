#include <iostream>
#include <iomanip>

int main(){
    int kFieldWidth { 30 };
    std::string message { "Hello, World!" };
    
    for(int i = 0; i < 6; ++i){
        std::cout << std::setw(kFieldWidth);
        for(int i = 0; i < 4; ++i){
            std::cout << message << ' ';
        }
        std::cout << '\n';
    }

    system("pause");
    return 0;
}


// - - - - Google solution - - - - // (didn't understand task right)

/*
#include <iostream>
// we need the following include for setw() in some c++ implementations
#include <iomanip>
using namespace std;

int main() {
  // the first for-loop will handle the rows
  for (int i = 0; i < 6; i++) {
    // the second for loop will handle the columns
    for (int j = 0;  j < 4 ; j++)
      // setw(int) sets the column width
      cout << setw(17) << "Hello World!";
    // this  next line is a part of the first for loop
    // and causes the new line
    cout << endl;
  }
  return 0;
}
*/
