//
// Created by 神奇bug在哪里 on 2023/3/10.
//
#include "logSystem.h"
#include <Arduino.h>
#include "settings.h"

void log(module module, logLevel level, std::string context) {
    if (level < DEBUG_LEVEL) {
        return;
    }
    Serial.printf("[%s][%s]", module == MODULE_MAIN ? "MAIN" : module == MODULE_SERIAL_IO ? "SERIAL_IO" : module == MODULE_STATUS ? "STATUS" : module == MODULE_DISPLAYCORE ? "DISPLAYCORE" : module == MODULE_TEMPERATURE ? "TEMPERATURE" : module == MODULE_PWM ? "PWM" : module == MODULE_ALARM ? "ALARM" : module == MODULE_TIMESET ? "TIMESET" : module == MODULE_LOGSYSTEM ? "LOGSYSTEM" : module == MODULE_DS1307 ? "DS1307" : "UNKNOWN", level == LOG_LEVEL_DEBUG ? "DEBUG" : level == LOG_LEVEL_INFO ? "INFO" : level == LOG_LEVEL_WARNING ? "WARNING" : level == LOG_LEVEL_ERROR ? "ERROR" : "FATAL");
    Serial.println(context.c_str());
}
void log(module module, logLevel level, StringSumHelper context) {
    if (level < DEBUG_LEVEL) {
        return;
    }
    Serial.printf("[%s][%s]", module == MODULE_MAIN ? "MAIN" : module == MODULE_SERIAL_IO ? "SERIAL_IO" : module == MODULE_STATUS ? "STATUS" : module == MODULE_DISPLAYCORE ? "DISPLAYCORE" : module == MODULE_TEMPERATURE ? "TEMPERATURE" : module == MODULE_PWM ? "PWM" : module == MODULE_ALARM ? "ALARM" : module == MODULE_TIMESET ? "TIMESET" : module == MODULE_LOGSYSTEM ? "LOGSYSTEM" : module == MODULE_DS1307 ? "DS1307" : "UNKNOWN", level == LOG_LEVEL_DEBUG ? "DEBUG" : level == LOG_LEVEL_INFO ? "INFO" : level == LOG_LEVEL_WARNING ? "WARNING" : level == LOG_LEVEL_ERROR ? "ERROR" : "FATAL");
    Serial.println(context.c_str());
}

void log(module module, logLevel level, const char *context) {
    if (level < DEBUG_LEVEL) {
        return;
    }
    Serial.printf("[%s][%s] %s", module == MODULE_MAIN ? "MAIN" : module == MODULE_SERIAL_IO ? "SERIAL_IO" : module == MODULE_STATUS ? "STATUS" : module == MODULE_DISPLAYCORE ? "DISPLAYCORE" : module == MODULE_TEMPERATURE ? "TEMPERATURE" : module == MODULE_PWM ? "PWM" : module == MODULE_ALARM ? "ALARM" : module == MODULE_TIMESET ? "TIMESET" : module == MODULE_LOGSYSTEM ? "LOGSYSTEM" : module == MODULE_DS1307 ? "DS1307" : "UNKNOWN", level == LOG_LEVEL_DEBUG ? "DEBUG" : level == LOG_LEVEL_INFO ? "INFO" : level == LOG_LEVEL_WARNING ? "WARNING" : level == LOG_LEVEL_ERROR ? "ERROR" : "FATAL",context);
    Serial.println();
}
