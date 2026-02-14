/*
6. Write a program to find the mean, mode, and median of a list of values.
*/
#include <stdio.h>

float mean(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++) // mean = sum of all elements / number of elements
    {
        sum += arr[i];
    }
    return (float)sum / size;
}

float median(int arr[], int size)
{
    // using for loop to sort the array in ascending order
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // now using median's formula for even and odd number of elements in the array
    if (size % 2 == 0)
    {
        return (float)(arr[size / 2 - 1] + arr[size / 2]) / 2;
        /*

        #In array index starts from 0 so we are using 1 less value in the mathematical formula

        #In the part size/2 - 1, it might give a float, but since we are using it as an index, it will be automatically converted to an integer by truncating the decimal part. So, it will work correctly as intended.

        #Example: If size is 6, then size/2 is 3, and size/2 - 1 is 2. So, we will be accessing arr[2] and arr[3] for the median calculation, which are the correct indices for the middle two elements in an even-sized array.

        */
    }
    else
    {
        return (float)arr[size / 2];

        /*
        #In array index starts from 0 so we are using 1 less value in the mathematical formula
        #In the part size/2, it might give a float, but since we are using it as an index, it will be automatically converted to an integer by truncating the decimal part. So, it will work correctly as intended.
        #Example: If size is 5, then size/2 is 2.5, but when we use it as an index, it will be truncated to 2. So, we will be accessing arr[2] for the median calculation, which is the correct index for the middle element in an odd-sized array.
        */
    }
}

float mode(int arr[], int size)
{
    int max = 0;
    int mode = arr[0];
    /*
    #The for loop works like this: For each element in the array, it counts how many times that element appears in the entire array. It does this by comparing the current element (arr[i]) with every other element (arr[j]) in the array. If a match is found, it increments the count variable. After counting the occurrences of the current element, it checks if the count is greater than the maximum count. Then it updates the max variable to the new maximum count and sets the mode variable to the current element (arr[i]) that has the highest frequency so far. This way, by the end of the loop, the mode variable will hold the value that appears most frequently in the array.
    */
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main()
{
    int n[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 10};
    int size = sizeof(n) / sizeof(n[0]); // calculating the size of the array

    do
    {
        // using menu for intuition to give it a feel like a software, and also to make it more user friendly
        printf("Sample date set: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d, ", n[i]);
        }
        printf("\n");
        printf("Sample size: %d\n", size);

        printf("What do you want to do?\n"
               "1. Calculate mean\n"
               "2. Calculate median\n"
               "3. Calculate mode\n"
               "4. All\n"
               "5. Exit\n\n"
               "Enter your choice: ");

        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Mean: %.2f\n", mean(n, size));
            break;
        case 2:
            printf("Median: %.2f\n", median(n, size));
            break;
        case 3:
            printf("Mode: %.2f\n", mode(n, size));
            break;
        case 4:
            printf("Mean: %.2f\nMedian: %.2f\nMode: %.2f\n", mean(n, size), median(n, size), mode(n, size));
            break;
        case 5:
            printf("Thanks for using my homemade software XD");
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    } while (1);
    return 0;
}