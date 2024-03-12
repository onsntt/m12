#include <iostream>

int main() {

int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
/*
months[0] = 31;
months[1] = 28;
months[2] = 31;
months[3] = 30;
months[4] = 31;
months[5] = 30;
months[6] = 31;
months[7] = 31;
months[8] = 30;
months[9] = 31;
months[10] = 30;
months[11] = 31;
*/
int choice;

std::cin >> choice;

if (choice >= 0 && choice <=11) {
    std::cout << months[choice] << "\n";
}

}