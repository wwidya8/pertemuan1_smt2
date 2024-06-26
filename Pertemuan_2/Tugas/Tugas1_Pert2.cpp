#include <iostream>
#include <algorithm>
using namespace std;

int partition(int ar[], int low, int high) {
    int pivot = ar[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (ar[j] > pivot) {
            i++;
            swap(ar[i], ar[j]);
        }
    }
    swap(ar[i + 1], ar[high]);
    return i + 1;
}

void qsort(int rr[], int low, int high) {
    if (low < high) {
        int pivot = partition(rr, low, high);

        cout << "[ ";
        for (int i = 0; i < 10; i++) {
            cout << rr[i] << " ";
        }
        cout << " ]";
        cout << endl;

        qsort(rr, low, pivot - 1);
        qsort(rr, pivot + 1, high);
    }
}

int main() {
    int ar[10];
    
    cout << "masukkan 10 data: [ ";
    for (int i = 0; i < 10; i++) {
        cin >> ar[i];
    }
    cout << "]" << endl;
    
    system("cls");
    
    cout << "Data yang akan di sort : [ ";
    for (int i = 0; i < 10; i++) {
        cout << ar[i] << " ";
    }
    cout << "]" << endl << endl;

    cout << "Quick Sort: " << endl;
    qsort(ar, 0, 10 - 1);

    return 0;
}
