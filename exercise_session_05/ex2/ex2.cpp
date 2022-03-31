#include <stdio.h>

int reverse(int **M, int **M2, int size) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < size; ++j) {
            *(*(M2+i)+j) = *(*(M+1-i)+size-1-j);
        }
    }
    return 0;
}

int main (int argc, char *argv[]){
    int** M = new int *[2];
    M[0] = new int[5]{0,1,2,3,4};
    M[1] = new int[5]{5,6,7,8,9};
    
    int** M2 = new int *[2];
    M2[0] = new int[5];
    M2[1] = new int[5];

    reverse(M, M2, 5);
    
    printf("%d, %d, %d, %d, %d\n",M2[0][0],M2[0][1],M2[0][2],M2[0][3],M2[0][4]);
    printf("%d, %d, %d, %d, %d\n",M2[1][0],M2[1][1],M2[1][2],M2[1][3],M2[1][4]);
    return 0;
}