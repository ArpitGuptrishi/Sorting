#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}
int findK(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) {
        return arr[0]; // Single element array is always sorted
    }
    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());
    int l = minVal, r = maxVal;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        vector<int> temp(n);
        for (int i = 0; i < n; ++i) {
            temp[i] = abs(arr[i] - mid);
        }
        if (isSorted(temp)) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return l - 1; // Since we exited the loop with l > r, the answer is l - 1
}
int main() {
    vector<int> arr = {4, 1, 3};
    int k = findK(arr);
    cout << k << endl;
    return 0;
}