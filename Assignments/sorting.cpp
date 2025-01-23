#include<bits/stdc++.h>
using namespace std;
void sort(int arr[], int n) {
	//selection sort
	for (int i = 0; i < n - 1; i++) {
		int min_pos = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				min_pos = j;
				if (i != j) {
					swap(arr[i], arr[j]);
				}
			}
		}

	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		sort(arr, n)	;
	}


	return 0;
}