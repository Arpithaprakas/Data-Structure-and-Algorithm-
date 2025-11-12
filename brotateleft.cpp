// #include <iostream>
// using namespace std;

// void solve(int arr[], int n, int d)
// {
//     d = d % n;
//     //int temp[]; // store first d elements

//     // Step 1: copy first d elements into temp
//     for (int i = 0; i < d; i++)
//     {
//         //temp[i] = arr[i];
//     }

//     // Step 2: shift remaining elements to the left
//     for (int i = 0; i < n - d; i++)
//     {
//         arr[i] = arr[i + d];
//     }

//     // Step 3: put temp elements at the end
//     for (int i = n - d; i < n; i++)
//     {
//         arr[i] = temp[i - (n - d)];
//     }
// }

// int main()
// {
//     int n = 7;
//     int d = 3;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};

//     solve(arr, n, d);

//     cout << "Rotated array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
