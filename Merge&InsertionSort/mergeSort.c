#include "mySort.h"

void mySort(int arr[], unsigned int first, unsigned int last)
{
    if (first < last) {

        int m =  (last + first) / 2;
  
        mySort(arr, first, m);
        mySort(arr, m + 1, last);


        int i, j, k;
        int h1 = m - first + 1;
        int h2 = last - m;
        int L[h1], R[h2];
  
    
        for (i = 0; i < h1; i++)
          L[i] = arr[first + i];
        for (j = 0; j < h2; j++)
          R[j] = arr[m + 1 + j];
    
        i = 0; 
        j = 0;
        k = first; 
        //(myCompare(L[i], R[j]) < 0)
        while (i < h1 && j < h2) {
          if (myCompare(L[i], R[j]) < 0 || L[i] == R[j] ) {
              myCopy(&L[i], &arr[k]);
              i++;
          }
          else {
              myCopy(&R[j], &arr[k]);
              j++;
          }
          k++;
        }
  
    
      while (i < h1) {
          myCopy(&L[i], &arr[k]);
          i++;
          k++;
      }
  
  
      while (j < h2) {
          myCopy(&R[j], &arr[k]);
          j++;
          k++;
      }
  
        
      }
} 