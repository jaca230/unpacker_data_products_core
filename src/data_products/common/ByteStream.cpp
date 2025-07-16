#include "data_products/common/ByteStream.h"
#include <iostream>
#include <iomanip>
#include <sstream>

ClassImp(dataProducts::ByteStream)

namespace dataProducts {

    ByteStream::ByteStream() = default;

    ByteStream::ByteStream(std::vector<uint8_t> data)
        : buffer_(std::move(data)) {}

    ByteStream::~ByteStream() = default;

    const std::vector<uint8_t>& ByteStream::buffer() const {
        return buffer_;
    }

    std::vector<uint8_t>& ByteStream::buffer() {
        return buffer_;
    }

    void ByteStream::SetBuffer(std::vector<uint8_t> data) {
        buffer_ = std::move(data);
    }

    void ByteStream::Show() const {
        std::ostringstream oss;
        oss << "ByteStream size = " << buffer_.size();
        if (!buffer_.empty()) {
            oss << ", first 8 bytes: ";
            for (size_t i = 0; i < std::min(buffer_.size(), size_t(8)); ++i) {
                oss << std::hex << std::setw(2) << std::setfill('0')
                    << static_cast<int>(buffer_[i]) << " ";
            }
        }
        std::cout << oss.str() << std::endl;
    }

} // namespace dataProducts
