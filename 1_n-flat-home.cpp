#include <iostream>
#include <string>

//Zadacha 1

bool surnameCorrect(std::string inp, std::string whiteList)
{

    for (int i = 0; i < inp.length();)
    {
        bool equal = false;
        for (int j = 0; j < whiteList.length();)
        {
            if (inp[i] == whiteList[j])
            {
                equal = true;
                break;
            }
            else
            {
                j++;
            }
        }
        if (equal == false)
        {
            return false;
        }
        i++;
    }
    return true;
}

int main ()  {
std::string whiteList = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ. -";   
std::cout << "Enter surnames: \n";
std::string people[10];
for (int i = 0; i< 10; ) {
    std::getline(std::cin, people[i]);
if (! surnameCorrect(people[i], whiteList)) 
{
    std::cout << "Incorrect input\n";
}
    else i++;

}


for (int i =0; i < 3; ) {
    int flat = 0; 
    std::cout << "Enter the flat number (1 - 10)\n";
    std::cin >> flat;
    if (flat <1 || flat >10) std::cout << "Incorrect input. You are loosing your trys! \n";
    else std::cout << "Flat " <<  flat << " - " << people[flat-1] << "\n"; 
    i++;
}
std::cout << "And now - a little joke ;-)\n";
for (int i =0; i < 10; i++ ){
   //std::cout << people[i] << "\n";
}
 std::cout <<"Enter three flat numbers! \n";
 int numbers[3];
 for (int i = 0; i <3; i++) {
 std::cin >> numbers[i];
}
 std::cout << "Ladies ang gentlemen, here is the list of apartment dwellers in source flats: \n";
 for (int i = 0; i < 3; i++){
    if (numbers[i] < 0 || numbers[i] > 10) std::cout << "Incorrect input!\n";
    else  std::cout << "Flat " << numbers[i] << " - " << people[numbers[i]-1] << "\n";
}
}