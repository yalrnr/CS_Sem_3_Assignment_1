/*  
    Assignment No I-1
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
       int length,i,DotCount=0,index,checkifNumberPostDecimal=0,checkifNumberPreDecimal=0;
       scanf("%s",number);
       length=strlen(number);
       for(i=0;i<length;++i){
           if(number[i]=='.'){
               DotCount++;
               index=i;
           }
       }
       for(i=0;i<index;++i){
           if(number[i]>=48 && number[i]<=57)
           checkifNumberPreDecimal++;
       }
       for(i= index+1;i<length;++i){
           if(number[i]>=48 && number[i]<=57)
           checkifNumberPostDecimal++;
       }
       if(DotCount==1&&(checkifNumberPostDecimal==(length-index-1))&&length-index-1<=6 && checkifNumberPreDecimal==index){
       printf("Valid \n");
       }
       else{
       printf("Invalid \n");
       }
    return 0;
}
