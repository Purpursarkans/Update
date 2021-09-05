#include <bits/stdc++.h>
#include "Update.hpp"

#define NameFileVersion "version"
#define UrlVersion "https://raw.githubusercontent.com/Purpursarkans/update/main/version"
#define UrlProgram "https://github.com/Purpursarkans/Update/blob/main/Example.exe?raw=true"
#define VERSION 2
#define NameProgram "Example"

int main(int argc, char * argv[])
{
    update(argc, argv, NameFileVersion, UrlVersion, UrlProgram, VERSION, NameProgram);

    std::cout << "all update" << std::endl;

    system("pause");

    return 0;
}
