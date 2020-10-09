#ifndef read
#include"struct.h"

void read()
{
    FILE *fp = fopen("patient.txt","r");
    if(fp == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        fp = fopen("patient.txt","w");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
    
    }
    num = fread(x, sizeof(x),200,fp);
    bed_count=bed_count-num;
    fclose(fp);
    FILE *fptr;
    fptr = fopen("statistics.txt","r");
    if(fptr == NULL)
    {
        fp = fopen("statistics.txt","rb+");
        fclose(fptr);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");             
    }
    fread(y, sizeof(y),1, fptr);
    fclose(fptr);
}
#define read
#endif