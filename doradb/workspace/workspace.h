#include <iostream>
#include <map>
#include <doradb/database/Database.h>

using namespace std;
using namespace db;

namespace workspace {
    class Workspace {
    public:
        string id;
        map<string, Database> databases;
    };
}