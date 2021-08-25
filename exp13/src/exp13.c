/*
 ============================================================================
 Name        : exp13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,n;
    char str[50][50], s[50];

    printf("Enter the number of names: ");
    scanf("%d",&n);

    printf("\nEnter %d names to be sorted:\n",n);
    for(i=0;i<n;i++)


    scanf("%s",str[i]);

    printf("\n\nThe Entered names are:\n");

    for(i=0;i<n;i++)
    {
        printf("%d) %s\n", i+1, str[i]);

    }

    //for sorting

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(s,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],s);
            }
        }

    }
    printf("\n\nThe sorted names are as follows:\n");

    for(i=0;i<n;i++)
    {
        printf("%d) %s\n",i+1, str[i]);

    }
    return 0;
}
