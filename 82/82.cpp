#include <iostream>
#include <string>
#include <algorithm>

void foo(std::string& input)
{
    // Викидаєм все після першого пробілу
    const std::string beforeSpaceInput = input.substr(0, input.find(32));

    input = beforeSpaceInput;

    // викидаєм все що не є буквою або цифрою
    input.erase(std::remove_if(input.begin(), input.end(), [](char c) { return !std::isalpha(c); }), input.end());

    // Робимо символ малим, якщо це можливо
    std::for_each(input.begin(), input.end(), [](char& ch) {
        ch = std::tolower(static_cast<unsigned char>(ch));
        });
}

int main()
{
    std::string input;

    std::cout << "Enter some characters\n> ";
    std::getline(std::cin, input);

    foo(input);

    std::cout << "Transformed input\n> " << input << std::endl;
}