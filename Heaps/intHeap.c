#include <stdio.h>
#include <math.h>
/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */
 int max_num = 0;
 int heapArr[10];



void heapify(int heapArr[], int max_num, int i){
	int greatest = i;
	int left = 2*i + 1;
	int right = 2*i + 2;

	if(left <= max_num && heapArr[left] > heapArr[greatest]){
		greatest = left;
	}
	if(right <= max_num && heapArr[right] > heapArr[greatest]){
		greatest = right;
	}
	if(greatest != i){
		int temp = heapArr[greatest];
		heapArr[greatest] = heapArr[i];
		heapArr[i] = temp;
		heapify(heapArr, max_num, greatest);
	}
}

void heapSort(int heapArr[], int max_num){
	int i;
	//making or arranging the heap
	for(i = max_num/2 - 1; i >= 0; i--){
		heapify(heapArr, max_num, i);	
	}
}

void printTree(int p){
	int left = (2*p) + 1;
	int right = (2*p) + 2;

	printf("<node id= '%d'>", heapArr[p]);
	if(left<max_num)
		printTree(left);

	if(right<max_num)
		printTree(right);

	printf("</node>");
}

/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete(int j){
		int temp = heapArr[0];
		heapArr[0] = heapArr[j];
		heapArr[j] = temp;
		heapify(heapArr, j, 0);
		return heapArr[j];
	
    //A dummy return statement
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add){
	heapArr[max_num] = thing2add;	
	max_num++;
	heapSort(heapArr, max_num);
}


/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize(){
  return max_num;  //A dummy return statement
}