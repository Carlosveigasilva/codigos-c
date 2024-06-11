#include<stdio.h>

int main(){

int notas[10] = {10, 7, 8, 6, 5, 4, 6, 8, 9, 10};
for(int i = 0; i < 10; i++){
printf("%d \n", notas[i]);
}

char *array1[] = {"Joao", "Maria", "Jubileu"};
for(int i = 0; i < 3; i++){
    printf("%s \n", array1[i]);
}


int *array2[3] = {"Carla", "Flavia", "Jubileu"};


}
