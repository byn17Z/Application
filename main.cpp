
#include "Compile.h"
#include <iostream>
using namespace std;

int main(){
    // you need absolute path to use gettoken
    /*
    auto token=gettoken("/Users/zhaokunxiang/clion/compiler/Test/source1.cpp");
    auto tree= buildASTTree(token);// it do not support struct now
    auto sym=analysis(tree);
    tree.getNode();
    */
    string file;
    string path;
    cout << "src file: " << endl;
    getline(cin, file);
    cout << "target path: " << endl;
    getline(cin, path);
    compile(file, path);
    return 0;
        }
