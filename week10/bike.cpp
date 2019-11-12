include "vehicle.cpp"

class bike : vehicle {
    char* bike_name;
    int bike_number;
    bike() {
        has_name = false;
    }
    bike(int i, int j) {
        wheel_number = i;
        max_speed = j;
    }
    bike(int i, int j, char* c) {
        wheel_number = i;
        max_speed = j;
        bike_name = c;
    }
    bike(int i, int j, char* c , int b) { 
        wheel_number = i;
        max_speed = j;
        bike_name = c;
        bike_number = b;
    }
    bike(int i, int j, char* c , int b , bool o) {
        wheel_number = i;
        max_speed = j;
        bike_name = c;
        bike_number = b;
        has_name = o;
    }
    int get_bike_number() {
        return bike_number;
    }
    char* get_bike_name() {
        return bike_name;
    }
    const char* get_class_name() {
        return "bike";
    }
    void set_bike_name(char* c) {
        bike_name = c;
    }
    void set_bike_number(int i) {
        bike_number = i;
    }
 }






