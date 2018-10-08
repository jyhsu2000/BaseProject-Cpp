#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
}

void testMinusNumber() {
    assert(minusNumber(5, 2) == 3);
}

int main() {
    assert(addNumber(5, 2) == 7);
    testMinusNumber();
    testGetTriangleType();
    return 0;
}
