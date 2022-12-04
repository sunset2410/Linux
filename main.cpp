#include <fstream>
#include <iostream>
#define VERSION_PATH "version"

int readFile(char* arr){
    try {
        //std::ifstream ifs = std::ifstream("a.txt", std::ios_base::in);
        std::ifstream ifs = std::ifstream(VERSION_PATH, std::ios_base::in);
        if (ifs.is_open() == true) {
            char c;
            int i = 0;
            while (ifs.get(c))
            {
                arr[i] = c;
                i++;
            }
            ifs.close();
            arr[i] = '\0';
            std::cout << arr << std::endl;
        } else
        std::cout << "File could not be open!" << std::endl;
    } catch(std::exception  ex) {

    }
    

    return 0;
}


int main()
{
    char arr[100] = {'\0',};
    readFile(arr);
    std::cout<<"version:"<<  arr;
    return 0;
}