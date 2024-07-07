#include <iostream>
#include <unistd.h>
#include <limits.h>

using namespace std;

void displayPrompt() {
    char systemname[HOST_NAME_MAX];
    char username[LOGIN_NAME_MAX];
    char current_directory[PATH_MAX];

    if (gethostname(systemname, HOST_NAME_MAX) != 0) {
        perror("gethostname");
        return;
    }
 
    if (getlogin_r(username, LOGIN_NAME_MAX) != 0) {
        perror("getlogin_r");
        return;
    }
   
    if (getcwd(current_directory, PATH_MAX) == nullptr) {
        perror("getcwd");
        return;
    }
 
    cout << username << "@" << systemname << ":" << current_directory << "> ";
}





