#include <iostream>
#include <map>
#include "doradb/database/Database.h"

using namespace std;
using namespace db;

namespace wp {
    class Workspace {
    public:
        string id;
        map<string, Database> databases;

        void setId(string);
    };
}