#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define HASH_TABLE_SIZE 1067
extern char *pop();
extern void push(char *);
extern void add(char * tag);
extern void getCount();
extern int isEmpty();

extern hash_table[HASH_TABLE_SIZE];

int main(int argc, char * argv[]) {
    int ch, ch2;
    int i;
    char *inStr = malloc(sizeof(char *));

    while ((ch = getchar()) != EOF) {
        if(ch == '<'|| ch == '/'){
            if(ch == '/' && ch2 != '<'){
                fprintf(stderr, "INVALID, Incorrect syntax \n");
                exit(1);
            }
            ch2 = ch;
        }
        if(ch == '>'){
            if(!(isalpha(ch2))){
                fprintf(stderr, "INVALID, Incorrect syntax \n");
                exit(1);
            }
        }else if(isalpha(ch)){
            if(ch2 == '<'){
                push(inStr);
                add(inStr);
                
                ch2 = ch;
            } else if(ch2 == '/'){
                if(strcmp(pop(), inStr) != 0){
                    fprintf(stderr, "INVALID \n");
                    exit(1);
                } else{
                    ch2 = ch;
                }
            }               
        }
    }
    if(isEmpty() == 1){
        printf("VALID \n");    
        getCount(); 
        exit(0);
    }
    else{
        fprintf(stderr, "INVALID \n");
        exit(1);
    }
}