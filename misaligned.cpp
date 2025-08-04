#include <iostream>
#include <vector>
#include <string>
#include <cassert>

// Define colors as string literals
const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

// Structure to hold a color map entry
struct ColorMapEntry {
    int number;
    std::string major;
    std::string minor;
};

// Function to generate the color map entries
std::vector<ColorMapEntry> generateColorMap() {
    std::vector<ColorMapEntry> colorMap;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            colorMap.push_back({i * 5 + j, majorColor[i], minorColor[j]});
        }
    }
    return colorMap;
}

// Function to print the color map entries with proper alignment
void printColorMap(const std::vector<ColorMapEntry>& colorMap) {
    std::cout << "Number | Major Color | Minor Color\n";
    std::cout << "---------------------------------\n";
    for (const auto& entry : colorMap) {
        std::cout << entry.number << "      | " 
                  << entry.major << "       | " 
                  << entry.minor << "\n";
    }
}


