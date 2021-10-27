#include <iostream>

using namespace std;

unsigned int binary_search_r(int arr[], int left, int right, int search)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == search)
            return mid;

        if (arr[mid] > search)
            return binary_search_r(arr, left, mid - 1, search);

        return binary_search_r(arr, mid + 1, right, search);
    }

    return -1;
}

int main()
{
    const int size = 10;
    int array[size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    cout << binary_search_r(array, 0, size - 1, 7);
}
