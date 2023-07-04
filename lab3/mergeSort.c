#include "mySort.h"
#include "metrics.h"

void merge(int arr[], int l1, int r1, int l2,  int r2)
{
	int temp[MAX_SIZE_N_TO_SORT]; //the array that will be used for merging
	int i;
	int j;
	int k;
	i = l1;
	j = l2;
	k = 0;
	
	while(i <= r1 && j <= r2) // while the elements are in both lists
	{
		if(myCompare(arr[i], arr[j]) < 0)
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];		
    }
	
	while(i <= r1) //copying remaining elements of the first list
		myCopy(&arr[i++], &temp[k++]) ;
	
	while(j <= r2) //copying remaining elements of the second list
		myCopy(&arr[j++], &temp[k++]);
		
	for(i = l1, k = 0; i <= r2; i++, k++)//swapping the elements from temp[] to arr[]
		mySwap(&arr[i], &temp[k]);
}
void mySort(int array[], unsigned int first, unsigned int last)
{ 
    int middleArray;

    if(first < last)
    {
       middleArray = (first + last)/2; //Calculates the middle of the arrray
       mySort(array, first, middleArray); //Calls the mySort function for the first subarray
	   mySort(array, middleArray + 1, last); //Calls the mySort function for the second subarray
	   merge(array, first, middleArray, middleArray + 1, last); //Calls the merge function
    }
}
