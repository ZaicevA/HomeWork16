#include <iostream>
#include <time.h>

int main()
{
    const int n = 10;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    time_t myTime = time(NULL);
    tm myTm;
    localtime_s(&myTm, &myTime);
    auto day = myTm.tm_mday;
    auto stringNumber = day % n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[stringNumber][i];
    }
    std::cout << "String number is: " << stringNumber << ", sum is: " << sum;
}