#include <iostream>
#include <string>
#include <fstream>

const std::string OUTPUT_FILE_PATH = "ChrosGame_Data/CPP_Applications/Windows/_communications/input.txt";

std::string getUserInput();
void writeToFile(std::string str);

int main()
{
    while(true) {
        std::string input = getUserInput();
        if(input == "exit") {
            break;
        }
        writeToFile(input);
    }

    return 0;
}



std::string getUserInput()
{
    std::string line;
    std::getline(std::cin, line);
    return line;
}


void writeToFile(std::string str)
{
    std::ofstream myfile;
    myfile.open (OUTPUT_FILE_PATH);
    myfile << str << std::endl;
    myfile.close();
}
