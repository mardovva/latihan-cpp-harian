/*
Nama        :   Khaled Meshaal Ahmadinejad Mujaddid Thariq Mardova Fadhilah
NPM         :   140810250056
Kelas       :   C
Deskripsi   :   Latihan bubble sort
*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for ( int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    cin >> arr[i];

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;

    return 0;
}