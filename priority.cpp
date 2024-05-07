// C++ program to demonstrate the use of priority_queue
#include <iostream>
#include <queue>
using namespace std;

// driver code
int main()
{
	int arr[6] = { 10, 2, 4, 8, 6, 9 };

	// defining priority queue
	priority_queue<int> pq;

	// printing array
	cout << "Array: ";
	for (auto i : arr) {
		cout << i << ' ';
	}
	cout << endl;
	// pushing array sequentially one by one
	for (int i = 0; i < 6; i++) {
		pq.push(arr[i]);
	}

	// printing priority queue
	cout << "Priority Queue: ";
	while (!pq.empty()) {
		cout << pq.top() << ' ';
		pq.pop();
	}
    cout << endl;

    priority_queue<int, vector<int>, greater<int> > g;
    // pushing array sequentially one by one
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < 6; i++) {
		g.push(arr[i]);
	}

    cout << "Priority Queue: ";
	while (!g.empty()) {
		cout << g.top() << ' ';
		g.pop();
	}

	return 0;
}
