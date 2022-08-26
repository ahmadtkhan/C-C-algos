#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define size 100
extern int pop();
extern int isEmpty();
extern void push(int);

int main(int argc, char * argv[]) {
    int ch, ch2;
    int i;  
    int count[size][2];
    for(i = 0; i < 50; i++) { 
        count[i][0] = 0;
        count[i][1] = 0;
    }
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
                for(i = 0; i < size; i++){
                    if(count[i][0] == ch){
                        count[i][1]++; 
                        break;
                    } else if(count[i][0] == 0){
                        count[i][0] = ch;
                        count[i][1]++;
                        break;
                    }
                }
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
        printf("VALID \n");
        for(i = 0; i < size; i++){
            if(count[i][0] != 0){
                printf(" %c %d \n",count[i][0], count[i][1]);  
            } else{
                break;
            }
        }
        exit(0);
    }
    else{
        fprintf(stderr, "INVALID \n");
        exit(1);
    }
}