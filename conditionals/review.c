#include <stdio.h>

int main()
{

    float earthWeight;
    printf("Enter Earth Weight: ");
    scanf("%f", &earthWeight);

    int planetNumber;
    printf("Enter planet number: ");
    scanf("%d", &planetNumber);

    switch (planetNumber)
    {
    case 1:
        printf("Weight in Mercury is %.2f", earthWeight * 0.38);
        break;
    case 2:
        printf("Weight in Venus is %.2f", earthWeight * 0.91);
        break;
    case 3:
        printf("Weight in Mars is %.2f", earthWeight * 0.38);
        break;
    case 4:
        printf("Weight in Jupiter is %.2f", earthWeight * 2.34);
        break;
    case 5:
        printf("Weight in Saturn is %.2f", earthWeight * 1.06);
        break;
    case 6:
        printf("Weight in Uranus is %.2f", earthWeight * 0.92);
        break;
    case 7:
        printf("Weight in Neptune is %.2f", earthWeight * 1.19);
        break;
    }

    return 0;
}