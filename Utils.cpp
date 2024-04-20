#include "Utils.h"
#include <fstream>


Utils utils();

vector<string> Utils::citesteFisier(string fileName) {
    fstream file;
    file.open("../Default.in", ios::in);
    string line;
    vector<string> lines;

    while (getline(file, line)) {
        lines.push_back(line);
    }
    return lines;
}

int Utils::citesteOptiune() {
    string optiune;
    cin >> optiune;
    try {
        int optiuneInt = stoi(optiune);
        return optiuneInt;
    } catch (const std::invalid_argument &e) {
        cout << "Nu ai introdus un numar!\n";
    }
    return -1;
}

bool Utils::verificareInterval(int x, int st, int dr) {
    if (x >= st && x <= dr)
        return true;
    cout << "Numarul ales nu se afla in intervalul dat.\n";
    return false;
}
