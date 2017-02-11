
#include <stdio.h>

int* Shell_Sort(int* array, int length){
    int tmp=0;
    for(int gap = (int)(length/2); gap > 0; gap = (int)(gap/2)){
        for(int i = gap; i < length; i++){    //Insertion_Sort
            tmp = array[i];
            int j = i;
            while(j >= gap && tmp < array[j-gap]){
                array[j] = array[j-gap];
                j-=gap;
            }
            array[j] = tmp;
        }
    }
    return array;
}
