////////////////////////////////////////////////////////////////////////////////
//This code only prints array in reverse. Doesnt actually reverse the array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for(i = 0; i < num; i++){
        printf("%d ", *(arr +num - (i+1)));
        //print elements  in the reverse order
    }
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
/////////////////////////CORRECT ANSWER///////////////////////////////////////////

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int* left_ptr = arr;
    int* right_ptr;

    int temp;

    //?? Not sure why this is done like this
    for(i = 0; i < num; i++) {
        if(i == num - 1) {
            right_ptr = (arr + i);
        }
    }

    while(left_ptr < right_ptr) {
        //works with both even and odd lengthed arrays
        temp = *right_ptr;//assign right value to temp
        *right_ptr = *left_ptr; //assign left value to right pointer_safety
        *left_ptr = temp; //assign right value to left pointer
        right_ptr--;
        left_ptr++;
    }

    for(i = 0; i < num; i++) {
        printf("%d ", *(arr + i));
    }
    free(arr);//free the memory from the heap
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
