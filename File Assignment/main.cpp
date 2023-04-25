#include "BookFile.hpp"

int main(){
    BookFile myBooks;
    std::string fileName;

    std::cout << "enter file name: ";
    getline(std::cin, fileName);

    myBooks.read_file(fileName);
    myBooks.split_data();
    myBooks.append_correctedFile();

    return 0;

}