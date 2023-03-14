#include "sword.h"
#include "shield.h"
#include "lucky.h"

class ItemBox{
public:
    ItemBox();
    ~ItemBox();
    Item* getItem(int index);
private:
    Sword* sword_;
    Shield* shield_;
    Lucky* lucky_;
};