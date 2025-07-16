#include "data_products/common/ByteStream.h"
#include <iostream>
#include <iomanip>
#include <sstream>

ClassImp(dataProducts::ByteStream)

namespace dataProducts {

ByteStream::ByteStream() = default;
ByteStream::~ByteStream() = default;

void ByteStream::Show() const {
    std::ostringstream oss;
    oss << "ByteStream size = " << size;
    if (data && size > 0) {
        oss << ", first 8 bytes: ";
        for (size_t i = 0; i < std::min(size, size_t(8)); ++i) {
            oss << std::hex << std::setw(2) << std::setfill('0')
                << static_cast<int>(data[i]) << " ";
        }
    }
    std::cout << oss.str() << std::endl;
}

} // namespace dataProducts
