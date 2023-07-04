#include "mySort.h"
#include "metrics.h"

void mySort(int array[], unsigned int first, unsigned int last)
{
    int length = (last-first)+1;
    for (int i = 1; i < length; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && myCompare(array[j], key) > 0) {
            myCopy(&array[j], &array[j+1]);
            j = j - 1;
        }
        myCopy(&key, &array[j+1]);
    }
}
