#include "gtest/gtest.h"
#include "StableSort.hpp"


TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

struct Testing	
{
    std::pair<char, int> pair;
    bool operator >=( const Testing& obj)
    {
        return pair.second >= obj.pair.second;
    }
};

class StableSortTest : public ::testing::Test
{
    std::vector<int> vec1 = { 8, 9, 2, 3, 3, 5, 6 };
    std::vector<std::pair<char, int>> vec_of_pairs = { {'b', 3}, {'m', 8}, {'c', 8}, {'a', 1} };

protected:
    StableSortTest() {};
    ~StableSortTest() override {};


    void SetUp() override {};
    void TearDown() override {};
};

TEST_F(StableSortTest, VerifyOwnStructure)
{
    Testing input(std::make_pair('m', 1));
    auto result = utils::stableSort(input);
    ASSERT_EQ(result, expected);
}

