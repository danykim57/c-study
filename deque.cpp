#include<iostream>
#include<deque>
#include<string>

using namespace std;

struct Data {
	int value;
	string name;
	Data(int v, string n):value(v), name(n) {}
};

deque<Data>queue;

int main() {
	queue.push_back(Data(1, "Alice"));
	queue.push_back(Data(2, "Brian"));
	queue.push_back(Data(3, "Charlie"));
	queue.push_back(Data(4, "Decarte"));
	queue.push_back(Data(5, "Enemy"));

	for (int i = 0; i < queue.size(); i++) {
		Data d = queue[i];
		cout << d.value << ", " << d.name << endl;
	}

	while (!queue.empty()) {
		Data f = queue.front();
		queue.pop_front();
		cout << f.value << ", " << f.name << endl;
	}
}
