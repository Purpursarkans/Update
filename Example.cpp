#include <bits/stdc++.h>
#include "Update.hpp"

#define VERSION 2

int main(int argc, char * argv[])
{
    update(argc, argv, "https://raw.githubusercontent.com/Purpursarkans/update/main/version", VERSION, "Example");

    std::cout << "all update" << std::endl;

    system("pause");

    return 0;
}
