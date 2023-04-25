#include "Magazine.hpp"

XMLFiles::XMLFiles(){ filename = "/Data/magazine.xml";}

XMLFiles::XMLFiles(const std::string &new_name){
    filename = validate_filename(new_name);
}

void XMLFiles::change_filename(std::string change_name) {
    filename = validate_filename(change_name);
}

void XMLFiles::load_file() {
    std::string line;
    std::cout << "load file filename: " << filename << "\n";

    XMLFile.open(filename, std::ios::in);

    if (XMLFile.is_open()) {
        while(std::getline(XMLFile, line)){
            lines.push_back(line);
        }
    }
    XMLFile.close();

    split_data();
}

void XMLFiles::write_file(std::string out_file) {
    std::string output_file = "../Data/" + out_file + ".txt";

    XMLFile.open(output_file, std::ios::out);
    XMLFile << to_string();
    XMLFile.close();

}

void XMLFiles::split_data(){

    std::string line_item;
    info_to_print xml_file_object;
    int counter = 0;

    // will be using similar logic to that which was given to us for the CSV handling
    for (const auto & each : lines){
        switch(counter){
            // logic - using substr(index, length) set index to the first instance of > + 1, and the length as the (2nd < index) - (/ index) - 2
            // case 0 and 6 will be <magazine> lines so will increment from 0 and use 6 to push to vector of structs and reset counter
            case 0:
                counter++;

                break;

            case 1:
                xml_file_object.Name = each.substr(each.find('>') + 1, (each.find('/') - each.find('>')) - 2);
                counter++;
                break;

            case 2:
                xml_file_object.Location = each.substr(each.find('>') + 1, (each.find('/') - each.find('>')) - 2);
                counter++;
                break;

            case 3:
                xml_file_object.Employees = std::stoi(each.substr(each.find('>') + 1, (each.find('/') - each.find('>')) - 2));
                counter++;
                break;

            case 4:
                xml_file_object.Founded = std::stoi(each.substr(each.find('>') + 1, (each.find('/') - each.find('>')) - 2));
                counter++;
                break;
            case 5:
                xml_file_object.Founder = each.substr(each.find('>') + 1, (each.find('/') - each.find('>')) - 2);
                counter++;
                break;
            case 6:
                counter = 0;
                entries.push_back(xml_file_object);
                break;
        }
    }
}

std::string XMLFiles::validate_filename(const std::string& raw_name) {
    std::string sanitized{};

    for (const auto letter: raw_name) {
        if (std::isalnum(letter)) {
            sanitized.push_back(letter);
        }
    }

    std::cout << "sanitized: " << sanitized << "\n";

    if (sanitized.length() > 2 && sanitized.length() < 20) {
        return "../Data/" + sanitized + ".xml";
    }

    return "../Data/magazine.xml";
}

std::string XMLFiles::to_string() {
    std::string to_print;

    to_print.append(xml_info.Name);
    to_print.append("\t");
    to_print.append(xml_info.Location);
    to_print.append("\t");
    to_print.append(xml_info.Employees);
    to_print.append("\t");
    to_print.append(xml_info.Founded);
    to_print.append("\t");
    to_print.append(xml_info.Founder);
    to_print.append("\n");

    return to_print;
}