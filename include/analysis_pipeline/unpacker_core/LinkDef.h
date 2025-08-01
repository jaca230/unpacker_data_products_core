#if defined(__ROOTCLING__)

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

// Data products
#pragma link C++ class dataProducts::DataProduct+;
#pragma link C++ class std::vector<dataProducts::DataProduct>+;
#pragma link C++ class dataProducts::ByteStream+;
#pragma link C++ class std::vector<dataProducts::ByteStream>+;
#pragma link C++ class dataProducts::JsonProduct+;
#pragma link C++ class std::vector<dataProducts::JsonProduct>+;

#endif
