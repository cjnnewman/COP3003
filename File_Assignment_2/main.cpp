#include <iostream>
#include "Files.hpp"
#include "Magazine.hpp"

int main() {
    char user_input;
    std::string user_filename;

    std::cout << "Enter your file name: ";
    std::cin >> user_filename;

    XMLFiles xmlfileclassobject = XMLFiles(user_filename);

    xmlfileclassobject.load_file();
    xmlfileclassobject.write_file("text_file");


}
