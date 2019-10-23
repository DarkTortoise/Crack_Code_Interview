#include <vector>

using namespace std;

void insertion_sort(vector<int> &arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = arr.size() - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

void selection_sort(vector<int> &arr) {
    int min_index = 0;

    for (size_t index = 0; index < arr.size(); index++) {
        min_index = index;
        for (size_t ptr = index; ptr < arr.size(); ptr++) {
            if (arr[ptr] < arr[min_index]) {
                min_index = ptr;
            }
        }

        swap(arr[index], arr[min_index]);
    }
}

void bubble_sort(vector<int> &arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = 1; j < arr.size() - i; j++) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int partition(vector<int> &arr, int left, int right) {
    int pivot = arr[right];
    int left_ptr = left, right_ptr = right;

    while (left_ptr < right_ptr) {
        while (arr[left_ptr] < pivot && left_ptr < right_ptr) {
            left_ptr++;
        }

        while (arr[right_ptr] >= pivot && left_ptr < right_ptr) {
            right_ptr--;
        }

        swap(arr[left_ptr], arr[right_ptr]);
    }

    swap(arr[right], arr[left_ptr]);

    return left_ptr;
}

void quick_sort(vector<int> &arr, int left, int right) {
    if (left > right)
        return;

    auto pivot = partition(arr, left, right);

    quick_sort(arr, left, pivot - 1);
    quick_sort(arr, pivot + 1, right);
}