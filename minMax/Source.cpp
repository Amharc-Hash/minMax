#include<stdio.h>
void print(double, double, double);

int main()
{
    int i, j, k,x=0;
    double num[10];
    double max{}, min, sum, avg;

    for (i = 0; i < 10; i++)
    {
        scanf_s("%lf", &num[i]);
        if (num[i] < 0)
        {
            x = 1;
            break;
        }
    }

    min = num[0];
    if (x==0)
    {
        for (j = 0; j < 10; j++)
        {
            if (min > num[j] && min >= 0 && max >= 0)
            {
                min = num[j];
            }
            else if (max < num[j] && min >= 0 && max >= 0)
            {
                max = num[j];
            }
        }

        sum = 0;
        for (k = 0; k < 10; k++)
        {
            sum += num[k];
        }
        print(min, max, sum);
    }
    else
    {
        printf("Undefined");
    }
    
    return 0;
}

void print(double min, double max, double sum)
{
    printf("MAX: %.2lf\n", max);
    printf("MIN: %.2lf\n", min);
    printf("SUM: %.2lf\n", sum);
    printf("AVG: %.2lf", sum / 10.00);
}
