#include <TelegramControl.h>

// Replace with your network credentials and Telegram Bot information
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
const char* botToken = "YOUR_BOT_TOKEN";
const char* chatID = "YOUR_CHAT_ID";
const int ledPin = 6;

TelegramControl telegramControl(ssid, password, botToken, chatID, ledPin);

void setup() {
  telegramControl.begin();
}

void loop() {
  telegramControl.handle();
}
