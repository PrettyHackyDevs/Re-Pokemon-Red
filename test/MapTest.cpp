#include "Map.h"

int main() {
    std::cout<<"hello Map"<<std::endl;

    std::vector<short int> testVectorMap1  = {  9,   9,   9,   9,   9,   9,   9,   9,   9};
    std::vector<short int> testVectorMap2  = {  9,   0,   0,   0,   0,   0,   0,   0, 100};
    std::vector<short int> testVectorMap3  = {  9,   0,   0,   0,   0,   0,   0,   0,   9};
    std::vector<short int> testVectorMap4  = {  9,   0,   0,   0,   0,   0,   9,  -1,   9};
    std::vector<short int> testVectorMap5  = {  9,   0,   0,   0,   0,   0,   9,   9,   9};
    std::vector<short int> testVectorMap6  = {  9,   0,   0,   0,   0,   0,   0,   0,   9};
    std::vector<short int> testVectorMap7  = {  9,   0,   0,   0, 100,   9,   0,   0,   9};
    std::vector<short int> testVectorMap8  = {  9,   0,   0,   0,   0,   0,   0, 100,   9};
    std::vector<short int> testVectorMap9  = {  9,   0,   0,   0,   0,   0,   0, 100,   9};
    std::vector<short int> testVectorMap10 = {  9,   0,   0,   0,   0,   0,   0,   9,   9};
    std::vector<short int> testVectorMap11 = {  9,   0,   0, 100, 100,   0,   0,   9,   9};
    std::vector<short int> testVectorMap12 = {  9,   0,   0,   0,   0,   0,   0, 100,   9};
    std::vector<short int> testVectorMap13 = {  9,   9,   9,   9,   9,   9,   9,   9,   9};

    std::vector<std::vector<short int>> testVectorMap;

    testVectorMap.push_back(testVectorMap1);
    testVectorMap.push_back(testVectorMap2);
    testVectorMap.push_back(testVectorMap3);
    testVectorMap.push_back(testVectorMap4);
    testVectorMap.push_back(testVectorMap5);
    testVectorMap.push_back(testVectorMap6);
    testVectorMap.push_back(testVectorMap7);
    testVectorMap.push_back(testVectorMap8);
    testVectorMap.push_back(testVectorMap9);
    testVectorMap.push_back(testVectorMap10);
    testVectorMap.push_back(testVectorMap11);
    testVectorMap.push_back(testVectorMap12);
    testVectorMap.push_back(testVectorMap13);

    Map testMap(testVectorMap, "testMap");

}