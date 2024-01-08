#include <iostream>

void calculate(int firstNum, int secondNum, char sign){
    switch(sign){
        case '+':
                std::cout <<  firstNum + secondNum;
                break;
        case '-':
                std::cout <<  firstNum - secondNum;
                break;
        case '*':
                std::cout <<  firstNum * secondNum;
                break;
        case '/':
                std::cout <<  firstNum / secondNum;
                break;
        case '%':
                std::cout <<  firstNum % secondNum;
                break;
        default:
                std::cout << "Not a suitable input\n";
                break;


    }


}





int main()
{
    calculate(7, 8, '/');
    return 0;
}
