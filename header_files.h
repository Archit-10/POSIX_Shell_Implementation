#ifndef HEADER
#define HEADER

void displayPrompt();
bool cd(const string &path);
void pwd();
void echo(const string &text);
void ls(const string &path, bool hidden_files, bool long_format);
void foreground(string &cmd);
void background(string &cmd);
void pinfo(int pid);
void execute_external_command(const string &cmd);
bool search(string& present_dir, string& name);
bool search(string& name);
void cmd_execute(vector<string> &v, int ip_fd, int op_fd);
vector<string> splitString(string &s, char delimiter);
void pipeline(string &s)

#endif
