#include <iostream>
#include <algorithm>

using namespace std;

int maxArea(int height[], int size) {
    int left = 0;
    int right = size - 1;
    int max_area = 0;

    while (left < right) {
        int width = right - left;
        int current_height = min(height[left], height[right]);
        int area = width * current_height;
        max_area = max(max_area, area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(height) / sizeof(height[0]);
    cout << "Maximum area: " << maxArea(height, size) << endl;
    return 0;
}
