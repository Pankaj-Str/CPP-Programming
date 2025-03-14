#include <iostream>


#define MAX 100  

using namespace std;  

void sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) { // run n-1 times (number of passes)
        for (int j = 0; j < n - i - 1; j++) {  // inner looop - compare adjacent elements and swap them if first element is greater than second
            if (arr[j] > arr[j + 1]) { // swap if first element is greater than second
                temp = arr[j]; // uses temp variable to swap
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {  
 
    
    int arr[MAX], n, i;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nUnsorted array:\n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    sort(arr, n);  

    cout << "\n\nSorted array in ascending order:\n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

  
    return 0; 
}