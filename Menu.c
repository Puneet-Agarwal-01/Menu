#include<stdio.h>
int main()
{
    int n;
    printf("select any no. in b/w 1-5:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            printf("\n\nFood item - French Fries");
            printf("\nPrice - Rs 99");
            break;
        }
        case 2:
        {
                printf("\n\nFood item - Burger");
                printf("\nPrice - Rs 129");
                break;
        }
        case 3:
        {
                printf("\n\nFood item - Sandwich");
                printf("\nPrice - Rs 149");
                break;
        }
        case 4:
        {
                printf("\n\nFood item - Pasta");
                printf("\nPrice - Rs 179");
                break;
        }
        case 5:
        {
                printf("\n\nFood item - Pizza");
                printf("\nPrice - Rs 239");
                break;
        }
        default:
                printf("Out of menu");
    }
    return 0;
}
