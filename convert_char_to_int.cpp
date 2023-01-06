#include<iostream>
#include<string>



int main()
{
    std::string  str = "AFDS.ASD.12092022.13"; // 20 digit
    char content[21];

    for(int i =0; i<20;i++) {
         content[i]= static_cast<int>(str.at(i));  
    }


    for(int i =0; i<20; i++) {
        printf("%c", content[i]);
    }

    std::string a  = content;
    
    return 0;
}