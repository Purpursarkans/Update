///original file
///				 https://github.com/Purpursarkans/Update
///			 	 https://github.com/Purpursarkans/Update/blob/main/Update.hpp
                
///you can see this file in my other projects, the versions of the files will be different and, perhaps, the code in them will be different, so if you want to see get the latest version of the file, open the original using the links above

///вы можете увидеть этот файл в других моих проектах, версии файлов могут быть другими и, возможно, код в них будет другим, поэтому, если вы хотите увидеть, последнюю версию файла, откройте оригинал по ссылкам выше

#ifndef UPDATE_HPP
#define UPDATE_HPP

#include <bits/stdc++.h>

void update(int argc, char *argv[], std::string NameFileVersion, std::string sVersionUrl, int VERSION, std::string exeName)
{
    static std::string exeNameCopy = exeName + "2";

    for (int i = 1; i < argc; i++)
    {
        std::string temp = argv[i];
        if (temp == "-u")
        {
            std::string copy_ = "copy " + exeNameCopy + ".exe " + exeName + ".exe /Y";
            system(copy_.c_str());

            std::string start = "start cmd /C \"" + exeName + ".exe -d\"";
            system(start.c_str());
            exit(0);
        }
        else if (temp == "-d")
        {
            std::string remove_ = exeNameCopy + ".exe";
            while (remove(remove_.c_str())) {}

            std::string start = "start " + exeName + ".exe";
            system(start.c_str());
            exit(0);
        }
    }

    std::string downloadVersion = "curl -o version -L " + sVersionUrl;
    system(downloadVersion.c_str());

    std::ifstream rFile(NameFileVersion);
    std::string versionS;
    std::string downloadFileUrl;
    std::getline(rFile, versionS);
    std::getline(rFile, downloadFileUrl);
    int versionI = std::stoi(versionS);

    rFile.close();

    if (versionI > VERSION)
    {
        std::cout << "Need update" << std::endl;
        std::cout << "Start update" << std::endl;

        std::string curl = "curl -o " + exeNameCopy + ".exe " + "-L " + downloadFileUrl + " && start cmd /C \"" + exeNameCopy + ".exe -u\"";
        system(curl.c_str());
        exit(0);
    }
    else if (versionI == VERSION)
    {
        std::cout << "All update" << std::endl;
    }
    else if (versionI < VERSION)
    {
        std::cout << "You have a newer version" << std::endl;
    }
    else
    {
        std::cout << "I dont know what happens" << std::endl;
    }
}

#endif