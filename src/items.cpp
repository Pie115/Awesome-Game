#include items.h
using namespace std;

Item::Item(string name, string description, string attribute, int value)
: name_(name), description_(description), attribute_(attribute), value_(value)
{}

string Item::getName() const {
    return name_
}

string Item::getDescription() const {
    return description_
}

string Item::getAttribute() const {
    return attribute_
}

string Item::getValue() const {
    return value_
}
