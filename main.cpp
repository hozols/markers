#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <fstream>
#include <string>
#include <vector>
#include "markers.h"
#include <sstream>
#include <array> //for std::array


using namespace std;

int main() {
    vector<Markers> data;



    // opening file

    // extracting words form the file

        // displaying content



    std::ifstream file("/Users/hermanozols/CLionProjects/markers/lidar.txt");
    std::string str;
    while (std::getline(file, str))
    {

        std::string buf;                 // Have a buffer string
        std::stringstream ss(str);       // Insert the string into a stream

        std::vector<std::string> tokens; // Create vector to hold our words

        while (ss >> buf){
            tokens.push_back(buf);
        }
            data.emplace_back(tokens.at(0),strtof((tokens.at(1)).c_str(),0),strtof((tokens.at(2)).c_str(),0), strtof((tokens.at(3)).c_str(),0));
    }

    for(int i =0; i< 3; i++){
        Markers mar = data.at(i);
        cout << mar.getColor();
        cout << "\n";
    }


    return 0;
}