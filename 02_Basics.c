#include <stdio.h>

int next_higher(int n) {
  // your code here
  int x = 0, index = -1;
  for(int i = 0; i < 31; i++){
    if(x || (n >> i) == 0){
      index = i;
      break;
    }
  }
  x = 1;
  n |= (x << index);
  
  n &= ~(x << (index-1));
  
  return n;
}

int main(){

    int n = next_higher(1022);
    printf("%d\n", n);
    return 0;
    
}