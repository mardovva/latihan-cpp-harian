#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua bagian array yang sudah diurutkan
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // ukuran bagian kiri
    int n2 = right - mid;     // ukuran bagian kanan

    // Buat array sementara
    int L[n1], R[n2];

    // Salin data ke array sementara L[] dan R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Indeks awal untuk L, R, dan array utama
    int i = 0, j = 0, k = left;

    // Gabungkan kembali dua bagian array
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {      // urut dari kecil ke besar
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Salin sisa elemen di L[], kalau masih ada
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Salin sisa elemen di R[], kalau masih ada
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi utama untuk merge sort (rekursi)
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // cari titik tengah

        mergeSort(arr, left, mid);       // urutkan bagian kiri
        mergeSort(arr, mid + 1, right);  // urutkan bagian kanan

        merge(arr, left, mid, right);    // gabungkan hasilnya
    }
}

int main() {
    int n;
    cin >> n;             // input jumlah data
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];    // input elemen-elemen array

    mergeSort(arr, 0, n - 1); // panggil fungsi merge sort, arr paling kiri dan paling kanan

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";  // tampilkan hasil urutan
    cout << endl;

    return 0;
}
