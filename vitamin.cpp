#include <iostream>
int main() {
    std::string vits[] = { "Vit.A", "Vit.B", "Vit.C", "Vit.D", "Vit.E", "Vit.F"};
    std::cout << "Enter timeshift: ";
    int timeShift;
    std::cin >> timeShift;

    while (timeShift != 0) {
      if (timeShift % 4 != 0 || timeShift >= 24 || timeShift <= -24)
          {
              std::cout << "Incorrect input \n";
              
              
          }

     int shift = timeShift /4;
     if (shift > 0) {
        for (int i = 0; i < shift; i++) 
        {
           std::string save = vits[5];

           for (int j =5; j>0; j--) 
           {
            vits[j] = vits[j-1];
           }
           vits[0] = save;
        }


     }     
      else 
      {
        for (int i = 0; i > shift; i--)
        {
            std::string save = vits[0];
            for (int j = 0; j <5; j++)
             {
                vits[j] = vits[j+1];
             }
             vits[5] = save;
        }


      }
for (int i =0; i < 6; i++)
{
    std::cout << "Time:  " << i*4 << " vit: " << vits[i] << "\n";
}

     std::cout << "Enter timeshift: ";
      std::cin >> timeShift;
    }
    }