#include <stdexcept>


class WrongDataType : public std::runtime_error {
    public:
        WrongDataType() : std::runtime_error("Invalid Selection, Please input an integer of 1, 2, or 3!") {}
};