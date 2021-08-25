#include <stdio.h>

int main() {
 int ncr,space,n,r,row;
 printf("Enter the number of row to be printed: ");
 scanf("%d",&row);
 for(n=0;n<row;n++)
 {
     for(space=1;space<row-n;space++)
     {
         printf(" ");
         }
     for(r=0;r<=n;r++)
     {
         if(r==0||n==0){
         ncr=1;
         printf("%d ",ncr);
         }
         else
         {
             ncr=ncr*(n-r+1)/r;
         printf("%d ",ncr);
         }
         
    
     }
     printf("\n");
 }
 return 0;
}