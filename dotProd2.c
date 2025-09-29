#include <stdio.h>
#include <stdlib.h>
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