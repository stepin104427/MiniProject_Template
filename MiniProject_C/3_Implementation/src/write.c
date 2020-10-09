#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"struct.h"
#include"struct_tests.h"

void write(int num)
{
    FILE *fp = fopen("patient.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
    FILE *fptr = fopen("statistics.txt","wb+");
    if(fptr == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(y, sizeof(struct tests),1, fptr);
    fclose(fptr);
}
