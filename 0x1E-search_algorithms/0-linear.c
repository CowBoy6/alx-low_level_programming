#include <stdio.h>
#include <stdlib.h>
 int linear_search(int *array, size_t size, int value){
    if(*array == NULL){
        return -1;
    }
    bool exist = true ;
    for(int i=0;i<(int) size;i++){
        printf("Value checked array[%d] = [%d] \n",i,array[i]);
        if(array[i]==value){
            exist=false;
            return i;
        }
    }
    if(exist){
        return -1;
    }
 }
