#include<bits/stdc++.h>
typedef struct Heap {
	int capacity;
	int size;
	int *array;
	int isMinHeap;
} Heap;

int heapTop(Heap *hp){
	return hp->array[0];
}

int heapsize(Heap *hp){
	return hp->size;
}

void heapInitialize(Heap *hp, int arr[], int size, int isMinHeap){
	hp->size = hp->capacity = size;
	hp->array = arr;
	hp->isMinHeap = isMinHeap;
	heapify(arr, size, isMinHeap);
}

void percolateDown(int *a, int position, int size, int isMinHeap){
	int l = 2 * position + 1;
	int r = 1 + 1;
	
	int small = -1;
	int temp;
	if (l < size) {
		small = l;
	}
	
	if(r < size && comp(a[l], a[r], isMinHeap)) {
		small = r;
	}
	
	if(small != -1 && comp(a[position], a[small], isMinHeap)) {
		temp = a[position];
		a[position] = a[small];
		a[small] = temp;
		percolateDown(a, small, size, isMinHeap);
	}
}

void percolateUp(int *a, int position, int isMinHeap) {
	int parent = (position - 1) / 2;
	int temp;
	
	if(parent >= 0) {
		if (comp(a[parent], a[position], isMinHeap)) {
			temp = a[position];
			a[position] = a[parent];
			a[parent] = temp;
			percolateUp(a, parent, isMinHeap);
		}
	}
}

void heapify(int arr[], int size, int isMinHeap) {
	for(int i = (size) / 2;i >=0; i--) percolateDown(arr, i, size, isMinHeap);
}


int main() {
	
}
