#include <iostream>
#include <string>

using namespace std;

int main()
{
    int idade = 16;
    std::string nome = "jao";
    char carac = 'b';
    float num1 = 1.77865281;
    bool boleano = true;
    double num2 = 8.82738474;
    short int num3 = 32767;
    long int num4 = 2147483647;
    long long int num5 = 9223372036854775807;
    unsigned int num6 = 4294967295;

    std::cout << "tipo int: " << idade << std::endl;
    std::cout << "tipo string: " << nome << std::endl;
    std::cout << "tipo char: " << carac << std::endl;
    std::cout << "tipo float: " << num1 << std::endl;
    std::cout << "tipo bool: " << boleano << std::endl;
    std::cout << "tipo double: " << num2 << std::endl;
    std::cout << "tipo short: " << num3 << std::endl;
    std::cout << "tipo long: " << num4 << std::endl;
    std::cout << "tipo long long: " << num5 << std::endl;
    std::cout << "tipo unsigned int: " << num6 << std::endl;

    return 0;
}
