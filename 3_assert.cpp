#include <iostream>
#include <cassert>
// Task 3

float travelTime(float distance, float speed)
{
    assert(speed > 0);
    return distance / speed;
}

int main()
{
    std::cout << "Let's calulate travel time!\n";
    std::cout << "Enter distance: ";
    float distance;
    std::cin >> distance;
    std::cout << "Enter speed: ";
    float speed;
    std::cin >> speed;
    float time = travelTime(distance, speed);
    std::cout << "Travel time: " << time << "\n";
}