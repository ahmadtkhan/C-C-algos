#include <stdlib.h>
#include "towers.h"

int main(int argc, char **argv){

    int n;
    int from;
    int dest;
    if (argc == 1){
        towers(3, 1, 2);
    }
    else if(argc == 2){
        n = atoi(argv[1]);
        towers(n, 1, 2);
    } 
    else if(argc == 3){
        exit(0);
    }
    else if(argc == 4){
        int n = atoi(argv[1]);
        int from = atoi(argv[2]);
        int dest = atoi(argv[3]);
        if(dest > 3 || from > 3 || n < 1 || from < 1 || dest < 1){
            exit(1);
        }
        if(dest == from){
            exit(1);
        }
        towers(n, from, dest);
    }


/*
    

    int n = atoi(argv[1]);
    int from = atoi(argv[2]);
    int dest = atoi(argv[3]);

    if(dest > 3){
        exit(0);
    } else if(argc == 0){
        towers(3, 1, 2);
        exit(0);
    } else if(argc == 1){
        n = atoi(argv[1]);
        towers(n, 1, dest);
        exit(0);
    } else if(argc == 2){
        exit(0);
    } else{
        if (argc > 1) {
        n = atoi(argv[1]);
        }
        towers(n, from, dest);
        exit(0);
    }

    */
    
}

