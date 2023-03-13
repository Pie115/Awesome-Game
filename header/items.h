#include <string>
using namespace std;

class Item
{
    public:
        Item(string name, string description, string attribute, int value);
        string getName() const;
        string getDescription() const;
        string getAttribute() const;
        int getValue() const;

    protected:
        string name_;
        string description_;
        string attribute_;
        int value_;


   




}






#endif //ITEM_HPP
