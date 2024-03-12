#include <iostream>
#include <string>
int main() {

int pupilsMarks[5];
std::string surnames [] = {"Ivanov", "Petrov", "Sidorov", "Ganin", "Donin"};

for (int i =0; i <5; i++) {
    std::cout << "Enter mark for " << surnames[i] << " ";
    std::cin >> pupilsMarks[i];
}

for (int i = 0; i < 5; i++) {
    std::cout << surnames[i] << " has mark " << pupilsMarks[i] << "\n";
}
}