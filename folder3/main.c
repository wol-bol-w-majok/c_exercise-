#include "dotProd.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
    int size, result;
    int *firstVector, *secondVector;

    printf("ENter length of vectors: ");
    scanf("%d", &size);

    firstVector = (int *) malloc(size*sizeof(int));
    secondVector = (int *) malloc(size*sizeof(int));

    retrieveData(size, firstVector);
    retrieveData(size, secondVector);
    result = dotProdFunc(firstVector, secondVector, size);
    printf("%d\n", result); 

    free (firstVector);
    free (secondVector); 
}