#include <iostream>
int main() {
float time[10];

int max = 0;

for (int i=0; i < 10; i++) {
    std::cin >> time[i];
    if(time[max] < time[i]) {
        max = i;
    }
}

int first = max, second = max, third = max;

for (int i =0; i < 10; i++) {
    if (time[first] > time[i]) {
        third = second;
        second = first;
        first = i;
    } else if (time[second] > time[i]) {
        third = second;
        second = i;
    } else if (time[third] > time[i]) {
        third = i;
    }
}
std::cout << "Gold is " << first << " with " << time[first] << "\n";
std::cout << "Silver is " << second << " with " << time[second] << "\n";
std::cout << "Bronse is " << third << " with " << time[third] << "\n";
}