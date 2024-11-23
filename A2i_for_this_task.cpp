#include <iostream>
#include "ArrayGenerator.h"
#include "SortTester.h"

using namespace std;
using namespace A2i;

int main() {
    vector<int> original(10000, 0);

    // Генерация массива
    original = ArrayGenerator::GenerateArray(original, 10000, 3);

    for (int n = 500; n <= 10000; n += 100) {
        std::vector<int> array(original.begin(), original.begin() + n);

        // Замер времени сортировки
        SortTester::MeasureSortTime(array, n);
    }

    return 0;
}