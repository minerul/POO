#ifndef POO_UTILS_H
#define POO_UTILS_H
#include <iostream>
#include <vector>
using namespace std;

class Utils {
public:

    vector<string> citesteFisier(string fileName);
    static int citesteOptiune(); // citeste o optiune si verifica daca e int
    bool verificareInterval(int x, int st, int dr);
};


#endif
