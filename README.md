# Update

--- 
https://github.com/Purpursarkans/Update  
https://github.com/Purpursarkans/Update/blob/main/Update.hpp  
---

простой обновлятор для вашей программы  
просто включите заголовочный файл Update.hpp и передайте необходимые параметры  

**update(argc, argv, NameFileVersion, UrlVersion, UrlProgram, VERSION, NameProgram);**

### *argc, argv*
Стандартные параметры int main(int argc, char * argv[])



### *NameFileVersion*
Название файла в котором будет храниться версия, например  
**version**

### *UrlVersion*
Ссылка на файл **version**, где будет храниться версия, например  
**file://version**

### Пример содержания файла version
> **2**  
> **https://github.com/Purpursarkans/Update/blob/main/Example.exe?raw=true**

### *UrlProgram*
Ссылка на исполняемый файл
###### если ссылка не работает, проверьте её на curl, я использую обычный виндововский curl, по этому для проверки запустите в cmd
>curl -o test.exe -L DontWorkUrl

### *VERSION*
Текущая версия программы

### *NameProgram*
Имя исполняемого файла (без .exe)