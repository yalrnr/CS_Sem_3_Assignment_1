/*  
    Assignment No I-1
    CS 201, Data Structures
    Department of Computer Science and Engineering, 
    National Institute of Technology Silchar
    Anuj Yadav_2012024
*/
#include <stdio.h>
void ConvertTo2DArray(int No_Of_Rows,int No_Of_Columns,int input[]){
     int i,j,index=0;
    //Elements of 1D Array Stored in 2D Array(Row Major Order)
    int answer[No_Of_Rows][No_Of_Columns];
    for(i=0;i<No_Of_Rows;++i){
        for(j=0;j<No_Of_Columns;++j){
             answer[i][j]=input[index];
             index++;
        }
    }
    //Printing Elements of newly created 2D Array(Row Major Order)
   for(i=0;i<No_Of_Rows;++i){
        for(j=0;j<No_Of_Columns;++j){
             printf("%d ",answer[i][j]);
        }
        printf("\n");
    }
}
int main(){   
    int No_Of_Rows,No_Of_Columns, total_no;
    scanf("%d",&No_Of_Rows);
    scanf("%d",&No_Of_Columns);
    total_no=(No_Of_Rows*No_Of_Columns);
    //Storing the elements in 1D Array
    int input[total_no],i,j;
    for(i=0;i<total_no;++i){
        scanf("%d",&input[i]);
       }
    ConvertTo2DArray(No_Of_Rows,No_Of_Columns,input);
    return 0;
}
