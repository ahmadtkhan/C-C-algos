    #include "mySort.h"

void mySort(int arr[], unsigned int first, unsigned int last)
{
    first++;
    int i, temp;
    for (i = first; i < last+1; i++) {
        myCopy(&arr[i], &temp);
        //    temp = arr[i];
        first = i ;
        while (first > 0 && myCompare(arr[first], arr[first - 1]) < 0){
        //if     arr[first - 1] > arr[first])
        
        mySwap(&arr[first], &arr[first - 1]);
        first--;
      }
    }
}
/*
        temp = arr[first];
        arr[first] = arr[first - 1];
        arr[first - 1] = temp;
        first--;
*/