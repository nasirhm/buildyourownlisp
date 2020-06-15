#include <stdio.h>
int print_hello_world(int n){
   int i=0;
   while(i<n){
    puts("Hello World!");
    i++;
   }
   return 0;
}
int main(){
    print_hello_world(3);
    return 0;
}
