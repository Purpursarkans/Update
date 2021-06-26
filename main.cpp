#include <bits/stdc++.h>
using namespace std;

void update(int argc, char* argv[])
{
    static int sVersionI = 1;
    static string sVersionU = "https://raw.githubusercontent.com/Purpursarkans/update/main/version";
    static string exeName = "update";

    static string exeNameCopy = exeName + "2";

    for(int i = 1; i < argc; i++)
    {
        string temp = argv[i];
        if(temp == "-u")
        {
            string copy_ = "copy " + exeNameCopy + ".exe " + exeName + ".exe /Y";
            system(copy_.c_str());

            string start = "start cmd /C \"" + exeName + ".exe -d\"";
            system(start.c_str());
            exit(0);
        }
        if(temp == "-d")
        {
            string remove_ = exeNameCopy + ".exe";
            while(remove(remove_.c_str())){}

            string start = "start " + exeName + ".exe";
            system(start.c_str());
            exit(0);
        }
    }

    string downloadVersion = "curl -o version -L " + sVersionU;
    system(downloadVersion.c_str());

    ifstream rFile("version");
    string versionS;
    string downloadUrl;
    getline(rFile, versionS);
    getline(rFile, downloadUrl);
    int versionI = stoi(versionS);

    rFile.close();
    remove("version");

    if(versionI > sVersionI)
    {
        cout << "Need update" << endl;
        cout << "Start update" << endl;

        string curl = "curl -o " + exeNameCopy + ".exe " + "-L " + downloadUrl
                    + " && start cmd /C \"" + exeNameCopy + ".exe -u\"";
        system(curl.c_str());
               exit(0);
    }
}

int main(int argc, char * argv[])
{
    update(argc, argv);

    cout << "all update" << endl;

    system("pause");

    return 0;
}
