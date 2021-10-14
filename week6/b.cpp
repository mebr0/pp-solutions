#include <iostream>
#include <cmath>

using namespace std;

// return array with absolute differences of elements of two arrays
int* diff(int a[], int b[], int size) {
    int* arr = new int[size];
    
    for (int i = 0; i < size; ++i) {
        arr[i] = abs(a[i]-b[i]);
    }
    
    return arr;
}

int main() {
    int n; cin >> n;
    int a[n], b[n];
    
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    
    int* c = diff(a, b, n);
    
    for (int i = 0; i < n; ++i) {
        cout<< c[i] << " ";
    }
}