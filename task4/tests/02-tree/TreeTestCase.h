//
// Created by akhtyamovpavel on 5/1/20.
//


#pragma once

#include <gtest/gtest.h>
#include <boost/filesystem/path.hpp>
#include <boost/filesystem.hpp>
#include "Tree.h"

class TreeTestCase : public ::testing::Test {
protected:
    void SetUp() override {
        boost::filesystem::create_directory("test");
        boost::filesystem::create_directory("test/test_inner");
        boost::filesystem::create_directory("test/test_inner1");
        FileNode non_dir = {"nondir", false, {}};
        inner_node1 = {"test_inner1", true, {non_dir}};
        inner_node = {"test_inner", true, {}};
        fake_dir = {"test", false, {inner_node, inner_node1}};
        node = {"test", true, {inner_node, inner_node1}};
        fake_children = {"test", true, {node}};
        file_node = {"bash", false, {}};
    }
    void TearDown() override {
        boost::filesystem::remove_all("test");
    }
    FileNode inner_node, inner_node1;
    FileNode node;
    FileNode fake_dir;
    FileNode fake_children;
    FileNode file_node;
};


