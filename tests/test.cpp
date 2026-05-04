#include <cassert>
#include "../simple-calculator-balaban/calculator.h"

int main() {
    // тест додавання
    assert(add(2, 3) == 5);

    // тест віднімання
    assert(subtract(5, 3) == 2);

    return 0;
}