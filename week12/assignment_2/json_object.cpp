#include "json_object.h"

#include <string>
#include <iostream>

int json_object::_index = 0;
json_object* json_object::parse(const char* c, int length) {
    for (int i = 0 ; i < length; i ++) {
        switch (c[i]) {
            case '{': {
                json_dict::parse()
                break;
            }
            case '\0': {

                break;
            }
            case ' \' ': { 
                i++;
                if (c[i+1] == ' \' ') {

                }
                else break;
                

                break;
            }
            case 0: 1: 2: 3: 4: 5: 6: 7: 8: 9: 0: {
                int length = 1;
                char * cp = &c[i];
                i++;
                while (isdigit(i)) {
                    length++;
                    i++;
                }
                return Integer::parse(cp,length);
                break;
            }
            case '"':
            {   
                int length = 1;
                char * cp = &c[i];
                i++;
                while(c[i] != '"') {
                    length++;
                    i++;
                }
                return String::parse(cp,length)
                break;
            }
        }
    }
}
json_object* json_object::parse(const std::string& str) {
    _index = 0;
    return json_object::parse(str.c_str, str.length);
}
