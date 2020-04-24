#pragma once

#include <Arduino.h>

void taskRunner(void *pvArguments) {
    void (*func)(void);
    func = (void(*)(void)) pvArguments;
    func();
}

void startTask(void (*task)(void)) {
    xTaskCreate(taskRunner, "idk lol", 2048, task, 1, NULL);
}