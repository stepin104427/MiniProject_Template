#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*!
 * @struct      ad
 * @abstract    Contains all information fields of patient.
 * @discussion  All properties of patients (name, age, ...)
 *              are stored in this structure.
 * @field       name        Name of patient.
 * @field       status      Status(Positive, recovered, deceased).
 * @field       bedno       Bed number of the patient.
 * @field       phone       Phone number of patient
 * @field       age         Age of patient
 * @var         x
 * @abstract    Array variable of type struct ad
 * @discussion  Array variable that stores information of
 *              a maximum of 200 patients at any given time.
*/
struct ad
{
    char name[30];
    char status[30];
    int bedno,phone,age;
} x[200];
/*!
 * @struct      tests
 * @abstract    Contains test reports of a single day.
 * @discussion  All details of test reports (total, positive, ...)
 *              are stored in this structure.
 * @field       total     Total tests done in a single day.
 * @field       pos       Number of test results positive.
 * @field       neg       Number of test results negative.
 * 
 * @var         y
 * @abstract    Array variable of type struct tests
 * @discussion  Array variable that stores information about
 *              test results on a single day.
*/
struct tests
{
    long total,pos,neg;
}y[1];
/*!
 * @var         bed_count
 * @abstract    Current beds available
 * @discussion  Variable that stores the number of beds
 *              available at any given time.
 * @var         num
 * @abstract    Number of records in the database
 * @discussion  Variable to store number of records present
 *              in the database.
*/

int bed_count=200,num;
/*!
 * @function    read
 * @abstract    Read from the patient file and statistics file.
 * @discussion  This function uses 2 pointers, reads the records of patients
 *              from the patient file and test reports from 
 *              statistics file.
 * @result      Pointers to the patient file and statistics file.
*/
void read();
/*!
 * @function    add
 * @abstract    Add information of new patient in the database.
 * @discussion  This function takes input from the user, accepts
 *              details of new patient and adds it to the database. 
 * @result      Record of new patient added to database.
*/
void add();
/*!
 * @function    view
 * @abstract    View the entire database.
 * @discussion  This function shows all the records of patients 
 *              stored in the database. 
 * @result      Entire database is shown.
*/
void view();
/*!
 * @function    search
 * @abstract    Searches information of patient in the database.
 * @discussion  This function takes a request from the user, searches
 *              details of patient requested by the user and 
 *              shows it from the database. 
 * @result      Record of patient requested by user shown from database.
*/
void search();
/*!
 * @function    edit
 * @abstract    Edit information of patient in the database.
 * @discussion  This function takes a request from the user, searches
 *              details of patient requested by the user and 
 *              edits it in the database. 
 * @result      Record of patient edited in database.
*/
void edit();
/*!
 * @function    del
 * @abstract    Delete information of patient from the database.
 * @discussion  This function takes input from the user, searches
 *              details of patient requested by the user and 
 *              deletes specific information in the database. 
 * @result      Record of patient deleted in database.
*/
void del();
/*!
 * @function    write
 * @abstract    Write in the patient file and statistics file.
 * @discussion  This function uses 2 pointers, writes the records of patients
 *              in the patient file and test reports in 
 *              statistics file.
 * @result      Information written in the patient file and statistics file.
*/
void write();
/*!
 * @function    add_test
 * @abstract    Update test reports in statistics file.
 * @discussion  This function takes input from the user and
 *              updates information about the test reports in 
 *              statistics file daily. 
 * @result      Test results updated in statistics file.
*/
void add_test();
int main()
{
    read();
    /*!
    * @var         c
    * @abstract    Choice selected from given options.
    * @discussion  Variable to store choice selected by user to
    *              take action from the given list.
    */
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
    /*!
    * @var         n
    * @abstract    User input to add the number of records to database.
    * @discussion  Variable to store number of records to be added to
    *              database given as input by user.
    * @var         sum
    * @abstract    Store sum of n and num.
    * @discussion  Variable to store total number of records present in the database.
    */
    int n,sum;
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum=n+num;
    bed_count=bed_count-n;

    /*!
    * @var         i
    * @abstract    Loop variable from num to sum.
    * @discussion  Variable to enter details of patient as input from user
    *              for n number of times.
    * @var         j
    * @abstract    Counter variable.
    * @discussion  Variable to count number of records entered in database.
    */
    for(int i=num,j=0; i<sum; i++)
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
        num++;
    }
}

