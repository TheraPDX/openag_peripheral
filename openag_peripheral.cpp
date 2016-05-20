#include "openag_peripheral.h"

Peripheral::Peripheral(String id) {
  this->id = id;
}

Peripheral::~Peripheral(){}

void Peripheral::begin(){}

String Peripheral::get(String id) {}

String Peripheral::set(String id, String value) {}