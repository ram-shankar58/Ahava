// data_handler.cpp
#include "data_handler.h"

DataHandler::DataHandler() {
    // Initialize any necessary configurations or parameters
}

bool DataHandler::loadAggregateData(const std::string& filePath) {
    // Implementation to load aggregate data
    // Update the 'aggregateData' member variable
    // Return true if successful, false otherwise
}

bool DataHandler::loadCompanyData(const std::string& symbol, const std::string& filePath) {
    // Implementation to load company-specific data
    // Update the 'companyData' member variable
    // Return true if successful, false otherwise
}

const std::vector<MarketData>& DataHandler::getAggregateData() const {
    return aggregateData;
}

const std::vector<MarketData>& DataHandler::getCompanyData(const std::string& symbol) const {
    // Find and return the data for the specified company symbol
    for (const auto& pair : companyData) {
        if (pair.first == symbol) {
            return pair.second;
        }
    }
    // Return an empty vector if the symbol is not found
    static std::vector<MarketData> emptyData;
    return emptyData;
}
