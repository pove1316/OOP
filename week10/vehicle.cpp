class vehicle {
    bool has_name;
    int wheel_number;
    int max_speed;
    Vehicle() {
        has_name = false;
    }
    Vehicle(int v, int w ) {
        wheel_number = v;
        max_speed = w;
    }
    Vehicle(int i, int j, bool x) {
        wheel_number = i;
        max_speed = j;
        has_name = x;
    }
    int get_wheel_number() {
        return wheel_number;
    }
    int get_max_speed() {
        return max_speed;
    }
    bool get_has_name() {
        return has_name;
    }
    const char* get_class_name() {
        return "Vehicle";
    }

    void set_wheel_number(int n ) {
        wheel_number = n;
    }
    void set_max_speed(int s) {
        max_speed = s;
    }
    void set_has_name(bool b) {
        has_name = b;
    }




}

