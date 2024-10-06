#include <iostream>
#include <map>
#include "doradb/entity/Entity.h"

using namespace std;

namespace db {
    class Database {
        public:
            string name;
            string workspaceId;
            map<string, Entity> entities;
            void setName(string);
            void setWorkspaceId(string);
    };
}