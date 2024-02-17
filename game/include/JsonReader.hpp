#pragma once
#include <json/json.h>

#include <fstream>
#include <iostream>

class JsonReader {
   private:
    Json::Value root;

   public:
    JsonReader(std::string fileName_);
    Json::Value getRoot();

    int getIntValue(std::string object, std::string property, int defaultValue);
};