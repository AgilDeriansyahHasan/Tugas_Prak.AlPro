#include <iostream>
using namespace std;

int main() {
    int n,i,j,k;
    int arr[n];
	int minIndex ;
	int temp ;
	
    cout << "Masukkan elemen-elemen array:"; cin >> n ;
    for (i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Array sebelum diurutkan: " << endl ;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;

        cout << "Langkah " << i + 1 << ": " <<  endl ; 
        for (k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
    }
	
    cout << "Array setelah diurutkan secara ascending: " << endl ;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
