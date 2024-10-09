#include "Cluster.cpp"
#include <iostream>

using namespace std;

int main() {
  Cluster cluster;
  cluster.setId("1");
  cout << "new workspace creted: " << cluster.id;

  return 0;
};
