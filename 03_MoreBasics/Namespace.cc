#include <iostream>
//Möglichkeit damit main code kennt:
using namespace AD;
//namespaces fassen code (auch über mehrere Datein zusammen): wenn auf Funktion, struct, etc. aus namespace zugegriffen werden soll -
//name:: voranstellen

namespace AD
{
//enum = konstante Werte = CAPS LOCK
enum class Lane
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE,
};

struct Vehicle
{
    int id;
    float velocity;
    Lane lane;
};

//const, da Daten des Vehicles nur gelesen, nicht verändert werden sollen
void print_vehicle_data_reference(const Vehicle& vehicle)
{
    std::cout << vehicle.id << "\n";
    std::cout << vehicle.velocity << "\n";

    switch(vehicle.lane)
    {
        case Lane::RIGHT_LANE:
        {
            std::cout << "Vehicle is on the right lane. " << std::endl;
            break;
        }

        case Lane::CENTER_LANE:
        {
            std::cout << "Vehicle is on the center lane." << std::endl;
            break;
        }

        case Lane::LEFT_LANE:
        {
            std::cout << "Vehicle is on the left lane" << std::endl;
            break;
        }
        default:
        {
            break;
        }
    }
}

void print_vehicle_data_pointer (const Vehicle* vehicle)
{
     std::cout << vehicle->id << "\n";
    std::cout << vehicle->velocity << "\n";

    switch(vehicle->lane)
    {
        case Lane::RIGHT_LANE:
        {
            std::cout << "Vehicle is on the right lane. " << std::endl;
            break;
        }

        case Lane::CENTER_LANE:
        {
            std::cout << "Vehicle is on the center lane." << std::endl;
            break;
        }

        case Lane::LEFT_LANE:
        {
            std::cout << "Vehicle is on the left lane" << std::endl;
            break;
        }
        default:
        {
            break;
        }
    }

}
};



int main()
{
    //.id etc. ist c++20! somit weiß man welche Zahl welche Variable beschreibt
    const Vehicle first_Vehicle = {.id=1, .velocity=80.9f, .lane=Lane::CENTER_LANE};

    //mit const kann kein Wert je verändert werden, in diesem Fall erwünscht, da Funktion nur Werte ausgibt
    const auto second_Vehicle = AD::Vehicle{.id=2, .velocity=90.0f, .lane=AD::Lane::RIGHT_LANE};

    AD::print_vehicle_data_reference(first_Vehicle);

    AD::print_vehicle_data_pointer(&second_Vehicle);

    return 0;
}
