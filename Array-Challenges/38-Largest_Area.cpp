#include <iostream>
#include <algorithm>

using namespace std;

int largestRectangleArea(int heights[], int size) {
    int maxArea = 0;

    for (int i = 0; i < size; ++i) {
        int width = 1;
        int height = heights[i];

        for (int j = i - 1; j >= 0 && heights[j] >= height; j--) {
            width++;
        }

        for (int j = i + 1; j < size && heights[j] >= height; j++) {
            width++;
        }

        int area = height * width;
        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main() {
    int heights[] = {2, 4};
    int size = sizeof(heights) / sizeof(heights[0]);
    cout << "The largest rectangle area is: " << largestRectangleArea(heights, size) << endl;
    return 0;
}
