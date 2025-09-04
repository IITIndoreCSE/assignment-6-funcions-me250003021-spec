#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptIndex(const
vector<int>& arr) {
int n = arr.size();
vector<int> output(n, 1);
int prefix = 1;
for (int i = 0; i < n; i++) {
output[i] = prefix;
prefix *= arr[i];
}
int suffix = 1;
for (int i = n - 1; i >= 0; i--) {
output[i] *= suffix;
suffix *= arr[i];
}
return output;
}
int main() {
int n;
cout << "Enter size of array: ";
cin >> n;
vector<int> arr(n);
cout << "Enter elements: ";
for (int i=0; i<n; i++) cin >> arr[i];

vector<int> result=
productExceptIndex(arr);
cout << "Product Except Index array: ";
for (int val : result) {
cout << val << " ";
}
cout << endl;

    return 0;
}


