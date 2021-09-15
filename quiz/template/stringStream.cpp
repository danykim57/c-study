#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main(){
	vector<string> input(3);	// given input
    input[0] = "1 A 89 Apple";
    input[1] = "2 B 100 Banna";
    input[2] = "3 C 78 Charlie";

    for(int i = 0; i < input.size(); i++){
	int num, score;
	string name, obj;

	stringstream ss;	
	ss.str(input[i]);

	ss >> num;
	ss >> name;
	ss >> score;
	ss >> obj;

	cout << num << " " << name << " " << score << " " << obj << endl;
	
    }
}
