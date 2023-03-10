#include <stdio.h>
int main()
{
    int dig1;
    int dig2;
    char opera;

    printf("I am your native calculator!\n");
    printf("I can only add one digit integars. Weird right?\n\n");
    printf("Please don't add space while using me.\n\n");

    dig1 = getchar();
    scanf("%c", &opera);
    dig2 = getchar();

    int ans1 = dig1 - 48;
    int ans2 = dig2 - 48;


    if (opera == '+')
    {
        if(((dig1 >= 'A' && dig1 <= 'Z') || (dig1 >= 'a' && dig1 <= 'z')) || ((dig2 >= 'A' && dig2 <= 'Z') || (dig2 >= 'a' && dig2 <= 'z')))
        {
            printf("\nYou can't add that!");
        }
        else
            printf("\n%c + %c = %d", dig1, dig2, ans1 + ans2);
    }
    else if (opera == '-')
    {
        if(((dig1 >= 'A' && dig1 <= 'Z') || (dig1 >= 'a' && dig1 <= 'z')) || ((dig2 >= 'A' && dig2 <= 'Z') || (dig2 >= 'a' && dig2 <= 'z')))
        {
            printf("\nYou can't subtract that!");
        }
        else
            printf("\n%c - %c = %d", dig1, dig2, ans1 - ans2);
    }
    else if (opera == '*')
    {
        if(((dig1 >= 'A' && dig1 <= 'Z') || (dig1 >= 'a' && dig1 <= 'z')) || ((dig2 >= 'A' && dig2 <= 'Z') || (dig2 >= 'a' && dig2 <= 'z')))
        {
            printf("\nYou can't multiply that!");
        }
        else
            printf("\n%c x %c = %d", dig1, dig2, ans1 * ans2);
    }
    else if (opera == '/')
    {
        if(((dig1 >= 'A' && dig1 <= 'Z') || (dig1 >= 'a' && dig1 <= 'z')) || ((dig2 >= 'A' && dig2 <= 'Z') || (dig2 >= 'a' && dig2 <= 'z')))
        {
            printf("\nYou can't divide that!");
        }
        else
            printf("\n%c / %c = %d", dig1, dig2, ans1/ans2);
    }
    else
    printf("\nInvalid Operator");


    return 0;

}
