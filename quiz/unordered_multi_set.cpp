#include <unordered_set>
#include <iostream>
using namespace std;
int main(void){
	unordered_multiset<string> uos = {"a", "a", "b", "c", "d", "e", "f", "g"};
	for(auto element : uos) cout << element;
	//random ordered output, but duplicated elements are in neighbor;
	return 0;
	
}
