#include "misalinged.h"
// Test function to verify the generation of the color map
void testGenerateColorMap() {
    std::vector<ColorMapEntry> colorMap = generateColorMap();
    assert(colorMap.size() == 25);
    // Additional tests can be added here to verify content correctness
    std::cout << "Color map generation test passed.\n";
}

int main() {
    testGenerateColorMap();
    std::vector<ColorMapEntry> colorMap = generateColorMap();
    printColorMap(colorMap);
    return 0;
}

