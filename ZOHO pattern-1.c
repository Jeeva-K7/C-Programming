#include<stdio.h>
int main(){
    int a=1;
    int b=5;
    for(int i=1; i<=5; i++){
        for(int j=b; j>1; j--){
            printf("  ");
        }
        for(int k=a; k>=1; k--){
            printf("%d ",k);
        }
        a++;
        b--;
        printf("\n");
    }
}

//         1 
//       2 1 
//     3 2 1 
//   4 3 2 1 
// 5 4 3 2 1 
