#include <stdio.h>

/* I am a Comment */
/* This declares a buffer of 2048 for user input */
static char input[2048];

int main(int argc, char** argv) {
    puts("Lispy Version 0.0.0.0.1");
    puts("Press CTRL-C to Exit \n");
/* while(1) always results as true, creating a never ending loop */
    while(1){
	fputs("lispy> ", stdout);
/* Readline of buffer size of 2048 */
	fgets(input, 2048, stdin);
/* printf to print hello world with format strings */
	printf("Hello, You're %s", input);
    }

    return 0;
}
