#include<stdio.h>

struct currddmmyy
{
    int cdate;
    int cmonth;
    int cyear;
} current;

struct dob
{
    int bdate;
    int bmonth;
    int byear;
} birth;

void age_calc(struct currddmmyy current,struct dob birth)
{

int year,days,months;

year = current.cyear - birth.byear;


if(birth.bmonth>current.cmonth)
{
    year--;
    
    months=12+current.cmonth-birth.bmonth;

    if(birth.bmonth>current.cmonth)
    {   

        if(current.cmonth==1||current.cmonth==3||current.cmonth==5||current.cmonth==07||current.cmonth==8||current.cmonth==10||current.cmonth==12)
        days=31+current.cdate-birth.bdate;

        if(current.cmonth==2)
        {
            if((current.cyear%4==0)&&(current.cyear%100!=0)||(current.cyear%400==0))
            days=29+current.cdate-birth.bdate;
            else
            days=28+current.cdate-birth.bdate;
        }
        else
        days=30+current.cdate-birth.bdate;
    }
    
    
}

else
{
    months=current.cmonth-birth.bmonth;

    if(birth.bdate>current.cdate)
    {
        if(current.cmonth==1||current.cmonth==3||current.cmonth==5||current.cmonth==07||current.cmonth==8||current.cmonth==10||current.cmonth==12)
        days=31+current.cdate-birth.bdate;
        
        if(current.cmonth==2)
        {
            if((current.cyear%4==0)&&(current.cyear%100!=0)||(current.cyear%400==0))
            days=29+current.cdate-birth.bdate;
            else
            days=28+current.cdate-birth.bdate;
        }
    else
    days=30+current.cdate-birth.bdate;
    }
    else
    {
        days=current.cdate-birth.bdate;
    }
}

printf("\n age is %d years %d months %d days.",year,months,days);
}

int main()
{
    TOP:
    printf("Enter Today's DATE :");
    scanf("%d",&current.cdate);
    printf("\nEnter current MONTH :");
    scanf("%d",&current.cmonth);
    printf("\nEnter current YEAR :");
    scanf("%d",&current.cyear);

    printf("\nEnter your DOB's DATE :");
    scanf("%d",&birth.bdate);
    printf("\nEnter your DOB's MONTH :");
    scanf("%d",&birth.bmonth);
    printf("\nEnter your DOB's YEAR :");
    scanf("%d",&birth.byear);

    if(current.cdate<=31 && current.cmonth<=12 && birth.bdate<=31 && birth.bmonth<=12)
    {
        if(current.cdate>=1 && current.cmonth>=1 && birth.bdate>=1 && birth.bmonth>=1)
        age_calc(current,birth);
    }
    else
    {
        printf("\ninvalid data \nAgain;\n");
        goto TOP;
    }

    return 0;
}
