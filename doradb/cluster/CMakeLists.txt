add_library(cluster STATIC Cluster.cpp)
target_include_directories(cluster PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/cluster)
