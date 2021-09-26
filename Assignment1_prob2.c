#include <stdio.h>
#include <string.h>
int main()
{   
       char emailid[100];
       int length,i,atCount=0,underscoreCount=0,dotCount=0,indexOfat;
       scanf("%s",emailid);
       length=strlen(emailid);
       for(i=0;i<length;++i){
           if(emailid[i]=='@'){
               atCount++;
               indexOfat=i;
           }
       }
       for(i=indexOfat;i<length;++i){
        if(emailid[i]=='_')
            underscoreCount++;
        else if (emailid[i]=='.'){
            dotCount++;
        }
       }
       if(atCount!=1 || indexOfat+1>=64 || underscoreCount!=0 || dotCount==0 || (emailid[0]<=57&&emailid[0]>=48)){
       printf("Invalid \n");
       }
       else{
       printf("Valid \n");
       }
    return 0;
}