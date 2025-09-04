#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int>& arr) {
    int sum = 0;
    for (int val : arr) {
    sum += val;
    }
    return sum;
    }
    

int main() {
    int n;
    cout << "Enter number of elements: ";
     cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }
    int result = sumArray(arr);
    cout << "Sum of array elements = " << result << endl;
    return 0;
}
