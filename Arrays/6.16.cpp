#include <vector>

using namespace std;

bool check_row(const vector<vector<int>> &arr, int row) {
    bool has_shown[10] = {false};

    for (size_t index = 0; index < 9; index++) {
        auto value = arr[row][index];
        if (has_shown[value])
            return false;
        else
            has_shown[value] = true;
    }

    return true;
}

bool check_column(const vector<vector<int>> &arr, int col) {
    bool has_shown[10] = {false};

    for (size_t index = 0; index < 9; index++) {
        auto value = arr[index][col];
        if (has_shown[value])
            return false;
        else
            has_shown[value] = true;
    }

    return true;
}

bool check_grid(const vector<vector<int>> &arr, int row, int col) {
    bool has_shown[10] = {false};

    for (size_t i = row; i < row + 3; i++) {
        for (size_t j = col; j < col + 3; j++) {
            auto value = arr[i][j];
            if (has_shown[value])
                return false;
        }
    }

    return true;
}

bool Problem_6_16(const vector<vector<int>> &arr) {
    for (size_t row = 0; row < 9; row++) {
        if (!check_row(arr, row))
            return false;
    }

    for (size_t col = 0; col < 9; col++) {
        if (!check_column(arr, col))
            return false;
    }

    for (size_t row = 0; row < 9; row += 3) {
        for (size_t col = 0; col < 9; col += 3) {
            if (!check_grid(arr, row, col))
                return false;
        }
    }

    return true;
}