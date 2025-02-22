#include<stdio.h>
int main()
{
    int array1[3][3]={{1,2,3},{4,5,6},{7,8,9}};


    int sum=0;
    for(int i=0;i<3;i++)
    {
       sum+=array1[i][i];
    }
    printf("Diagonal elemnts of array1=%d",sum);
    for(int row=0;row<3;row++)
    {
        int sumR=0;
        int sumC =0;

        for(int col=0;col<3;col++)

        {
            sumR+= array1[row][col];
            sumC += array1[col][row];
        }
        printf("Row No :%d sum : %d\n",row,sumR);
        printf("Col No:%d sum : %d\n",row,sumC);
       printf("\n");
    }
     

}