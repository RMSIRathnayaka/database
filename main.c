#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int u[3][3]={3,2,4,1,4,6,4,3,2},v[3][3]={2,6,3,4,3,2,5,1,7},sum[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",u[i][j]);
        }
        printf("\t");

        for(j=0;j<3;j++){
            printf("%d",v[i][j]);
        }
        printf("\t");

        for(j=0;j<3;j++){
            sum[i][j]=u[i][j]+v[i][j];
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }

    int i,j;
    int arr[4][4]={8,17,9,6,5,2,11,18,7,27,28,0,4,1,3,10};

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(arr[i][j]==5){
                printf("The element is at array [%d][%d] array address\n");
            }
        }
    }
}
