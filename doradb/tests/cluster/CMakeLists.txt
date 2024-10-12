add_executable(cluster_test cluster_test.cpp)
target_link_libraries(cluster_test PRIVATE GTest::gtest_main cluster)
add_test(cluster_gtest cluster_test)