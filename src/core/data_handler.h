// data_handler.h
#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

struct MarketData {
    std::string date;
    double open;
    double high;
    double low;
    double close;
    int volume;
    std::string symbol;
    // Add more fields as needed
};

class DataHandler {
public:
    // Constructor
    DataHandler();

    // Load aggregate historical data
    bool loadAggregateData(const std::string& filePath);

    // Load company-specific historical data
    bool loadCompanyData(const std::string& symbol, const std::string& filePath);

    // Accessors
    const std::vector<MarketData>& getAggregateData() const;
    const std::vector<MarketData>& getCompanyData(const std::string& symbol) const;

private:
    // Data structures to store historical data
    std::vector<MarketData> aggregateData;
    std::vector<std::pair<std::string, std::vector<MarketData>>> companyData; // Symbol, Data
};

