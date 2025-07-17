// JsonProduct.h
#ifndef DATA_PRODUCTS_JSONPRODUCT_H
#define DATA_PRODUCTS_JSONPRODUCT_H

#include "analysis_pipeline/unpacker_core/data_products/DataProduct.h"
#include <string>
#include <nlohmann/json.hpp>

namespace dataProducts {

class JsonProduct : public DataProduct {
public:
    JsonProduct();
    ~JsonProduct() override;

    // Public POD string storing JSON text
    std::string jsonString;

    // Parse and return the JSON object from jsonString
    nlohmann::json toJson() const;

    void Show() const override;

    ClassDefOverride(JsonProduct, 1);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_JSONPRODUCT_H
