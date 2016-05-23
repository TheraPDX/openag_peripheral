#ifndef OPENAG_PERIPHERAL
#define OPENAG_PERIPHERAL

#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

class Peripheral {
  public:
    // Public variables
    String id;
    String* parameters;

    // Public methods
    Peripheral(String id, String parameters[]); // constructor
    virtual ~Peripheral(); // destructor
    virtual void begin();
    virtual String get(String key);
    virtual String set(String key, String value);
};

#endif
