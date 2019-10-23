#include <vector>

using namespace std;

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