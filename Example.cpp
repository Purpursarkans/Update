#include <bits/stdc++.h>
#include "Update.hpp"

#define NameFileVersion "version"
#define UrlVersion "https://raw.githubusercontent.com/Purpursarkans/update/main/version"
#define VERSION 1
#define NameProgram "Example"

int main(int argc, char * argv[])
{
    update(argc, argv, NameFileVersion, UrlVersion, VERSION, NameProgram);

    std::cout << "hello" << std::endl;
    system("pause");

    return 0;
}
