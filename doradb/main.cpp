#include <iostream>
#include "workspace/Workspace.h"

using namespace std;
using namespace wp;

int main () {
    Workspace workspace = new Workspace();
    workspace.setId("1");
    cout << "new workspace creted: " << workspace.id;

    return 0;
};
