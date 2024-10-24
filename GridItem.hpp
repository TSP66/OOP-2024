#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <iostream>
#include <utility>

class GridItem{
    protected:
    std::pair<int, int> coords;
    int width;
    int height;

    public:

    static int ItemCount;

    GridItem() {
       GridItem::ItemCount++;
    }
    GridItem(int x, int y, int width, int height) : GridItem() {
        GridItem::coords.first = x;
        GridItem::coords.second = y;
        GridItem::width = width;
        GridItem::height = height;
        

    }
    void setCoordinates(int x, int y){
        GridItem::coords.first = x;
        GridItem::coords.second = y;
    }
    std::pair<int,int> getCoordinates() {
        return GridItem::coords;
    }
    int getGridWidth() {
       return GridItem::width;
    }
    int getGridHeight() {
        return GridItem::height;
    }
    int getActiveGridItemCount() {
        return GridItem::ItemCount;
    }
    virtual ~GridItem() {
        GridItem::ItemCount--;
    }
};

int GridItem::ItemCount = 0;

#endif