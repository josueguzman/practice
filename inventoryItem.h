// This class has overloaded constructors

#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <string>
using namespace std;

class InventoryItem {
private:
  string description; // item description
  double cost; // item cost
  int units; // number of units on hand

public:
  InventoryItem() { // default constructor
    description = " "; // initialize description
    cost = 0.0; // initialize cost
    units = 0; // initialize units
  }

  InventoryItem(string desc) { // constructor #2
    description = desc; // assign value to description
    cost = 0.0; // initialize cost
    units = 0; // initialize units
  }

  InventoryItem(string desc, double c, int u) { // constructor #3
    description = desc;
    cost = c;
    units = u;
  }

  // Mutator Functions
  void setDescription(string d) {
    description = d;
  }

  void setCost(double c) {
    cost = c;
  }

  void setUnits (int u) {
    units = u;
  }

  // Accessor Functions
  string getDescription() const {
    return description;
  }

  double getCost() const {
    return cost;
  }

  int getUnits() const {
    return units;
  }

};
#endif
