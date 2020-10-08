#include"del.h"
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