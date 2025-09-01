#include<stdio.h>
#include<limits.h>

#define STUDENT 5
#define GRADE 5

int main()
{
    int arr[STUDENT][GRADE];
    int total = 0;
    double average_score = 0;
    int high_score = INT_MIN;
    int low_score = INT_MAX;
    int low = INT_MAX;
    int high = INT_MIN;

    for(int i = 0; i < STUDENT; i++){
        printf("Enter %d grades for student %d : ", GRADE, i+1);
        for(int j = 0; j < GRADE; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i < STUDENT; i++){
        for(int j = 0; j < GRADE; j++){
            if(arr[i][j] > high_score)
                high_score = arr[i][j];
            if(arr[i][j] < low_score)
                low_score = arr[i][j];
            if(arr[i][j] > high)
                high = arr[i][j];
            if(arr[i][j] < low)
                low = arr[i][j];

            average_score += arr[i][j];
            total += arr[i][j];

        }
        printf("****Student %d****\nTotal score %d\nAverage score %g\nLow score : %d\nHigh score : %d\n\n\n", i + 1, total, (float)total/GRADE, low, high);
        total = 0;
        low = INT_MAX;
        high = INT_MIN;
    }

    printf("The total average : %g\n", average_score/(GRADE * STUDENT));
    printf("The hight score : %d\n", high_score);
    printf("The low score : %d\n", low_score);

    return 0;
}
