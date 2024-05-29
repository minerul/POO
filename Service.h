#ifndef POO_SERVICE_H
#define POO_SERVICE_H

#include <vector>
#include "Utils/Utils.h"

template <class T>
class Service {
protected:
    std::vector<T> items;
    Utils utils;

public:
    Service() {}

    virtual ~Service() {}

    virtual void addItem(T item) {
        items.push_back(item);
    }

    virtual void viewItems() {
        utils.show(items);
    }

    const std::vector<T>& getItems() const {
        return items;
    }
};

#endif //POO_SERVICE_H