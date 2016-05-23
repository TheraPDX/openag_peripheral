#include "openag_peripheral.h"

Peripheral::Peripheral(String id, String* parameters) {
  this->id = id;
  this->parameters = parameters;
}

Peripheral::~Peripheral(){}

void Peripheral::begin(){}

String Peripheral::get(String id) {
  return "";
}

String Peripheral::set(String id, String value) {
  return "";
}
