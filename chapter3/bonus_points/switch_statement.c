#include <stdio.h>

int main(){
    int a = 7;
    switch(a){
     case 8:
      printf("The Value is 8");
      break;
     case 7:
      printf("The Value is 7");
      break;
     case 6:
      printf("The Value is 6");
      break;
     default:
      printf("Index Out of Range :D");
      break;
    }
   return 0;
}
