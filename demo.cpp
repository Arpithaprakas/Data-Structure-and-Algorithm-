
// Array pointer concept in 1D

// #include<iostream>
// using namespace std;

// int main(){
    
//     int arr[5] = {1,2,3,4,5};
//     int *p = arr;
    
//     int first = *p;
//     int second = *(p+1);
    
    
//     cout<< first<<endl;
//     cout << second<<endl;
//     return 0;
// }

// Array pointer concept in 2D

#include<iostream>
using namespace std;

int main(){
    
    int arr[2][2] = {{1,2},{3,4}};
    int (*p)[2] = arr;
    
    int first = *(*(p)+0);
    int four = *(*(p)+3);
    
    cout<< first<<endl;
    cout<< four<<endl;
    return 0;
}