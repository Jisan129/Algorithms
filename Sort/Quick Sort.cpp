#include <bits/stdc++.h>

using namespace std;
int elements[10000];


int partitionList(int low, int high) {
    int pivot = elements[low];
    int i = low, j = high ;
    do {
        do {
            i++;
        } while (elements[i] <= pivot&&i<high);
        do {
            j--;
        } while (elements[j] > pivot&&j>=low);
        if (i < j) {
            swap(elements[i], elements[j]);
        }
    } while (i < j);
    swap(elements[j], elements[low]);
    return j;
}

void quickSort(int low, int high) {
    if (low < high) {
        int j = partitionList(low, high);
        quickSort(low, j);
        quickSort(j + 1, high);
    }
}

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> elements[i];
    }

    quickSort(0, a);
    for (int i = 0; i < a; i++) {
        cout << elements[i] << " ";
    }

}



