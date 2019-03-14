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
    std :: string cmd = "open terminal";
    system (cmd.c_str ());
    vector<Markers> data;                 // Create vector to store markers
    std::ifstream file("/Users/hermanozols/CLionProjects/markers/lidar.txt");
    std::string str;                      // Store the current line
    while (std::getline(file, str)) {

        std::string buf;                 // Have a buffer string
        std::stringstream ss(str);       // Insert the string into a stream

        std::vector<std::string> tokens; // Create vector to hold our words

        while (ss >> buf) {
            tokens.push_back(buf);       // Puts all words in vector
        }
        data.emplace_back(tokens.at(0), strtof((tokens.at(1)).c_str(), 0), strtof((tokens.at(2)).c_str(), 0),
                          strtof((tokens.at(3)).c_str(), 0)); // Creates new marker and adds it to the vector
    }

    for (int i = 0; i < 6301; i++) {
        Markers mar = data.at(i);
        cout << mar.getColor() << " ";
        cout << mar.getX() << " ";
        cout << mar.getY() << " ";
        cout << mar.getZ() << " ";
        cout << "\n";
    }


    return 0;
}