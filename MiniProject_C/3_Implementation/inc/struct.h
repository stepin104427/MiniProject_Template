#ifndef struct
int bed_count=200,num;
struct ad
{
    char name[30];
    char status[30];
    int bedno,phone,age;
}x[200];
struct tests
{
    long total,pos,neg;
}y[1];

#define struct
#endif
