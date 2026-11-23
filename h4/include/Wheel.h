#include <string>

struct Wheel {
private:
    int size;
    std::string type;
public:
    Wheel();
    Wheel(int, std::string);
    int getSize();
    void setSize(int);
    std::string getType();
    void setType(std::string);
};