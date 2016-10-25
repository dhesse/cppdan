#ifndef CPPDAN_VECTOR_H
#define CPPDAN_VECTOR_H

#include <vector>

namespace cppdan {
  class vector {
  public:
    vector(std::size_t n) : rep_(n) { }
  private:
    std::vector<double> rep_;
  };
}

#endif //CPPDAN_VECTOR_H
