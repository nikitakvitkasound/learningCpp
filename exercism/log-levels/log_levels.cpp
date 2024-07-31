#include <string>

namespace log_line {
    std::string message(std::string line) {
        return line.substr(line.find(":") + 2);
    }

    std::string log_level(std::string line) {
        return line.substr(line.find("[") + 1, line.find("]") - line.find("[") - 1);
    }

    std::string reformat(std::string line) {
        return log_line::message(line) + " " + "(" + log_line::log_level(line) + ")";
    }
}