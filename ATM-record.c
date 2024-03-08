#include <stdio.h>
#include<time.h>
int main()
{
    int ammount = 1000, pin = 125;
    int c, d = 1, n, k, e = 2, r = 3;
    int t;

// ========================= time & date ====================================================================
    printf("\n");

   time_t current_time;
    struct tm *timeinfo;

    time(&current_time);
    timeinfo = localtime(&current_time);

 printf("Current date and time: %02d-%02d-%04d %02d:%02d:%02d\n", 
           timeinfo->tm_mday, timeinfo->tm_mon + 1, timeinfo->tm_year + 1900, 
           timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
    current_time += 3600; 
    timeinfo = localtime(&current_time);

    printf("\n");

// ========================= main section =======================================================
    printf("\n WELCOME TO SBI MINI ATM \n");
    printf("\n Please insert your card! \n");
    printf("\n Then enter your pin \n");

    scanf("%d", &c);

    
        if (c == pin)
        {
            printf(" 1) Withdrawal \n 2)Pin change\n 3)Blance check \n 4)Exit.\n");
        }
    
        if (c != pin)
        {
            printf("\n!!You enter worng pin try again!!\n");
        }
    
    for (int o = 1; o <= 2; o++)
    {
        scanf("%d", &n);
        if (d == n)
        {
            printf("\n -:Enter your amount:- \n");
            scanf("%d", &k);
            if(k > 1 && k <= 1000){
            ammount = ammount - k;
            printf("Collect you cash \n Your total blance is:- %d \n \n After two transaction connection will faild \t", ammount);
            }
        }

        if (e == n)
        {
            printf("\n -:Enter your old pin and press enter:- \n");
            printf("!NOTE!- If you enter wrong pin tha transaction will automatic exit\n");
            scanf("%d", &k);
            if (pin == k)
            {

                printf("enter your new pin:- \n");
                scanf("%d", &k);

                printf("your new pin is:-\n%d", k);
            }
        }

        else if (r == n)
        {
            printf("Your blance is:- %d ", ammount);
        }
             
    }
    return 0;
}