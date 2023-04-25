#include "BookFile.hpp"

void BookFile::read_file(std::string filename) {
    // should read in the file "books.txt" or whatever name is passed
    std::ifstream booksFile;
    std::string line;

    booksFile.open(filename);
    if (booksFile.is_open()) {
        while (getline(booksFile, line, '\n')) {
            fileContents.push_back(line);
        }
        booksFile.close();
    } else {
        std::cout << "Unable to open file.\n";
    }
}

void BookFile::split_data() {
    // should split title and author and connect with "by"
    std::string title;
    std::string author;
    std::string appendedString;

    for (int i = 0; i < fileContents.size(); i += 2){
        title = fileContents[i];
        author = fileContents[i+1];
        appendedString = title + " by " + author;
        appendedContents.push_back(appendedString);
    }
}

void BookFile::append_correctedFile() {
    std::ofstream appendedFile;
    appendedFile.open("title_author.txt", std::ios::app);

    for (auto j : appendedContents){
        appendedFile << j << "\n";
    }

    appendedFile.close();
}