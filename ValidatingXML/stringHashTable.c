#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry {
  char *string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];


void add(char * tag)
{
int i = HASH_TABLE_SIZE;
    int key;
    key = hash(tag);
    while(i > 0){
        if(hash_table[key].count == 0) {
            hash_table[key].string = tag;
            hash_table[key].count = 1;
        }
        else if(hash_table[key].count != 0) {
            if(hash_table[key].string == tag){
                hash_table[key].count++;
                break;
            }else{
                key++;
                key = key % HASH_TABLE_SIZE ;
            }
        }
        i--;
    }
}

int hash(char * tag){
    int i,sum=0,key;
    int leng = strlen(tag);
    for(i = 0; i< leng ; i++){
        sum += *(tag+i);
    }
    key = sum % HASH_TABLE_SIZE;
    return key;
}

void getCount(){
    int i;
    for(i = 0; i < HASH_TABLE_SIZE; i++){
        if(hash_table[i].count != 0)
            printf("<%s> , %d \n", hash_table[i].string, hash_table[i].count);
    }
}
