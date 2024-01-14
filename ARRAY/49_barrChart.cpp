#include <iostream>

void printBarChart(int hts[], int length) {
    int max = 0;
    
    for (int i = 0; i < length; i++) {
        if (hts[i] > max) {
            max = hts[i];
        }
    }

    for (int floor = max; floor > 0; floor--) {
        for (int i = 0; i < length; i++) {
            int bh = hts[i];
            if (bh >= floor) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example usage
    int heights[] = {3, 1, 4, 2, 5};
    int size = sizeof(heights) / sizeof(heights[0]);
    printBarChart(heights, size);

    return 0;
}
