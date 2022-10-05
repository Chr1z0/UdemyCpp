#include <iostream>
#include <string>
#include <cstdint>

enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
    UNKNOWN = 5
};

struct UserData
{
    PermissionLevel level;
    std::string user_name;
    std::uint32_t user_id;

};

void greet_permission_level(const PermissionLevel level)
{
    switch (level)
    {
    case PermissionLevel::STUDENT:
    {
        std::cout << "Hello STUDENT" << std::endl;
        break;
    }
    case PermissionLevel::TUTOR:
    {
        std::cout << "Hello TUTOR" << std::endl;
        break;
    }
    case PermissionLevel::INSTRUCTOR:
    {
        std::cout << "Hello INSTRUCTOR" << std::endl;
        break;
    }
    case PermissionLevel::ADMIN:
    {
        std::cout << "Hello ADMIN" << std::endl;
        break;
    }
    default:
    {
        std::cout << "UNKNOWN! Error!" << std::endl;
        break;
    }
    }
}

int main()
{
    //ohne Zuordnung (kein struct)
    std::uint32_t id_Jan = 10;
    std::string name_Jan = "Jan";
    PermissionLevel permission_Jan = PermissionLevel::INSTRUCTOR;

    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;
    PermissionLevel permission_level_peter = PermissionLevel::STUDENT;

    //Instanz eines vorgefertigten structs wird mit Werten erstellt
    UserData user_jan = {permission_level_jan, "Jan", 10801422 };
    //Funktion zum überprüfen des permission_levels der Instanz
    greet_permission_level(user_jan.level);

    //2. Möglichkeit eine Instanz eines structs zu initialisieren
    UserData user_peter;
    user_peter.user_name = "Peter";
    user_peter.user_id = 1080153456;
    user_peter.level = permission_level_peter;
    greet_permission_level(user_peter.level);

    return 0;
}
