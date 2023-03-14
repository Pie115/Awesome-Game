#include "itembox.h"

ItemBox::ItemBox()
    : sword_(new Sword()), shield_(new Shield()), luckyCharm_(new LuckyCharm())
{}

ItemBox::~ItemBox() {
    delete sword_;
    delete shield_;
    delete luckyCharm_;
}

Item* ItemBox::getItem(int index) {
    switch (index) {
        case 0:
            return sword_;
        case 1:
            return shield_;
        case 2:
            return luckyCharm_;
        default
    }

}