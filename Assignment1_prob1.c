/*  
    Mini-Project 1
    CS 201, Data Structures
    Department of Computer Science and Engineering, 
    National Institute of Technology Silchar
    Anuj Yadav_2012024
*/
#include <stdio.h>
#include <string.h>
int main()
{   
       char number[100];
       int length,i,DotCount=0,index;
       scanf("%s",number);
       length=strlen(number);
       for(i=0;i<length;++i){
           if(number[i]=='.'){
               DotCount++;
               index=i;
           }
       }
       if(DotCount==1&&number[index+1]>=48&&number[index+1]<=57){
       printf("Valid \n");
       }
       else{
       printf("Invalid \n");
       }
    return 0;
}
