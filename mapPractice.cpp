#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
	map<string, int>m;

	m.insert(make_pair("a", 1));
	m.insert(make_pair("b", 2));
	m["c"] = 6;

	m.erase("c");
	m.erase(m.find("b"));
	if (!m.empty())
		cout << "size of m is " << m.size() << endl;
	cout << "a: " << m.find("a")->second << endl;

	cout << "The number of a is " << m.count("a") << endl;

	cout << "Go through" << endl;

	for (auto i = m.begin(); i != m.end(); i++) {
		cout << "Key: " << i->first << "\t value: " << i->second << endl;
	}
}
