/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sortMain.c
 * Author: Ahmad Khan
 *
 * Created on January 16, 2022, 11:43 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "mySort.h"

/*
 * 
 */
int main(int argc, char* argv[]){

    if (argc > 1)
    {
    int a;
    int f;
        int input[10000];
        for (a = 0; a < argc; a++)
        {
            input[a] = atoi(argv[a]);
        }
        mySort(input, argc);
        for (f = 1; f < argc; f++)
        {
            printf("%d\n", input[f]);
        }
        exit(0);
    }
    else{
        int data[100000];
        int nDataItems;
        int i;
        nDataItems = 4;
        data[0] = 10;
        data[1] = 20;
        data[2] = 30;
        data[3] = 40;
        mySort(data, nDataItems);

        for (i = 0; i < nDataItems - 1; i++)
        {
            if (data[i] > data[i + 1])
            {
                fprintf(stderr, "Sort error: data[%d] (= %d)"  " should be <= data[%d] (= %d)- -aborting\n", i, data[i], i + 1, data[i + 1]);
                exit(1);
            }
        }

        //Print sorted array to stdout 
        for (i = 0; i < nDataItems; i++)
        {
            printf("%d\n", data[i]);
        }
        exit(0);
    }

    
}

