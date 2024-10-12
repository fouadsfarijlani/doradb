#include "../../cluster/Cluster.h"
#include <gtest/gtest.h>
#include <iostream>


class TestCluster : public testing::Test{
    protected:
        TestCluster() {
            c1.setId("some ID");
        };

    Cluster c1;
};

TEST_F(TestCluster, setIdWorks) { 
    EXPECT_EQ(c1.id, "some ID");
};