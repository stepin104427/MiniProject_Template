#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ad
{
    char name[30];
    char status[30];
    int bedno,phone,age;
} x[200];
struct tests
{
    long total,pos,neg;
}y[1];

int n,i,j=0,a=0,sum=0,g,flag,num,bed_count=200,tot,done,positive,negative,d,p,n;
void read();
void add();
void view();
void search();
void edit();
void del();
void write();
void add_test();
int main()
{
    read();
    int c,i,q,test;
    printf("Simple Hospital Management System\n");
    
    while(c!=9)
    {

        printf("**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. View available beds\n7. View test information\n8. Edit test information\n9. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            system("cls");
            add();
        }
        else if(c==2)//view
        {
            system("cls");
            view();
        }
        else if(c==3)//search
        {
            system("cls");
            search();
        }
        else if(c==4)//edit
        {
            system("cls");
            edit();
        }
        else if(c==5)//delete
        {
            system("cls");
            del();
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
            add_test();
        }
        else if(c==9)
        {
            write();
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

void view()
{
    for(i=0; i<num; i++)
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
void edit()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Status\n3.Age\n4.Bed no\n5.Phone no.\n");
    printf("Option=");
    scanf("%d",&q);//option
    if(q<=5)
    {
        printf("Enter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(x[p].name);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new status=");
                gets(x[p].status);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new Age=");
                scanf("%d",&x[p].age);
            }

            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new bed no=");
                scanf("%d",&x[p].bedno);
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the new Phone no =");
                scanf("%d",&x[p].phone);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}
void search()
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
        for(g=0; g<num; g++)
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
        for(g=0; g<num; g++)
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
        for(g=0; g<num; g++)
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
        for(g=0; g<num; g++)
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
        for(g=0; g<num; g++)
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
void del()
{
    int f,h;
    printf("Enter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Status\n4.Remove age\n5.Remove Bed no\n6.Remove phone number\nOption = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].status,x[f+1].status);
                x[f].age=x[f+1].age;
                x[f].bedno=x[f+1].bedno;
                x[f].phone=x[f+1].phone;
                f++;
            } 
            num--;
            bed_count++;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].status,"Cleared");
        }
        else if(h==4)
        {
            x[f].age=0;
        }                                             
        else if(h==5)
        {
            x[f].bedno=0;
        }
        else if(h==6)
        {
            x[f].phone=0;
        }

    }
    else
        printf("\n\nInvalid Serial number\n");

}
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

    num = fread(x, sizeof(struct ad),200, fp);
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
    fread(y, sizeof(struct tests),1, fptr);
    fclose(fptr);
    
}
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