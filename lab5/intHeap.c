#include <stdio.h>
#include <stdlib.h>
extern  int pop();
extern void push(int);
extern int isEmpty();

/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */
static int heap[100];  // Array for heap
static int size = 0;   // Size of heap

/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete()
{
	if(size == 0){
		fprintf(stderr,"There is nothing to delete");
		exit(1);
	} //A dummy return statement
	
	 // return the largest intgeer
		int maxval;
		maxval = heap[0];
		heap[0] = heap[size - 1];
		size--;
		Bigint(heap, size, 0);
		return maxval;	
	
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
	heap[size] = thing2add;
	size++;
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;  //A dummy return statement
}

// Function to obtain largest integer from the tree
void Bigint(int heap[], int size, int num){
	
	// Using the psuedo code for maxheapify
	int parent = num;
	int Leftchild = (2*num) + 1; // index for the left child
	int Rightchild = (2*num) + 2; // index for right child
	
	if (Leftchild < size && heap[Leftchild] > heap[parent]){
		parent = Leftchild;
	}
	
	if (Rightchild < size && heap[Rightchild] > heap[parent]){
		parent = Rightchild;
	}
	
	if (parent != num){ // A swapped has happened
		//int temp; 
		// Use a temp to swap the two
		int temp = heap[num];
		heap[num] = heap[parent];
		heap[parent] = temp;
	
	
	Bigint(heap, size, parent);
	}
}

void fullMaxHeapify(){
	for(int i = (size/2)-1; i >=0 ; i--)
		Bigint(heap, size, i);
}

void heapSortPushStack(){
	for(int i = (size/2)-1; i >=0 ; i--){
		Bigint(heap, size, i);
	}
	
	for(int i = size -1; i >=0; i--){
		push(heap[0]);
		printf("%d\n", heap[0]);
		
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		
		Bigint(heap, i , 0);
	}
}

void printNode(int size, int num){
	int parent = num;
	int left = 2*num + 1;
	int right = 2*num + 2;
	if (parent < size)
	printf("<node id=%d>", heap[parent]);
	
	if(left < size)
	printNode(size, left);
	
	if (right < size)
	printNode(size, right);
	
	if(parent < size)
	printf("</node>");
}
