#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
    return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}

int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int *mm, int *dd, int *yy, int days_left_to_add)
{
    int days_left_in_month;
    while (days_left_to_add > 0)
    {
        days_left_in_month = days_in_month[*mm] - *dd;
        if (*mm == 2 && is_leap_year(*yy))
        {
            days_left_in_month += 1;
        }

        if (days_left_to_add > days_left_in_month)
        {                                        
            days_left_to_add -= days_left_in_month + 1;
            *dd = 1;                                    
            if (*mm == 12)
            {                  
                *mm = 1;       
                *yy = *yy + 1; 
            }
            else
            {
                *mm = *mm + 1;
            }
        }
        else
        {                                 
            *dd = *dd + days_left_to_add;
            days_left_to_add = 0;
        }
    }
}

int main()
{
    int mm;
    int dd;
    int yy;
    int days_left_to_add;
    printf("Please enter a date between the years 1800 and 10000 in the format mm dd yy and provide the number of days to add to this date:\n");
    scanf("%d %d %d %d", &mm, &dd, &yy, &days_left_to_add);
    add_days_to_date(&mm, &dd, &yy, days_left_to_add);
    printf("%d/%d/%d", mm, dd, yy);
}