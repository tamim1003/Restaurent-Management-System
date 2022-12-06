#include <stdio.h>
#include <windows.h>

int token = 0,tokens[50],payment_counter=0;




int main_page()
{
    int i;
    system("cls");
    system("color b0");

    printf("\n\n\n\n\n\t\t       <^>\n\t\t         `'*'  Welcome to Cafe SHOHAN \n\t\t\t\t\t\t\t`'*'<^>\n\n");
    printf("\n\n\n\n\t\t\t    food Good.All good. (^_^)\n\n                       ");
    for (i=0;i<36;i++)
     {
        printf("*");
     }
    printf("\n");
    printf("        tasty          *                                  *\n");
    printf("                       *    Select any of them -          *\n");
    printf("        and            *                                  *\n");
    printf("                       *    1. New Order.                 *\n");
    printf("       hygenic         *                                  *\n");
    printf("                       *    2. Bill Payment.              *\n");
    printf("      foods at         *                                  *\n");
    printf("                       *    3. Exit.                      *");
    printf("\n");
    printf("      low cost..       *                                  *\n");
    printf("                       *                                  *\n");
    printf("     GRAB NOW !!       ");
    
     for (i=0;i<36;i++)
     {
        printf("*");
     }
    printf("\n\n\n\n                         Enter Your Choice: ");
    int n;
    scanf("%d",&n);
    return n;
}





int menu_order()
{

    int arID[10],decision,arqty[10],Bill[10],counter=0;
    work:
    system("cls");
    system("color F0");
    printf("\n\t\t\t\tFOOD MENU\n\t\t\t\t---------\n");
    printf("\n\tBUNS :\n\n");
    printf("\t1. Beef Burger ...................... 120/=\t  \n");
    printf("\t2. Hot Dog ..........................  40/=\n");
    printf("\t3. Donuts ...........................  70/=\t \n");
    printf("\t4. French Fries (FnF Pack) ..........  90/=\t \n");
    printf("\t\t\t\t\t\t\t \n\n\tCHICKEN :\n\n");
    printf("\t5. Chicken Breast ...................  90/=\n");
    printf("\t6. Chicken Wings ....................  65/=\n");
    printf("\n\tDESSERTS :\n\t\t\t\t\t\t\t \n");
    printf("\t7. Ice Cream ........................  65/=\t  \n");
    printf("\t8. Sweets ........................... 230/=\t \n");
    printf("\n\tDRINKS :\n\n");
    printf("\t9.  Coca-Cola ........................ 25/=\n");
    printf("\t10. Mirinda   ........................ 25/=\n");
    printf("\n\n\tOrder your dish: (Enter 0 to finish order)\n");
    for(;;)
        {
        counter++;
        printf("\t Enter Food ID: ");
        scanf("%d",&arID[counter-1]);
        if(arID[counter-1]==0)
        {
            break;
        }
        printf("\t Enter Quantity: ");
        scanf("%d",&arqty[counter-1]);

    }
    system("cls");
    system("color F0");
   printf("\n\n\n\n\n\n\n\n\n\n\t\tThanks for your order. We are getting ready the dishes.\n\t\tUntil then, have some selfies with friends. Enjoy!\n\n\n\n\n\t\t\t  <Enter 1 to check your bill>\n\t\t\tEnter your choice: ");

    scanf("%d",&decision);
    printf("\n\n\n\n\n\n\n\n");
