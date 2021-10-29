#include <vector>
using namespace std;

static void swapElements(vector<int> &array, int pos_a, int pos_b) {
	
	int temp;
	
	temp = array[pos_a];
	array[pos_a] = array[pos_b];
	array[pos_b] = temp;
}

vector<int> selectionSort(vector<int> array) {
  
	int min_index;
	
	min_index = 0;
	
	for(int i = 0; i < array.size(); i++) {
		
		min_index = i;
		
		for(int j = i + 1; j < array.size(); j++) {
			if(array[min_index] > array[j]) {
				min_index = j;
			}
		}
		
		// Swap elements, element at ith position, swap positions with
		// element at the min position
		swapElements(array, min_index, i);
	}
	
  return array;
}
