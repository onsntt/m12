#include <iostream>
int main ()  {
std::cout << "Enter surnames: \n";
std::string people[10];
for (int i = 0; i< 10; i++) {
    std::cin >>people[i];
}

//for (int i =0; i < 10; i++ ){
  //  std::cout << people[i] << "\n";
//}
//std::cout <<"Enter three flat numbers\n";
//int numbers[3];
//for (int i = 0; i <3; i++) {
//std::cin >> numbers[i];
//}
//std::cout << "Ladies ang gentlemen, here is the list of apartment dwellers in source flats: \n";
//for (int i = 0; i < 3; i++){
//    std::cout << "Flat " << numbers[i] << " - " << people[numbers[i]] << "\n"; 
//}
for (int i =0; i < 3; ) {
    int flat = 0; 
    std::cout << "Enter the flat number\n";
    std::cin >> flat;
    if (flat <0 || flat >9) std::cout << "Incorrect input. You are loosing your trys! \n";
    else std::cout << "Flat " <<  flat << " - " << people[flat] << "\n"; 
    i++;
}
std::cout << "And now - a little joke ;-)\n";
for (int i =0; i < 10; i++ ){
   //std::cout << people[i] << "\n";
}
 std::cout <<"Enter three flat numbers\n";
 int numbers[3];
 for (int i = 0; i <3; i++) {
 std::cin >> numbers[i];
}
 std::cout << "Ladies ang gentlemen, here is the list of apartment dwellers in source flats: \n";
 for (int i = 0; i < 3; i++){
    std::cout << "Flat " << numbers[i] << " - " << people[numbers[i]] << "\n";
}
}