// insertion_sort.cpp - Insertion Sort algorithm implementation
// in C++

#include <iostream>
#include <vector>

void Swap(std::vector<int>& nums, int a, int b);
void InsertionSort(std::vector<int>& nums);

void Swap(std::vector<int>& nums, int a, int b)
{
    int temp = nums[a];
	nums[a] = nums[b];
	nums[b] = temp;
}

void InsertionSort(std::vector<int>& nums)
{
	int n = nums.size();
	int i = 1;

	while (i < n) {
		int j = i;

		while ((j > 0) && (nums[j] < nums[j - 1])) {
			Swap(nums, j, j - 1);
			--j;
		}
		
		++i;
	}
}

int main()
{
	std::vector<int> nums{6, 5, 3, 1, 8, 7, 2, 4};
	
	std::cout << "Unsorted array" << std::endl;
	for (auto num : nums) {
		std::cout << num << " ";
	}


	InsertionSort(nums);
	
	std::cout << "\nSorted array" << std::endl;
	for (auto num : nums) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	return 0;
}

