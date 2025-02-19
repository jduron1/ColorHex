#include <iostream>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

int main(){
    string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        else if (input[0] != '#') {
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        for (int i = 1; i < (int)input.size(); i++) {
            if (!isdigit(input[i])) {
                std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
            } else if (!isalpha(input[i])) {
                std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
            }
        }
    }while( input.size() != RGB_HEX_LENGTH );

    cout << "Your hex color is: " << input << endl;

    return 0;
}
