bool Problem_12_6(int arr[6][5], int n) {
    int row = 0, col = 4;

    while (true) {
        if (row > 5 or col < 0)
            break;
        if (n < arr[row][col]) {
            col--;
        } else if (n > arr[row][col]) {
            row++;
        } else if (n == arr[row][col]) {
            return true;
        }
    }

    return false;
}