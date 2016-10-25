#include "test_vector.h"

#include "Utest.h"

int main() {
  utest::BasicTestReporter reporter;
  utest::root().run();
  utest::root().report(&reporter);
  return utest::root().result() ? 0 : 1;
}
