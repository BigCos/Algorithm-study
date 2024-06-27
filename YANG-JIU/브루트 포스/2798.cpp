#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);

	int N, M;
	vector<int> arr;
	int num;
	int max = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr.push_back(num);
	}

	//최대 수행 횟수: 100*99*98
	for (int i = 0; i < N-2; i++) {
		for (int j = i+1; j < N-1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (max < arr[i] + arr[j] + arr[k] && arr[i] + arr[j] + arr[k] <=M) {
					max = arr[i] + arr[j] + arr[k];
				 }
			}
		}
	}
	cout << max;
}
