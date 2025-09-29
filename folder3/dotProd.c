#include <stdio.h>
int dotProdFunc(int *firstVector, int *secondVector, int size){
    int dotproduct = 0; 
     for(int i = 0; i < size; i++){
       dotproduct += firstVector[i] * secondVector[i]; 
    }
    return dotproduct; 
}

void retrieveData(int size, int *vector){
    printf("Enter vector number: ");
    for(int i= 0; i< size; i++){
        scanf("%d", &vector[i]); 

    }
}