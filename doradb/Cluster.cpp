#include <string>
#include <iostream>

using namespace std;

class Cluster {
public:
  string id;

  void setId(string);

  Cluster();
};

Cluster::Cluster() { cout << "New work space created" << endl; };

void Cluster::setId(string newId) { id = newId; }
