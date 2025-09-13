//KOBUMANZI TRISHIA
//M24B23/011
#include <stdio.h>

int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9}; // Array with 10 numbers
    int max= arr[0], i;   // Initializing max with the first element

    // Find the maximum element
    for(i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    // Print the maximum element
    printf("Maximum element is: %d\n", max);

    return 0;
}
