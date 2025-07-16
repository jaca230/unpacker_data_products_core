#ifndef DATA_PRODUCTS_BYTESTREAM_H
#define DATA_PRODUCTS_BYTESTREAM_H

#include "DataProduct.h"
#include <vector>
#include <cstdint>

namespace dataProducts {

    class ByteStream : public DataProduct {
    public:
        ByteStream();
        explicit ByteStream(std::vector<uint8_t> data);
        ~ByteStream() override;

        const std::vector<uint8_t>& buffer() const;
        std::vector<uint8_t>& buffer();
        void SetBuffer(std::vector<uint8_t> data);

        void Show() const override;

    private:
        std::vector<uint8_t> buffer_;

        ClassDefOverride(ByteStream, 1);
    };

} // namespace dataProducts

#endif // DATA_PRODUCTS_BYTESTREAM_H
