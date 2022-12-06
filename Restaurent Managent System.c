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
