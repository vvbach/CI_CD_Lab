#include "triangle.cpp"
#include <gtest/gtest.h>
 
TEST(AreaTest, RandomData) { 
    EXPECT_EQ(1, 0.5 - Area(2, 3, 1, 5, 2, 4)< 10e-9);
}
 
TEST(PerimeterTest, RandomData) {
    EXPECT_EQ(1, 4.65028 - Perimeter(2, 3, 1, 5, 2, 4)  < 10e-9);
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}