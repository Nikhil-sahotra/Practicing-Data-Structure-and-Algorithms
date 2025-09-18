#include <iostream>
#include <climits>
using namespace std;
int Maxarray(int *arr, int n)
{
    int totalsum = INT_MIN;
    int sum = 0;
    for (int start = 0; start < n; start++)
    {

        sum += arr[start];
        totalsum = max(totalsum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return totalsum;
}
int main()
{
    int arr[] = {-1, 4, -5, 8, 1};
    int n = sizeof(arr) / sizeof(int);
    cout << Maxarray(arr, n) << endl;
    return 0;
}