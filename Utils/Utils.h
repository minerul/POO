#ifndef POO_UTILS_H
#define POO_UTILS_H
#include <iostream>
#include <vector>
using namespace std;

class Utils {
public:

    vector<string> readFile(string fileName);
    static int readOption();
    bool isNumberInInterval(int x, int st, int dr);
};


#endif
