#include <iostream>

int main()
{
     std::string name1{};
     std::cout << "Please enter name 1\n";
     std::getline(std::cin >> std::ws, name1);
     int age1{};
     std::cout << "Please enter age of " << name1 << "\n";
     std::cin >> age1;

     std::string name2{};
     std::cout << "Please enter name 2\n";
     std::getline(std::cin >> std::ws, name2);
     int age2{};
     std::cout << "Please enter age of " << name2 << "\n";
     std::cin >> age2;

     if (age1>age2){
        std::cout << name1 << " (age "<< age1 << ") is older than " << name2 << "(age " << age2 << ")\n";
     }
     else if(age2>age1){
        std::cout << name2 << " (age "<< age2 << ") is older than " << name1 << "(age " << age1 << ")\n";
     }
     else{
        std::cout << name1 << " & " << name2 << " are both " << age1 << "\n";
     }

     return 0;
}

