#include <stdio.h>
int main()
{
    int i, n, rem, j = 0;
    int aboveTwenty[2];
    int intZeroToNine[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char zeroToNine[10][20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int intElevenToNineteen[9] = {11, 12, 13, 14, 15, 16, 17, 18, 19};
    char elevenToNineteen[9][20] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    int intTenToHundred[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    char tenToHundred[10][20] = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred"};
    printf("Enter the number to be converted:");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (n == intZeroToNine[i])
        {
            printf("%s", zeroToNine[i]);
        }
        if (n == intTenToHundred[i])
        {
            printf("%s", tenToHundred[i]);
        }
        if (n == intElevenToNineteen[i])
        {
            printf("%s", elevenToNineteen[i]);
        }
    }
    if (n < 100)
    {
        if (n > 20 && n < 100)
        {
            while (n > 0)
            {
                rem = n % 10;
                n = n / 10;
                aboveTwenty[j] = rem;
                j++;
            }
        }
        if (aboveTwenty[1] == 2)
        {
            printf("%s ", tenToHundred[1]);
        }
        else
        {
            if (aboveTwenty[1] == 3)
            {
                printf("%s ", tenToHundred[2]);
            }
            else
            {
                if (aboveTwenty[1] == 4)
                {
                    printf("%s ", tenToHundred[3]);
                }
                else
                {
                    if (aboveTwenty[1] == 5)
                    {
                        printf("%s ", tenToHundred[4]);
                    }
                    else
                    {
                        if (aboveTwenty[1] == 6)
                        {
                            printf("%s ", tenToHundred[5]);
                        }
                        else
                        {
                            if (aboveTwenty[1] == 7)
                            {
                                printf("%s ", tenToHundred[6]);
                            }
                            else
                            {
                                if (aboveTwenty[1] == 8)
                                {
                                    printf("%s ", tenToHundred[7]);
                                }
                                else
                                {
                                    if (aboveTwenty[1] == 9)
                                    {
                                        printf("%s ", tenToHundred[8]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        for (int i = 0; i < 10; i++)
        {
            if (aboveTwenty[0] == intZeroToNine[i])
            {
                printf("%s", zeroToNine[i]);
            }
        }
    }
    return 0;
}