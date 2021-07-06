#include <stdio.h>
#include <vector>
#include <algorithm>
int main(int argc, char** argv){
	//freopen("input.txt", "rt", stdin);
	int n, t, lt=0, rt, tmp, mid;
	scanf("%d", &n);
	std::vector<int> a;
	scanf("%d", &t);
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		a.push_back(tmp);
	}
	std::sort(a.begin(), a.end());
	rt =n-1;
	while(lt<=rt){
		mid = (lt+rt)/2;
		if(a[mid]==t){
			printf("%d\n", mid+1);
			return 0;
		}
		else if(a[mid]>t) rt = mid-1;
		else lt = mid+1;
	}
	return 0;
}
