#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern int isEmpty();
extern void push(int);

int main(int argc, char * argv[]) {
    int ch, ch2;
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
                push(ch);
                ch2 = ch;
            } else if(ch2 == '/'){
                if(pop() != ch){
                    fprintf(stderr, "INVALID \n");
                    exit(1);
                } else{
                    ch2 = ch;
                }
            }            
        }
    }
    if(isEmpty() == 1){
        printf("VALID");
        exit(0);
    }
    else{
        fprintf(stderr, "INVALID \n");
        exit(1);
    }
}
