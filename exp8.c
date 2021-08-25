// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int min,max,i,j,count;
  printf("enter the range for finding the prime numbers:\n");
  scanf("%d""%d",&min,&max);
  printf("\nThe entered range is from %d to %d",min,max);
  printf("\n\n--------------------------------\n\n");
  printf("The prime numbers in given range are:\n");
  for(i=min;i<=max;i++){
      count=0;
      for(j=1;j<=i;j++){
          if(i%j==0)
          count++;
         
      }
      if(count==2)
      printf("%d\n",i);
  }
  return 0;
}