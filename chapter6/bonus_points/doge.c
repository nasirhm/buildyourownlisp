#include <stdio.h>
#include <stdlib.h>
#include "mpc.h"

#ifdef _WIN32
/* This code would be processed on a WIN32 */
#include <string.h>
/* Defining a Buffer */
static char buffer[2048];

/* Defining a fake readline function */
char* readline(char* prompt){
    fputs(prompt, stdout);
    pgets(buffer,2048,stdin);
    char* cpy = malloc(strlen(buffer)+1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
}

void add_history(char* unused) {}

/* otherwise include the headerfiles */
#else
#include <editline/readline.h>
#endif

int main(int argc, char** argv){
    // Writing a parser for Doge language
    mpc_parser_t* Adjective = mpc_new("adjective");
    mpc_parser_t* Noun = mpc_new("noun");
    mpc_parser_t* Phrase = mpc_new("phrase");
    mpc_parser_t* Doge = mpc_new("doge");

    mpca_lang(MPCA_LANG_DEFAULT,
            "                                                                  \
            adjective : \"wow\" | \"many\" | \"so\" | \"such\";                \
            noun : \"lisp\" | \"language\" | \"book\" | \"build\" | \"c\";     \
            phrase : <adjective> <noun>;                                       \
            doge : /^/<phrase>*/$/;                                                  \
            ", Adjective, Noun, Phrase, Doge);
    puts("Doge version: 0.0.0.0.1");
    puts("Press Ctrl-c to exit\n");

    while(1){
        char* input = readline("doge> ");
        mpc_result_t r;
        if(mpc_parse("<stdin>", input, Doge, &r)){
            // On success print the AST
            mpc_ast_print(r.output);
            mpc_ast_delete(r.output);
        }else{
            // Otherwise print the error.
            mpc_err_print(r.error);
            mpc_err_print(r.error);
        }

        free(input);
    }
    mpc_cleanup(4, Adjective, Noun, Phrase, Doge);
    return 0;
}
