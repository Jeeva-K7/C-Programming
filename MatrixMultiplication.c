#include<stdio.h>
int main(){
    int r1, c1, r2, c2;
    printf("Enter Matrix-1 row and col: ");
    scanf("%d %d",&r1,&c1);
    int mat1[r1][c1];

    printf("Enter Matrix-1 Values:\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter Matrix-2 row and col: ");
    scanf("%d %d",&r2,&c2);
    int mat2[r2][c2];
    
    printf("Enter Matrix-1 Values:\n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    
    if(c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }


    printf("\n[Resultant Matrix]\n");
    int product[r1][c2];
    int sum=0;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            for(int k=0; k<c1;k++){
                sum+= mat1[i][k]*mat2[k][j]; 
            }
            product[i][j]=sum;
            sum=0;
            
            printf("%d\t",product[i][j]);
        }
        
        printf("\n");
    }
    

}
