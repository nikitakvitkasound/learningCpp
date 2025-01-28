#include <iostream>

const int kStudents = 25;
const int kProblemSets = 10;

// This function returns the highest grade in the Problem Set array.
int get_high_grade(int *a, int cols, int row, int col) {
  int i, j;
  int highgrade = *a;
  int* ptr;

  for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
      ptr = a + i * cols + j;
      if (*ptr > highgrade){
        highgrade = *ptr;
      }      
    }
  }
  return highgrade;
}

int main() {
 int grades[kStudents][kProblemSets] = {
   {75, 70, 85, 72, 84},
   {85, 92, 93, 96, 86},
   {95, 90, 83, 76, 97},
   {65, 62, 73, 84, 73},
 };
 int std_num = 4;
 int ps_num = 5;
 int highest;

 highest = get_high_grade((int *)grades, kProblemSets, std_num, ps_num);
 std::cout << "The highest problem set score in the class is " << highest << std::endl;

 return 0;
}
