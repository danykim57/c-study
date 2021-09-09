#include <bits/stdc++.h>

using namespace std;

bool isPairSum(int A[], int N, int X){
	for (int i = 0; i < N; i++){
		for(int j = 0; j < N; j ++){
			if(i == j) continue;
			//two pointers met
			if(A[i] + A[j] == X) return true;
			//found the pair
			if(A[i] + A[j] > X) break;
			//in the sorted array, rest numbers are not the answer
		}
	}
	return false;
}

int main(){
	//sample code
	int arr[] = { 3, 5, 9, 2, 8, 10, 11};
	int val = 19;
	int val1 = 6;
	int arrSize = *(&arr + 1) - arr;
	int arrSize1 = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr + arrSize);
	cout << isPairSum(arr, arrSize1, val);
	return 0; 
}
