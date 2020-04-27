#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>

int main(int argc, char** argv){
    puts("Lispy version 0.0.0.0.1");
    puts("Press CTRL-C to exit.\n");

    while(1){
	char* input = readline("lispy> ");
   	printf("You're %s\n",input);
	free(input);
   }

}
