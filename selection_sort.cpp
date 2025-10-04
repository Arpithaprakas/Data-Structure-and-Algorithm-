#include <iostream>
using namespace std;
int main() {
    int arr[] = {3, 1, 4};
    int n = 3;
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    for (int k = 0; k < n; k++) cout << arr[k] << " ";
}
