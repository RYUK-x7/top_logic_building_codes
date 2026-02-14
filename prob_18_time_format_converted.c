/*
18. Write a function to convert time format.
Sample: Convert "14:35" → "02:35 PM" and vice versa
*/

// This code is partially completed using Artifical Intelligence, and the rest is completed by me. I have added comments to explain the code.

#include <stdio.h>

// Convert 24-hour format to 12-hour format
// Input: "14:35", Output: "02:35 PM"
void convert_24_to_12(char time24[])
{
    int hours, minutes;
    // Parse the input time string to extract hours and minutes
    sscanf(time24, "%d:%d", &hours, &minutes);

    if (hours == 0)
    {
        printf("%02d:%02d AM\n", 12, minutes);
    }
    else if (hours < 12)
    {
        printf("%02d:%02d AM\n", hours, minutes);
    }
    else if (hours == 12)
    {
        printf("%02d:%02d PM\n", hours, minutes);
    }
    else
    {
        printf("%02d:%02d PM\n", hours - 12, minutes);
    }
}

// Convert 12-hour format to 24-hour format
// Input: "02:35 PM", Output: "14:35"
void convert_12_to_24(char time12[], char period[])
{
    int hours, minutes;

    sscanf(time12, "%d:%d", &hours, &minutes);

    if (period[0] == 'A' || period[0] == 'a') // AM
    {
        if (hours == 12)
        {
            hours = 0;
        }
    }
    else if (period[0] == 'P' || period[0] == 'p') // PM
    {
        if (hours != 12)
        {
            hours += 12;
        }
    }

    printf("%02d:%02d\n", hours, minutes);
}

int main()
{
    int choice;
    char time[10];
    char period[3];

    printf("Time Format Converter\n");
    printf("1. Convert 24-hour to 12-hour format\n");
    printf("2. Convert 12-hour to 24-hour format\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    getchar(); // consume newline

    if (choice == 1)
    {
        printf("Enter time in 24-hour format (HH:MM): ");
        fgets(time, sizeof(time), stdin);

        // Remove trailing newline
        for (int i = 0; time[i] != '\0'; i++)
        {
            if (time[i] == '\n')
            {
                time[i] = '\0';
                break;
            }
        }

        printf("12-hour format: ");
        convert_24_to_12(time);
    }
    else if (choice == 2)
    {
        printf("Enter time in 12-hour format (HH:MM): ");
        fgets(time, sizeof(time), stdin);

        // Remove trailing newline
        for (int i = 0; time[i] != '\0'; i++)
        {
            if (time[i] == '\n')
            {
                time[i] = '\0';
                break;
            }
        }

        printf("Enter period (AM/PM): ");
        fgets(period, sizeof(period), stdin);

        // Remove trailing newline
        for (int i = 0; period[i] != '\0'; i++)
        {
            if (period[i] == '\n')
            {
                period[i] = '\0';
                break;
            }
        }

        printf("24-hour format: ");
        convert_12_to_24(time, period);
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}