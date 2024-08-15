#include <iostream>
#include <vector>

using namespace std;

int minOperations(vector<int>& arr) {
    int n = arr.size();
    int operations = 0;
    int max_so_far = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] <= max_so_far) {
            operations++;
            max_so_far = 0;
        } else {
            max_so_far = arr[i];
        }
    }

    return operations;
}

int main() {
    vector<int> arr = {3, 2, 1, 4};
    int minOps = minOperations(arr);
    cout << "Minimum operations: " << minOps << endl;
    return 0;
}