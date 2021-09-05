#include <bits/stdc++.h>
#include "Update.hpp"

#define UrlToUpdate "https://raw.githubusercontent.com/Purpursarkans/update/main/version"
#define VERSION 2
#define NameProgram "Example"

int main(int argc, char * argv[])
{
    update(argc, argv, UrlToUpdate, VERSION, NameProgram);

    std::cout << "all update" << std::endl;

    system("pause");

    return 0;
}
