#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"struct.h"
#include"add_test.h"
#include"add.h" 
#include"view.h"
#include"edit.h"
#include"del.h"
#include"read.h"
#include"search.h"
#include"write.h"

int main()
{
    //int bed_count=200,num;
    read;
    int c;
    printf("Simple Hospital Management System\n");
    
    while(c!=9)
    {

        printf("**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. View available beds\n7. View test information\n8. Edit test information\n9. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            add;
            
        }
        else if(c==2)//view
        {
            system("cls");
            view;
        }
        else if(c==3)//search
        {
            system("cls");
            search;
        }
        else if(c==4)//edit
        {
            system("cls");
            edit;
        }
        else if(c==5)//delete
        {
            system("cls");
            del;
        }
        else if(c==6)
        {
            printf("Total number of beds = 200\n");
            printf("Number of beds available = %d\n",bed_count);
        }
        else if(c==7)
        {
            printf("\n");
            printf("*Total tests done for today*");
            printf("\n");
            printf("Total number of tests done = %d\n",y[0].total);
            printf("Number of test results positive = %d\n",y[0].pos);
            printf("Number of test results negative = %d\n",y[0].neg);
            printf("\n");
        }
        else if(c==8)
        {
            system("cls");
            add_test;
        }
        else if(c==9)
        {
            write;
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}







