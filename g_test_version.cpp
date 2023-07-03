#include "lib.h"
#include <gtest/gtest.h>

TEST(VersionTest, ValidVersion) {
    ASSERT_GT(version(), 0);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
