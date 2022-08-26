#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int heapDelete();
extern void addHeap(int);
extern void printTree(int);
extern void printarr();

int main(int argc, char * argv[]){
  int value;
  int count = 0;
  int i,j;
  while (scanf("%d\n",  &value) != EOF) {

    fprintf(stderr, "READING INPUT: %d\n", value);
    addHeap(value);
    count++;
  }
  printTree(0);
  printf(" \n");
  int count2 = count-1;
  for(i = 0; i < count; i++){
        int delete = heapDelete(count2);
        printf("%d\n", delete);
        push(delete);
        count2--;
  }
  printf("\n");
  for(j = 0; j < count; j++){
    printf("%d\n", pop());
  }

  exit(0);
}
