#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"struct.h"
#include"struct_tests.h"
void search(int num)
{
    int s,h,f;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Status\n4.Bed no.\n5.Phone no.\n6.Age\n\nOption = ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("Enter Serial number of the patient=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Serial Number=%d\n",s);
            printf("Name = ");
            puts(x[s].name);
            printf("Status = ");
            puts(x[s].status);
            printf("Bed no = %d\nPhone number = 0%d\nAge = %d",x[s].bedno,x[s].phone,x[s].age);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");
    }
    else if(h==2)
    {
        int f=1;
        fflush(stdin);
        printf("Enter your name=");
        gets(u);
        fflush(stdin);
        for(int g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Status = ");
                puts(x[g].status);
                printf("Bed no = %d\nPhone number = 0%d\nAge = %d",x[g].bedno,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
            printf("\nNot Found\n");



    }
    else if(h==3)
    {
        int f=1;
        fflush(stdin);
        printf("Enter Status = ");
        gets(u);
        fflush(stdin);
        for(int g=0; g<num; g++)
        {
            if(strcmp(u,x[g].status)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Status = ");
                puts(x[g].status);
                printf("Bed no = %d\nPhone number = 0%d\nAge = %d",x[g].bedno,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }


        }
        if(f==1)
            printf("\nNot Found\n");


    }
    else if(h==4)
    {
        int f=1;
        printf("Enter Bed number = ");
        scanf("%d",&f);
        for(int g=0; g<num; g++)
        {
            if(f==x[g].bedno)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Status = ");
                puts(x[g].status);
                printf("Bed no = %d\nPhone number = 0%d\nAge = %d",x[g].bedno,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else if(h==5)
    {
        int f=1;
        printf("Enter Phone number = ");
        scanf("%d",&f);
        for(int g=0; g<num; g++)
        {
            if(f==x[g].phone)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Status = ");
                puts(x[g].status);
                printf("Bed no = %d\nPhone number = 0%d\nAge = %d",x[g].bedno,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found");
    }
    else if(h==6)
    {
        int f=1;
        printf("Enter Age = ");
        scanf("%d",&f);
        for(int g=0; g<num; g++)
        {
            if(f==x[g].age)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Status = ");
                puts(x[g].status);
                printf("Bed no = %d\nPhone number = 0%d\nAge = %d",x[g].bedno,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else
        printf("\n\nInvalid input\n\n");
}
