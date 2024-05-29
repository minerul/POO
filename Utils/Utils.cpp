#include "Utils.h"
#include <fstream>


Utils utils();

vector<string> Utils::readFile(string fileName) {
    fstream file;
    file.open("../Default.in", ios::in);
    string line;
    vector<string> lines;

    while (getline(file, line)) {
        lines.push_back(line);
    }
    return lines;
}

int Utils::readOption() {
    string option;
    cin >> option;
    try {
        int optionInt = stoi(option);
        return optionInt;
    } catch (const std::invalid_argument &e) {
        cout << "Nu ai introdus un numar!\n";
    }
    return -1;
}

int Utils::readOption(int st, int dr) {
    string option;
    cin >> option;
    try {
        int optionInt = stoi(option);
        if (optionInt >= st && optionInt <= dr)
            return optionInt;
        else cout<<"Nu ai introdus un numar valid!\n";
    } catch (const std::invalid_argument &e) {
        cout << "Nu ai introdus un numar!\n";
    }
    return -1;
}

bool Utils::isNumberInInterval(int x, int st, int dr) {
    if (x >= st && x <= dr)
        return true;
    cout << "Numarul ales nu se afla in intervalul dat.\n";
    return false;
}