void view()
{
    /*!
    * @var         i
    * @abstract    Loop variable from 0 to num.
    * @discussion  Variable to view details of all patients in the
    *              database.
    */
    for(int i=0; i<num; i++)
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
     /*!
    * @var         q
    * @abstract    Choice selected from given options.
    * @discussion  Variable to store choice selected by user to
    *              edit specific details of a patient.
    * @var         p
    * @abstract    Serial number of patient.
    * @discussion  Stores the serial number of the patient
    *              whose details are to be edited. 
    */
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
     /*!
    * @var         s
    * @abstract    Serial number of patient.
    * @discussion  Variable to store serial number of patient
    *              whose details are to be searched.
    * @var         h
    * @abstract    Choice selected from given list
    * @discussion  Variable to store the field by which the patient
    *              details are to be searched.
    * @var         u
    * @abstract    Array variable to accept details of patient
    * @discussion  Variable to take input from user about the details
    *              of the patient record to be searched.
    */
    int s,h;
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
        /*!
        * @var         f
        * @abstract    Temporary variable.
        * @discussion  Variable to check if details of patient to be
        *              searched by name are found or not.
        */
        int f=1;
        fflush(stdin);
        printf("Enter your name=");
        gets(u);
        fflush(stdin);
         /*!
        * @var         g
        * @abstract    Loop variable.
        * @discussion  Variable to repeat a loop for num
        *              number of times.
        */
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
        /*!
        * @var         f
        * @abstract    Temporary variable.
        * @discussion  Variable to check if details of patient to be
        *              searched by status are found or not.
        */
        int f=1;
        fflush(stdin);
        printf("Enter Status = ");
        gets(u);
        fflush(stdin);
         /*!
        * @var         g
        * @abstract    Loop variable.
        * @discussion  Variable to repeat a loop for num
        *              number of times.
        */
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
        /*!
        * @var         f
        * @abstract    Temporary variable.
        * @discussion  Variable to check if details of patient to be
        *              searched by bed number are found or not.
        */
        int f=1;
        printf("Enter Bed number = ");
        scanf("%d",&f);
         /*!
        * @var         g
        * @abstract    Loop variable.
        * @discussion  Variable to repeat a loop for num
        *              number of times.
        */
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
        /*!
        * @var         f
        * @abstract    Temporary variable.
        * @discussion  Variable to check if details of patient to be
        *              searched by phone number are found or not.
        */
        int f=1;
        printf("Enter Phone number = ");
        scanf("%d",&f);
         /*!
        * @var         g
        * @abstract    Loop variable.
        * @discussion  Variable to repeat a loop for num
        *              number of times.
        */
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
        /*!
        * @var         f
        * @abstract    Temporary variable.
        * @discussion  Variable to check if details of patient to be
        *              searched by age are found or not.
        */
        int f=1;
        printf("Enter Age = ");
        scanf("%d",&f);
         /*!
        * @var         g
        * @abstract    Loop variable.
        * @discussion  Variable to repeat a loop for num
        *              number of times.
        */
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
void del()
{
    /*!
        * @var         f
        * @abstract    Serial number of patient.
        * @discussion  Variable to store serial number of patient
        *              to be deleted given as input bu user.
        * @var         h
        * @abstract    Choice selected from given list
        * @discussion  Variable to store choice of details to deleted
        *              of a specific patient.
        */
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
    /*!
        * @var         fp
        * @abstract    File pointer variable.
        * @discussion  Pointer variable to read information of
        *              patients from the patient file.
        * @var         fptr
        * @abstract    File pointer variable.
        * @discussion  Pointer variable to read test records of a 
        *              single day from the statistics file.
        */
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
    /*!
        * @var         fp
        * @abstract    File pointer variable.
        * @discussion  Pointer variable to write information of
        *              patients into the patient file.
        * @var         fptr
        * @abstract    File pointer variable.
        * @discussion  Pointer variable to write test records of a 
        *              single day into the statistics file.
        */
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
