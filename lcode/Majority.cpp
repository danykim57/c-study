#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
		int counter = 0, majority;
		for (int num : nums) {
			if (!counter) {
				majority = num;
			}
			counter += num == majority ? 1: -1;
		}
		return majority;
	}
int main(){
	ios_base::sync_with_stdio(false);
	vector<int> nums = {2,2,1,1,1,2,2};
	cout << majorityElement(nums);
}
