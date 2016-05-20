#include "openag_am2315.h";
#include "openag_peripheral.h";

Am2315 am2315_1("am2315_1"), am2315_2("am2315_2");
Peripheral *peripheral_array[] = {&am2315_1, &am2315_2};

void find(String id, Peripheral *peripheral_array[], int num_peripherals) {
  for (int i=0; i<num_peripherals; i++) {
    if(id == peripheral_array[i]->id) {
      Serial.println(peripheral_array[i]->get("air_temperature"));
    }
  }
}

void setup() {
  Serial.begin(9600);
  int num_peripherals = sizeof(peripheral_array)/sizeof(peripheral_array[0]);
  find("am2315_1", peripheral_array, num_peripherals);
}

void loop() {
  // put your main code here, to run repeatedly:

}
