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
    
     counter--;

    if(decision==1)
    {
        Bill_show(arID,arqty,counter);
    }

    else if(decision==2)
    {
       goto work;
    }

    else if(decision==3)
    {
        main();
    }

}
void Bill_show(int arID[],int arqty[],int counter)
{

    int n;
    system("cls");
    system("color B0");

    int i,sum=0;
    int costs[10]={120,40,70,90,90,65,65,230,25,25};
    char items[10][16]={"Beef Burger","Hot Dog","Donuts","French Fries","Chicken Breast","Chicken Wings","Ice Cream","Sweets","Coca-Cola","Mirinda"};
    printf("\n\nYour Bill:\n\n\n\t\tItem(s)\t\t     Quantity\t\t    Cost\n\n\n\n");

    for(i=0;i<counter;i++)
    {
        printf("\t%2d. %-16s ________\t%-5d piece(s) ____ %7d\n",i+1,items[arID[i]-1],arqty[i],arqty[i]*costs[arID[i]-1]);
        sum=sum+(costs[arID[i]-1]*arqty[i]);
    }

    printf("\n\n\n\n\t\t\t\t\t\t\t  Total = %d\n\n\n\n",sum);
    token ++;
    tokens[token]=sum;
    printf("\tYour token number is %d. Use this token while paying the bill.\n\n\n\n\n\t\t\t<enter (1) to give another order>\n\n\t\t\t<enter (2) to go to the main menu>\n\n\t\n\t\t\tEnter your choice: ",token);
    scanf("%d",&n);
    printf("\n\n\n");
    if(n==1)
    {
        menu_order();
    }
    else if(n==2)
    {
        main();

    }

}
void Bill_Payment()
{

    int k,i,cash,changer,n;
    redo:
    payment_counter++;
    system("cls");
    system("color 3F");
    printf("\n\n\n\t\t\tEnter your token number: ");
    scanf("%d",&k);
    printf("\t\t\tYour Total Bill is = %d",tokens[k]);
    work:
            printf("\n\t\t\tPay your bill: ");
            scanf("%d",&cash);
    changer = cash-tokens[k];
    if(changer == 0)
    {
        printf("\n\t\tThanks for your payment. Have a great day!\n");
    }

