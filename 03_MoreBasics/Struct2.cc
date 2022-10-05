#include <iostream>

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

void print_vehicle_data_reference(Vehicle& vehicle)
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

void print_vehicle_data_pointer (Vehicle* vehicle)
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

int main()
{
    //.id etc. ist c++20! somit weiß man welche Zahl welche Variable beschreibt
    Vehicle first_Vehicle = {.id=1, .velocity=80.9f, .lane=Lane::CENTER_LANE};
    print_vehicle_data_reference(first_Vehicle);

    print_vehicle_data_pointer(&first_Vehicle);

    return 0;
}
