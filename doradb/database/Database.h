#include <iostream>
using namespace std;

namespace db {
    class Database {
        public:
            string name;
            string workspaceId;
            void setName(string);
            void setWorkspaceId(string);
    };
}