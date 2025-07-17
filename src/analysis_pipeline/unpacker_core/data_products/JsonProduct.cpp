// JsonProduct.cpp
#include "analysis_pipeline/unpacker_core/data_products/JsonProduct.h"
#include <iostream>

ClassImp(dataProducts::JsonProduct)

namespace dataProducts {

JsonProduct::JsonProduct() = default;
JsonProduct::~JsonProduct() = default;

nlohmann::json JsonProduct::toJson() const {
    try {
        return nlohmann::json::parse(jsonString);
    } catch (const std::exception& e) {
        std::cerr << "JsonProduct: Failed to parse JSON string: " << e.what() << std::endl;
        return nlohmann::json{};
    }
}

void JsonProduct::Show() const {
    DataProduct::Show();
    std::cout << "JsonProduct JSON string (truncated): "
              << (jsonString.size() > 100 ? jsonString.substr(0, 100) + "..." : jsonString)
              << std::endl;
}

} // namespace dataProducts
