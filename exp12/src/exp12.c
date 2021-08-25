/*
 ============================================================================
 Name        : exp12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>

int strcompare(char a[], char b[])
{
    int flag=0, i=0;
    while(a[i] != '\0' && b[i] !='\0')
    {
        if(toupper(a[i]) != toupper(b[i]))
        {
            flag = 1;
            break;

        }
        i++;

    }

    if(flag == 1)
    return 0;

    else
    return 1;


}

int main()
{
    char str1[20], str2[20];
    char str3[20];
    int i, j, c;

    //asking the entries
    printf("1.Enter the first word: ");
    scanf("%s",str1);
    printf("\n2.Enter the second word: ");
    scanf("%s",str2);

    //finding the length of strings
    for(i=0;str1[i] !='\0';i++);
    printf("\n* The length of the word 1 is %d\n",i);

    for(j=0;str2[j] != '\0';j++);
    printf("* The length of word 2 is %d\n",j);

    //comparing the equality of strings
    c = strcompare(str1,str2);
    if(c == 0)
    printf("* The words are NOT same\n");
    else
    printf("* The words are same\n");


    //copying the string
    for(i=0;str1[i] != '\0';i++)
    {
        str3[i] = str1[i];
    }

    str3[i] = '\0';
    printf("* The copied string = %s\n",str3);

    //concatinating two strings

    for(j=0;str2[j] != '\0';j++,i++)
    {
        str1[i] = str2[j];


    }

    str1[i] = '\0';

    printf("* The concatinated string is: %s\n",str1);

    return 0;


}

