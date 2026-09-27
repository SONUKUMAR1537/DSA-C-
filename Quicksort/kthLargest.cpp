#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& nums, int low, int high) {

    int pivot = nums[high];
    int i = low;

    for (int j = low; j < high; j++) {
        if (nums[j] <= pivot) {
            swap(nums[i], nums[j]);
            i++;
        }
    }

    swap(nums[i], nums[high]);
    return i;
}

int quickSelect(vector<int>& nums, int low, int high, int target) {

    int pi = partition(nums, low, high);

    if (pi == target)
        return nums[pi];

    else if (pi < target)
        return quickSelect(nums, pi + 1, high, target);

    else
        return quickSelect(nums, low, pi - 1, target);
}

int findKthLargest(vector<int>& nums, int k) {

    int target = nums.size() - k;

    return quickSelect(nums, 0, nums.size() - 1, target);
}

int main() {

    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    cout << "Kth Largest Element = " << findKthLargest(nums, k);

    return 0;
}