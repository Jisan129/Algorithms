#include <bits/stdc++.h>
#include <iostream>
#include <vector>

std::vector<int> nums;
using namespace std;

int merging(int low, int mid, int high) {

    int count = 0;
    int j = mid + 1;
    for (int i = low; i <= mid; i++) {
        while (j <= high && nums[i] > 2 * nums[j]) {
            j++;
        }
        count += (j - (mid + 1));
    }

    int left = low, right = mid + 1;
    vector<int> update;
    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) update.push_back(nums[left++]);
        else update.push_back(nums[right++]);

    }

    while (left <= mid) {
        update.push_back(nums[left++]);
    }

    while (right <= high) {
        update.push_back(nums[right++]);
    }

    for (int i = low; i <= high; i++) {
        nums[i] = update[i - low];
    }

    return count;
}

int mergeSort(int low, int high) {

    if (low >= high)return 0;
    int mid = (low + high) / 2;
    int inv = mergeSort(low, mid);
    inv += mergeSort(mid + 1, high);
    inv += merging(low, mid, high);
    return inv;
}

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    cout << mergeSort(0, a-1);
}
