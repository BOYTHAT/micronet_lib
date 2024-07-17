#ifndef TELEGRAMCONTROL_H
#define TELEGRAMCONTROL_H

#ifdef ESP32
  #include <WiFi.h>
  #include <WiFiClientSecure.h>
#else
  #include <ESP8266WiFi.h>
  #include <WiFiClientSecure.h>
#endif
#include <UniversalTelegramBot.h>
#include <ArduinoJson.h>

class TelegramControl {
  public:
    TelegramControl(const char* ssid, const char* password, const char* botToken, const char* chatID, int ledPin);
    void begin();
    void handle();

  private:
    const char* ssid;
    const char* password;
    const char* botToken;
    const char* chatID;
    int ledPin;
    bool ledState;
    int botRequestDelay;
    unsigned long lastTimeBotRan;
    WiFiClientSecure client;
    UniversalTelegramBot bot;

    void handleNewMessages(int numNewMessages);
    void connectToWiFi();
};

#endif // TELEGRAMCONTROL_H
