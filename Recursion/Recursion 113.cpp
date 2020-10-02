#include <iostream>

using namespace std;


int linearSearch(int start, int last, int number[1000], int select) {
    if (last >= start) {
        if (number[start] == select) {
            return start;
        } else {
            return linearSearch(start + 1, last, number, select);
        }
    }
    return -1;
}

int main() {
    int input, number[1000], select;
    cin >> input;
    for (int i = 0; i < input; i++) {
        cin >> number[i];
    }
    cin >> select;
    cout << linearSearch(0, input - 1, number, select);
    return 0;
}
