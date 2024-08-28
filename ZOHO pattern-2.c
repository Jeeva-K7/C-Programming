#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int a=1;
    int b=2;
    int odd=1, even=2;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            printf(" \t");
        }
            if(i%2!=0){
                while(a>=1){
                    printf("%d\t",odd);
                    odd+=2;
                    a--;
                }
            }
            else{
                while(b>=1){
                    printf("%d\t",even);
                    even+=2;
                    b--;
                }
            }
            a=i+1;
            b=i+1;

        
        
        printf("\n");
    }
    
}

// 8
//  	 	 	 	 	 	 	1	
//  	 	 	 	 	 	2	4	
//  	 	 	 	 	3	5	7	
//  	 	 	 	6	8	10	12	
//  	 	 	9	11	13	15	17	
//  	 	14	16	18	20	22	24	
//  	19	21	23	25	27	29	31	
// 26	28	30	32	34	36	38	40	
