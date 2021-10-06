#include<stdio.h>

int main() {
    int mat[2][2]; //initialize a 2x2 matrix
    int det = 0;//determinant

    printf("Enter elements of a matrix row wise: \n");

     //gets the user input for the matrix
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]); 
        }
    }

    printf("The matrix to find the inverse of is: ");
    //prints the matrix back to user
    for(int i = 0; i < 2; i++) {
        printf("\n");
        for(int j = 0; j < 2; j++) {
            printf("%d\t", mat[i][j]);
        }
    }
    printf("\n");

    //find the determinant
    //ad - bc
    det = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);

    printf("The determinant is: %d\n", det);

    //determinant cannot be 0
    if(det != 0) {
        //switch the matrix around to solve for inverse
        int temp = mat[0][0];
        mat[0][0] = mat[1][1];
        mat[1][1] = temp;
        mat[0][1] = - mat[0][1];
        mat[1][0] = - mat[1][0];

        printf("The inverse of matrix is:");

        //prints the inverse back to the user
        for(int i = 0; i < 2; i++) {
            printf("\n");
            for(int j = 0; j < 2; j++) {
                printf("%d\t", mat[i][j]/det); 
            }
        }
    }


}
