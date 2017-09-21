#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void){
    string STRING;
    ifstream infile;
    string delimiter = ",";
	infile.open("binary.csv");
        while(!infile.eof()) // To get you all the lines.
        {
            getline(infile,STRING); // Saves the line in STRING.
            while ((pos = STRING.find(delimiter)) != std::string::npos) {
                token = STRING.substr(0, pos);
                std::cout << token << std::endl;
                STRING.erase(0, pos + delimiter.length());
            }
	        cout<<STRING<<endl; // Prints our STRING.
        }
	infile.close();
    return 0;
}