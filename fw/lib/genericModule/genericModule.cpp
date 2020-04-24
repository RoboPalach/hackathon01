#include "genericModule.h"

#include "helper.h"

void GenericModule::activate() {
    startTask(this->loop);
}

void GenericModule::setDisarmedCallback(void (*function)(void)) {
    disarmedCallback = function;
}

void GenericModule::setStrikeCallback(void (*function)(void)) {
    strikeCallback = function;
}
