#include <gtest/gtest.h>
#include "lib1/lib1.h"

TEST(LIB1, SUM) {
    ASSERT_EQ(sum(5, 1), 6);
}
