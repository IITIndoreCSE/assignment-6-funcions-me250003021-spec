

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
    if (arr.size() < 2) return -1; 
    int largest = INT_MIN, second = INT_MIN;
    for (int val : arr) {
    if (val > largest) {
    second = largest;
    largest = val;
    } else if (val > second && val != largest) {
    second = val;
    }
    }
    return (second == INT_MIN) ? -1 : second;
    
}

int main() {
    int n; 
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i=0; i<n; i++) cin >> arr[i];
    int result = secondLargest(arr);
    if (result == -1)
    cout << "No second largest element exists." << endl;
    else
    cout << "Second largest element: " << result << endl;
    return 0;
}
