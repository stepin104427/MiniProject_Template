#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"struct_tests.h"
#include"struct.h"
void add_test()
{
    
    printf("\n");
    fflush(stdin);
    printf("Enter total number of tests done = \n");
    scanf("%d",&y[0].total);
    fflush(stdin);
    printf("Enter number of test results positive = \n");
    scanf("%d",&y[0].pos);
    fflush(stdin);
    printf("Enter number of test results negative = \n");
    scanf("%d",&y[0].neg);
    fflush(stdin);
    printf("\n");
}
