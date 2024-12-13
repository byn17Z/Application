
#include "Compile.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    // you need absolute path to use gettoken
    /*
    auto token=gettoken("/Users/zhaokunxiang/clion/compiler/Test/source1.cpp");
    auto tree= buildASTTree(token);// it do not support struct now
    auto sym=analysis(tree);
    tree.getNode();
    */
    if (argc == 3) {
        compile(argv[1], argv[2]);
    }
    // string input;
    // string file = "";
    // string path = "";
    // getline(cin, input);
    // if (input.length() == 0) {return 0;}
    // else {
    //     for (int i = 0; i < input.length(); i++) {
    //         if (input[i] == '|') {
    //             if (i >= input.length()-1) {break;}
    //             for (int j = i+1; j < input.length(); j++) {
    //                 path += input[j];
    //             }
    //             break;
    //         }
    //         file += input[i];
    //     }
    // }
    // compile(file, path);
    return 0;
        }
