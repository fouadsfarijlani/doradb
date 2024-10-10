#include "Cluster.h"
#include <iostream>
#include <string>
using namespace std;

Cluster::Cluster() { cout << "New work space created" << endl; };

void Cluster::setId(string newId) { id = newId; }
