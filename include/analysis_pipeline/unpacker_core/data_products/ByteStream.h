#ifndef DATA_PRODUCTS_BYTESTREAM_H
#define DATA_PRODUCTS_BYTESTREAM_H

#include "DataProduct.h"
#include <cstdint>
#include <cstddef>
#include <memory>

namespace dataProducts {

class ByteStream : public DataProduct {
public:
    ByteStream();
    ~ByteStream() override;

    const uint8_t* data = nullptr;
    size_t size = 0;
    std::shared_ptr<void> owner = nullptr; //! not serialized

    void Show() const override;

    ClassDefOverride(ByteStream, 3);
};

} // namespace dataProducts

#endif // DATA_PRODUCTS_BYTESTREAM_H
