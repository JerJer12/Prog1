#include <iostream>
#include "list.h"

int main() {
    List<int> lst;
    lst.push_back(3);
    lst.push_back(4);
    lst.push_front(3);
    lst.push_front(4);

    for (auto i : lst)
        std::cout << i << " ";
}