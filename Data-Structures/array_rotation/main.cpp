#include<stdio.h>
#include<stdlib.h>

void rotation(int ar[], int d);
void insertion(int temp_array[], int used_array[], int shifting);

int main(){
    int array[] = {1,2,3,4,5,6,7};
    int rotate=0;
    printf("Rotation: ");
    scanf("%d", &rotate);
    rotation(array, rotate);
    return 0;
}

void rotation(int ar[], int d){
    int *ptr;
    ptr = (int*)malloc(sizeof(int)*d);
    for(int i =0; i<d; i++){
        ptr[i] = ar[i];
    }
    insertion(ptr,ar,d);
}

void insertion(int temp_array[], int used_array[], int shifting){
    int temp_loop = 0, f_insert = 0;
    int k =1;
    temp_loop = shifting;
    f_insert = temp_loop;
    used_array[0] = used_array[shifting];
    while(!(shifting >= 7)){
        used_array[k] = used_array[shifting+1];
        k++;
        shifting ++;
    }
    for(int l=0; l<temp_loop; l++){
        used_array[(7-f_insert)] = temp_array[l];
        f_insert--;
    }
    for(int j=0; j<7; j++){
        printf("%d", used_array[j]);
    }
    printf("\n");
}
