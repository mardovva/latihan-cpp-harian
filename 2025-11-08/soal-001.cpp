/*
Nama        :   Khaled Meshaal Ahmadinejad Mujaddid Thariq Mardova Fadhilah
NPM         :   140810250056
Kelas       :   C
Deskripsi   :   Latihan Insertion sort Ascending
*/

#include <iostream>
using namespace std;

void insertionSortAscending(int arr[], int n){
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (arr[j] > arr[i]){
            
        }

        for (int j = i - 1; j < n; j--){
            if (arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    cin >> arr[i];

    insertionSortAscending(arr, n);

    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;

    return 0;
}