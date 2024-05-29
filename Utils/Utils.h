#ifndef POO_UTILS_H
#define POO_UTILS_H

#include <iostream>
#include <vector>
#include "../Store/Product/Product.h"

using namespace std;

class Utils {
public:

    vector<string> readFile(string fileName);

    static int readOption();

    static bool isNumberInInterval(int x, int st, int dr);

    static int readOption(int st, int dr);
    template<typename T>
    static void show(const std::vector<T> &vec) { // pentru products si receipts
        for (int i = 0; i < vec.size(); i++) {
            cout << i + 1 << "." << vec[i];
        }
        cout << endl;
    }

    static void show(const std::vector<string> &vec) { // template specialization
        for (int i = 0; i < vec.size(); i++) {
            cout<<vec[i]<<".\n";
        }
        std::cout << std::endl;
    }
};


#endif