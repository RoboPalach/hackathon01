#pragma once

#include <Arduino.h>

class GenericModule {
   public:
    virtual void bombExploded() = 0;

    void activate();

    virtual void loop() = 0;

    void setDisarmedCallback(void (*function)(void));

    void setStrikeCallback(void (*function)(void));

   private:
    void (*disarmedCallback)(void);
    void (*strikeCallback)(void);
};
