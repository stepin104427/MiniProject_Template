#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"struct.h"
#include"struct_tests.h"

void view(int num)
{
    for(int i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x[i].name);
        printf("Status = ");
        puts(x[i].status);
        printf("Bed no = %d\nPhone number = 0%d\nAge=%d",x[i].bedno,x[i].phone,x[i].age);
        printf("\n\n");
    }
}