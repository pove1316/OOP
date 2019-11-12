include "vehicle.cpp"
class car: vehicle {
    char* car_name;
    car() {
        has_name = false;
    }
    car (int i , int j ) {
        wheel_number = i;
        max_speed = j;
    }
    car (int i , int j, char * c )  {
        wheel_number  = i;
        max_speed = j;
        car_name = c;
        }
    car (int i, int j, char *c, bool b) {
        wheel_num = i;
        max_speed = j;
        car_name = c;
        has_name = b;
    }
    char* get_car_name() {
        return car_name;
    }
    const char* get_class_name() {
        return "car";}
    void set_car_name(char* c ) {
        car_name = c;
    }
}


