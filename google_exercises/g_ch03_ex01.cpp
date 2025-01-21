#include <iostream>

void Unknown(int *p, int num);
void HardToFollow(int *p, int q, int *num);

void Unknown(int *p, int num) {
  int *q;   // null

  q = &num;  // q = [0]
  *p = *q + 2;  // [0] = 1 + 2; [0] = 3
  num = 7;      // [0] = 7
}

void HardToFollow(int *p, int q, int *num) // q -> [1], [0], &[2]
{
  *p = q + *num;  // *[1] = [0] + *[2]; [1] = 1 + 3; [1] = 4
  *num = q;       // *[2] = [0]; [2] = 1;
  num = p;        //  [2] = address[1] ??
  p = &q;         //  [1] = address[0] ==>> [2] = address[0] 
  Unknown(num, *p);  // (address [0], 1)
}

main() {
  int *q; //null
  int trouble[3]; //array

  trouble[0] = 1; // 1
  q = &trouble[1]; // address of [1]
  *q = 2;  // [1] = 2
  trouble[2] = 3; // [2] = 3
    // trouble {1, 2, 3}
  HardToFollow(q, trouble[0], &trouble[2]); // ptr, item value, item address
  Unknown(&trouble[0], *q);

  std::cout << *q << " " << trouble[0] << " " << trouble[2];  //1 7 1

  std::cout << '\n';
  system("pause");
  return 0;
}
