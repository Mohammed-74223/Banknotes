#include <stdio.h>

int main() {
    int egy;
    float result;
    printf("Enter the Egyptian pounds you need to change:");
    scanf("%d", &egy);
    printf("[1] To Dollars\n");
    printf("[2] To Euro\n");
    printf("[3] To SAR\n");
    printf("[4] To Streling\n");
    int process;
    printf("Enter the number of process you need: ");
    scanf("%d", &process);
    switch (process){
        case 1:
            result = egy/15.75;
            printf("You now have %.2f Dollars\n", result);
            printf("\n");
            break;
        case 2:
            result = egy/18.3;
            printf("You now have %.2f Euro\n", result);
            printf("\n");
            break;
        case 3:
            result = egy/4.19;
            printf("You now have %.2f SAR\n", result);
            printf("\n");
            break;
        case 4:
            result = egy/20.4;
            printf("You now have %.2f Streling Pound\n", result);
            printf("\n");
            break;
        default:
            printf("Valid Input");
            printf("\n");
            return main();
    }
    return main();
}

