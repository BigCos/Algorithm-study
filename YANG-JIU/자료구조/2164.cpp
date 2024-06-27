#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);

	int N;
	queue<int> que;
	cin >> N;

	for (int i = 1; i < N+1; i++) {
		que.push(i);
	}

	int count = 0;
	while(que.size() > 1) {
		count++;

		//홀수번째 시행: 맨 윗 카드 버리기
		if (count % 2 == 1) {
			que.pop();
		}
		//짝수번째 시행: 맨 윗 카드 맨 아래로 
		else {
			int a = que.front();
			que.pop();
			que.push(a);
		}
	}
	cout << que.front();
	return 0;
}