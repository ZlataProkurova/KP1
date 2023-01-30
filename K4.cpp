#include <iostream>
using namespace std;


int K4(int arr[], int n)
{
    int max_so_far = 0;


    int max_end = 0;

   
    for (int i = 0; i < n; i++)
    {
        
        max_end = max_end + arr[i];

       
        max_end= max(max_end, 0);

        
        max_so_far = max(max_so_far, max_end);
    }

    return max_so_far;
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Max sum smegnoo podmassiva  " <<
        K4(arr, n);

    return 0;
}