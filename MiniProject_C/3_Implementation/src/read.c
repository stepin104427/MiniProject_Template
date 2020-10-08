
#include"write.h"
#include"struct.h"
void write()
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
