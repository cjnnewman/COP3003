#ifndef FILE_ASSIGNMENT_2_MAGAZINE_HPP
#define FILE_ASSIGNMENT_2_MAGAZINE_HPP

#include <iostream>
#include "Files.hpp"


class XMLFiles : public Files {
private:
    std::string validate_filename(const std::string& raw_name);
    std::fstream XMLFile;

    struct info_to_print{
        std::string Name;
        std::string Location;
        std::string Employees;
        std::string Founded;
        std::string Founder;
    } xml_info;

    void split_data();

public:
    std::vector<std::string> lines;
    std::vector<info_to_print> entries;
    std::string filename;

    XMLFiles();
    explicit XMLFiles(const std::string&);

    void change_filename(std::string change_name) override;
    void load_file() override;
    void write_file(std::string) override;
    std::string to_string();

};


#endif //FILE_ASSIGNMENT_2_MAGAZINE_HPP
