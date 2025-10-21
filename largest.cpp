#include <iostream>
using namespace std;

int largestElement(int a[], int n)
{
    int largest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    return largest;
}

int main()
{
    int a[] = {3, 2, 9, 10, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int large = largestElement(a, n);
    cout << large << endl;

    return 0;
}