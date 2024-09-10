#include <iostream>
#include <cmath>
#include <algorithm>

double angleClock(int hour, int minutes) {
    // Normalize hour to 12-hour format
    if (hour == 12) hour = 0;

    // Calculate the angles for the hour and minute hands
    double minuteAngle = minutes * 6;
    double hourAngle = (hour % 12) * 30 + minutes * 0.5;

    // Calculate the absolute difference between the two angles
    double angle = std::fabs(hourAngle - minuteAngle);

    // Return the smaller angle
    return std::min(angle, 360 - angle);
}

int main() {
    int hour = 3;
    int minutes = 15;
    std::cout << "Angle between hands: " << angleClock(hour, minutes) << " degrees" << std::endl;
    return 0;
}
s