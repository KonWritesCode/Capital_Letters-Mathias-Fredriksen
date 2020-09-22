#include <iostream>
#include <string>


void Task1()
{
    std::string user_sentence;

    std::cout << "Hello, please write a sentence:\n";
    std::getline(std::cin, user_sentence);

    //Converts the first letter in the sentence to an upper case letter
    user_sentence[0] = toupper(user_sentence[0]);

    //For everytime the function registers an space, it will convert the next letter in the sentence to a upper case letter.
    for (int i = 0; i < user_sentence.size(); i++)
    {
        if (user_sentence.at(i) == ' ')
        {
            user_sentence[i + 1] = toupper(user_sentence[i + 1]);
        }
    }

    //Outputs the converted string
    std::cout << "\nConverted string: \n";
    std::cout << user_sentence << std::endl;
}

void Task2()
{
    std::string user_sentence;

    std::cout << "Hello, please write a sentence:\n";
    std::getline(std::cin, user_sentence);

    //Converts the first letter in the sentence to an upper case letter
    user_sentence[0] = toupper(user_sentence[0]);

    //For everytime the function registers an space, it will convert the next letter in the sentence to a upper case letter.
    for (int i = 0; i < user_sentence.size(); i++)
    {
        if (user_sentence.at(i) == 'i' && user_sentence.at(i - 1) == ' ' && user_sentence.at(i + 1) == ' ')
        {
            user_sentence[i] = toupper(user_sentence[i]);
        }
        if (user_sentence.at(i) == ' ' && user_sentence.at(i-1) == '.')
        {
            user_sentence[i + 1] = toupper(user_sentence[i+1]);
        }
    }

    //Outputs the converted string
    std::cout << "\nConverted string: \n";
    std::cout << user_sentence << std::endl;
}

int main()
{
    //Swap "Task2()" to "Task1()" if you'd like to run the different task"
    Task2();

    return 0;
}