#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv){
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl-c to exit");
    puts("Thanks for using Lispy");


    while(1){
	char* input = readline("nasirhm> ");
	printf("You're recognized as %s\n",input);
	free(input);
    }

    return 0;
}
