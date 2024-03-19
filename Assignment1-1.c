#include<stdio.h>


struct Date
{
    int date;
    int month;
    int year;
};
    void initDate(struct Date* ptrDate)
    {
        ptrDate->date=10;
        ptrDate->month=03;
        ptrDate->year=2024;
    }
    void printDateOnConsole(struct Date* ptrDate)
    {
        printf("the Date is - %d / %d / %d \n",ptrDate->date,ptrDate->month,ptrDate->year);
    }
    void acceptDateFromConsole(struct Date* ptrDate)
    {
        printf("Enter the date in DD/MM/YYYY format :- ");
        scanf("%d \n %d \n %d",&ptrDate->date,&ptrDate->month,&ptrDate->year);
    }

    int main()
    {
        struct Date mydate;
        int choice;
        do{
        printf("1. the display the initial date \n2. To enter a date \n3. To display the date\nEnter your choice\n");
        scanf("%d",&choice);


        switch (choice)
        {
        case 0:
            printf("Thank you!\n");
            break;
        case 1:
            initDate(&mydate);
            printDateOnConsole(&mydate);
            break;

        case 2:
            acceptDateFromConsole(&mydate);

            break;
                
        case 3:
            printDateOnConsole(&mydate);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
        }
        while(choice!=0);
    }
