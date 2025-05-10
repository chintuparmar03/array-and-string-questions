#include<iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 4, 5, 63, 8, 7, 5, 4, 7};
    int n = 10;
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  // descending order
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;  // array is already sorted
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
