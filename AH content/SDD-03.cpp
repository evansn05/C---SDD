#include <iostream>
#include <string>

void bubble_sort(int list[], int size) {
    int n = size;
    bool swapped = true;
    while (swapped && n > 1) {
        swapped = false;
        for (int i = 0; i < n-1; i ++) {
            if (list[i] > list[i+1]) {
                int temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
                swapped = true;
            };
        }
        n -= 1;
    }
}

void insertion_sort(int list[], int size) {
    int value = 0;
    int index = 0;
    for (int i = 1; i < size; i++) {
        value = list[i];
        index = i;
        while (index > 0 && value < list[index - 1]) {
            list[index] = list[index-1];
            index -= 1;
        }
        list[index] = value;
    }
}

void binary_search(int list[], int size, int target) {
    bubble_sort(list, size);
    int low = 0;
    int high = size - 1;
    bool found = false;
    while (!found && low <= high) {
        int mid = (low+high)/2;
        if (target == list[mid]) {
            std::cout << "Found at position " << mid;
            found = true;
        } else if (target > list[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (!found) {
        std::cout << "Target not found";
    }
}