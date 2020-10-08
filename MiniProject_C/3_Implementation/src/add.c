#include"add.h"
void add()
{
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum=n+num;
    bed_count=bed_count-n;

    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter patient's Name = ");
        gets(x[i].name);
        fflush(stdin);
        printf("Enter status = ");
        gets(x[i].status);
        fflush(stdin);
        printf("Enter the age = ");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("Enter bed no = ");
        scanf("%d",&x[i].bedno);
        fflush(stdin);
        printf("Enter phone number = ");
        scanf("%d",&x[i].phone);
        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }
}