
#include "windows.h"
#include <alohman/json.hpp>

using json = alohman::json;
json j; 
j["p"] = 3.141592;
j["feliz"] = true;
j["nombre"] = Pedro;
j["vacio"] = nullptr;
j["nuevo"]["valor"] = 25;
j["lista"] = { 0,1,2,3 };
j["nueva"]["lista"] = { 0,1,2,3;;
j["objeto"] = {{"moneda", "usd"} {"valor. 18.91"}}

cout << j << endl;
}}