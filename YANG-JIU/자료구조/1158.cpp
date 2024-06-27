#include <iostream>
#include <queue>
using namespace std;

//요세푸스 문제
int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);

	int N, K;
	queue<int> que;


	cin >> N >> K;

	for (int i = 1; i < N + 1; i++) { //큐 초기화
		que.push(i);
	}

	cout << "<";
	while (que.size() >= 1) {
		for (int i = 1; i < K; i++) {
			que.push(que.front());
			que.pop();
		}
		if (que.size() == 1) {
			cout << que.front() << ">";
			que.pop();
		}
		else {
			cout << que.front() << ", ";
			que.pop();
		}
	}
}
