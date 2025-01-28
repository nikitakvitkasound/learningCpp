#include <iostream>

void Unknown(int *p, int num);
void HardToFollow(int *p, int q, int *num);

using namespace std; 

void Unknown(int *p, int num) {
  int *q;    //?         

  q = &num;  //  
  *p = *q + 2; //3+2=5      
  num = 7;        
}

void HardToFollow(int *p, int q, int *num) { 
  *p = q + *num;      //[1] = 1 + 3, [1] = 4                                                STATUS OF TROUBLE: [0] = 5, [1] = 3, [2] = 1, q = &[1]
  *num = q;           //[2] = 1
  num = p;            //
  p = &q;             // if num = p and p = &q then num = &q or *num = 1 ==>
  Unknown(num, *p);   // &1, 1
}

main() {
  int *q;            
  int trouble[3];   

  trouble[0] = 1;    
  q = &trouble[1];   
  *q = 2;            
  trouble[2] = 3;    
// [0] = 1, [1] = 2, [2] = 3
  HardToFollow(q, trouble[0], &trouble[2]); //&[1], 1, &[2]
  Unknown(&trouble[0], *q); // *1, 3

  cout << *q << " " << trouble[0] << " " << trouble[2];
}
