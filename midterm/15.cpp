#include<iostream>

using namespace std;

void merge(int array[], int l, int m, int r) {
	int i, j, k;

	// size of left and right sub-arrays
	int nl = m - l + 1, nr = r - m;
	int larr[nl], rarr[nr];

	// fill left and right sub-arrays
	for (i = 0; i < nl; ++i) larr[i] = array[l + i];
	for (j = 0; j < nr; ++j) rarr[j] = array[m + 1 + j];

	i = 0; j = 0; k = l;

	// merge temp arrays to real array
	while (i < nl && j < nr) {
		if (larr[i] <= rarr[j]) {
			array[k++] = larr[i++];
		} else {
			array[k++] = rarr[j++];
		}
	}

	while (i < nl) {
		array[k++] = larr[i++];
	}
	
	while (j < nr) {
		array[k++] = rarr[j++];
	}
}

// https://www.tutorialspoint.com/cplusplus-program-to-implement-merge-sort
void merge_sort(int array[], int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;
		
		// sort first and second arrays
		merge_sort(array, l, m);
		merge_sort(array, m + 1, r);
		merge(array, l, m, r);
	}
}

int main() {
	int n; cin >> n;
	int a[n];

    for (int i = 0; i < n; ++i) cin >> a[i];

	merge_sort(a, 0, n - 1);

	for (int i = 0; i < n; ++i) {
		cout << a[i] << ' ';
	}

	cout << endl;
}
