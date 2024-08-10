#include "vehicle_purchase.h"

const std::string LICENSE_VEHICLE_01{ "car" };
const std::string LICENSE_VEHICLE_02{ "truck" };
const std::string CHOSEN_VEHICLE_MSG{ " is clearly the better choice." };
const double OLD_VEHICLE{ 10.0 };
const double USED_VEHICLE{ 3.0 };
const double DISCOUNT_OLD_VEHICLE{ 0.5 };
const double DISCOUNT_USED_VEHICLE{ 0.7 };
const double DISCOUNT_NEWISH_VEHICLE{ 0.8 };

namespace vehicle_purchase {
    bool needs_license(std::string kind) {
        return kind == LICENSE_VEHICLE_01 || kind == LICENSE_VEHICLE_02;
    }

    std::string choose_vehicle(std::string option1, std::string option2) {
        if (option1 > option2) {
            return option2 + CHOSEN_VEHICLE_MSG;
        }
        else {
            return option1 + CHOSEN_VEHICLE_MSG;
        }
    }

    double calculate_resell_price(double original_price, double age) {
        if (age >= OLD_VEHICLE) {
            return original_price * DISCOUNT_OLD_VEHICLE;
        }
        else if (age < USED_VEHICLE) {
            return original_price * DISCOUNT_NEWISH_VEHICLE;
        }
        else {
            return original_price * DISCOUNT_USED_VEHICLE;
        }
    }
}