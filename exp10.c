#include <stdio.h>
int main(){
    float list[45], mean,sum=0,median,temp;
    int limit,i,j;
    printf("Enter limit of list: ");
    scanf("%d",&limit);
    printf("\nEnter height of %d students in centimeters:\n\n",limit);
    for(i=0;i<limit;i++){
        printf("%d) ",i+1);
        scanf("%f",&list[i]);
    }
    //sorting
    for(i=0;i<limit-1;i++){
        for(j=0;j<limit-1-i;j++){
            if(list[j]>list[j+1]){
                temp = list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    
    
    for(i=0;i<=limit;i++){
        sum+=list[i];
    }
    
    mean=sum/limit;
    
    if(limit%2==0){
        median+=(list[limit/2]+list[limit/2+1])/2-1;
    }
    else{
        median+=list[(limit+1)/2]-1;
        
    }
    
    printf("Mean = %f\n",mean);
    printf("Median = %f\n",median);
    printf("Maximum value = %f\n",list[limit-1]);
    printf("Minimum value = %f\n\n",list[0]);
    return 0;
}