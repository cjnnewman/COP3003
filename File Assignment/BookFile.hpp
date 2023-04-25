// Use to read the book file provided
//#ifndef File_Assignment_BOOKFILE_HPP
//#define File_Assignment_BOOKFILE_HPP

#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class BookFile {
private:
    // you should have your variables here - add setters/getters if needed
    // shouldn't need for first variant
    std::vector<std::string> fileContents;
    std::vector<std::string> appendedContents;
public:
    BookFile()=default;
    void read_file(std::string);
    void split_data();
    void append_correctedFile();

};


//#endif File_Assignment_BOOKFILE
