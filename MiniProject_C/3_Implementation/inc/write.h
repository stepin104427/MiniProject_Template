#ifndef write
#include"struct.h"

void write()
{
    FILE *fp = fopen("patient.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(x),num,fp);
    fclose(fp);
    FILE *fptr = fopen("statistics.txt","wb+");
    if(fptr == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(y, sizeof(y),1, fptr);
    fclose(fptr);
}
#define write
#endif