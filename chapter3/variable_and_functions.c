#import <stdio.h>

void main(){
    int added_numbers = add_together(3,5);
    puts(added_numbers);
    return;
}
int add_together(int x, int y){
    int result = x + y;
    return result;
}
