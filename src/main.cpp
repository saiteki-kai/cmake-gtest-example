#include <iostream>
#include "lib1/lib1.h"
#include "lib2/lib2.h"

int main() {
    int s = sum(2, 3);
    int p = mult(4, 6);

    std::cout << s << std::endl;
    std::cout << p << std::endl;
}
