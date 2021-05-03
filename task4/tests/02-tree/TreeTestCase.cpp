//
// Created by akhtyamovpavel on 5/1/20.
//


#include "TreeTestCase.h"
#include "Tree.h"

TEST_F(TreeTestCase, test_get_tree) {
    EXPECT_TRUE(GetTree("test/test_inner", true).children.empty());
    EXPECT_TRUE(GetTree("test/test_inner", false).children.empty());
    EXPECT_EQ(GetTree("test", true).children.size(), 2);
    EXPECT_EQ(GetTree("test", false).children.size(), 2);
    EXPECT_NO_THROW(GetTree("..", false));
    EXPECT_NO_THROW(GetTree("..", true));
    EXPECT_THROW(GetTree("non-existent123123123", true), std::invalid_argument);
    EXPECT_THROW(GetTree("/usr/bin/bash", true), std::invalid_argument);
    EXPECT_THROW(GetTree("non-existent123123123", false), std::invalid_argument);
    EXPECT_THROW(GetTree("/usr/bin/bash", false), std::invalid_argument);
}

TEST_F(TreeTestCase, test_filter_empty_nodes) {
    EXPECT_NO_THROW(FilterEmptyNodes(file_node, "/usr/bin"));
    FilterEmptyNodes(node, "test");
    EXPECT_FALSE(boost::filesystem::exists("test/test_inner"));
}

TEST_F(TreeTestCase, test_eq) {
    EXPECT_TRUE(node == node);
    EXPECT_FALSE(node == inner_node);
    EXPECT_FALSE(node == fake_dir);
    EXPECT_FALSE(file_node == node);
    EXPECT_FALSE(node == fake_children);
}