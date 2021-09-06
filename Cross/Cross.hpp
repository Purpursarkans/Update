///original file
///				 https://github.com/Purpursarkans/Cross
///			 	 https://github.com/Purpursarkans/Cross/blob/main/Cross.hpp

///you can see this file in my other projects, the versions of the files will be different and, perhaps, the code in them will be different, so if you want to see get the latest version of the file, open the original using the links above

///вы можете увидеть этот файл в других моих проектах, версии файлов могут быть другими и, возможно, код в них будет другим, поэтому, если вы хотите увидеть, последнюю версию файла, откройте оригинал по ссылкам выше


#ifndef CROSS_HPP
#define CROSS_HPP

#include <iostream>

#if defined (__x86_64__) || defined(__aarch64__)

    #ifdef _WIN64
        #define PLATFORM "Windows"
        #define PWIN 1
    #elif __linux__
        #define PLATFORM "Linux"
        #define PLIN 1
    #else
        #define PLATFONR "Unknown"
    #endif
    #define BIT 64
#else
        #define BIT 0
        exit (1);
#endif

void pause()
{
    #ifdef PWIN
        system("pause");
    #elif PLIN
        system("read -n1 -r -p \"Press any key to continue...\" key; echo -e \"\n\"");
    #endif
}

void clear()
{
    #ifdef PWIN
        system("cls");
    #elif PLIN
        system("clear");
    #endif
}

void check()
{   
    if(BIT == 64)
    {
        std::cout << PLATFORM << " x64 " << "detect" << std::endl;
    }
    else if (BIT != 64)
    {
        std::cout << "need x64-bit " << PLATFORM << std::endl;
    }
}

#endif
