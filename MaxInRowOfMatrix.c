#include<stdio.h>
#include<limits.h>
int main(){
    int row,col;
    scanf("%d %d", &row,&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0; j<col; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int res=INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(mat[i][j]>=res)
            res=mat[i][j];
        }
        printf("\n%d",res);
        res=INT_MIN;
    }
}
