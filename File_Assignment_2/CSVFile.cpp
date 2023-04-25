#include "CSVFile.hpp"

CSVFile::CSVFile() { filename = "../data/journals.csv";}

CSVFile::CSVFile(const std::string &new_name){
    filename = validate_filename(new_name);
}

void CSVFile::change_filename(std::string change_name) {
    filename = validate_filename(change_name);
}

void CSVFile::load_file() {
    std::string line;

    csvfile.open(filename, std::ios::in);

    if (csvfile.is_open()) {
        while (std::getline(csvfile, line)) {
            lines.push_back(line);
        }
        csvfile.close();
    }
}

void CSVFile::write_file(std::string out_file) {
    out_file = ".Data" + out_file + ".txt";

    csvfile.open(out_file, std::ios::out);
    csvfile << to_string();
    csvfile.close();
}

std::string CSVFile::validate_filename(const std::string& raw_name) {
    std::string sanitized{};

    for (const auto letter : raw_name) {
        if (std::isalnum(letter)){
            sanitized.push_back(letter);
        }
    }

    if (sanitized.length() > 2 && sanitized.length() < 20)
        return "../data" + sanitized + ".csv";
    return "../data/journals.csv";

}

std::string CSVFile::to_string() {
    std::string to_print;

    to_print.append("Current Data:\n");
    for (const auto& j : lines) {
        to_print.append(j + "\n");
    }

    return to_print;
}

void CSVFile::splitdata(const std::string &record, char delim) {
    std::vector<std::string> result;
    std::stringstream recordstream(record);
    std::string item;

    int counter = 0;

}