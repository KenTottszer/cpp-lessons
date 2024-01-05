#include <iostream>
#include <string_view>

// Write the function getQuantityPhrase() here

constexpr std::string_view getQuantityPhrase(int num){
        if (num == 0){
            return "no";
        }
         else if (num == 1){
            return "a single";
        }
         else if (num == 2){
            return "a couple of";
        }
         else if (num == 3){
            return "a few";

        }
        else if(num > 3){
            return "many";
        }

}

// Write the function getApplesPluralised() here
 constexpr std::string_view getApplesPluralised(int num){
    if (num == 1){
        return "apple";
    }
    else{
        return "apples";
    }
}


int main()
{
    std::cout << "Mary has " << getQuantityPhrase(3) << " " << getApplesPluralised(3) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << " " << getApplesPluralised(numApples) << ".\n";

    return 0;
}
