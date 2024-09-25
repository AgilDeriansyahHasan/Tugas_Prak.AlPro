#include <iostream>

using namespace std;

int main() {
    int n, i;
	int arr[n];

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    for (i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Array sebelum diurutkan: " << endl ;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key, j, k;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;

        cout << "Langkah " << i << ": ";
        for (k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    cout << "Array setelah diurutkan secara ascending: " << endl ;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
