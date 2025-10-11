#include <TFT_eSPI.h>   // Bodmer's Library
#include <SPI.h>

// === Pinbelegung laut deinem Board ===
#define TFT_CS   15
#define TFT_DC    2
#define TFT_RST  20
#define TFT_BL   27   // Backlight (HIGH)

// === TFT initialisieren ===
TFT_eSPI tft = TFT_eSPI(); // Objekt

void setup() {
  Serial.begin(115200);
  Serial.println("Starte TFT Display Test...");

  // Backlight einschalten
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);

  // Display starten
  tft.init();
  tft.setRotation(1);  // 0=Hochformat, 1=Querformat
  tft.fillScreen(TFT_BLACK);

  // Textausgabe
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setTextSize(2);
  tft.setCursor(10, 20);
  tft.println("ESP32 Display Test");

  // Linien
  tft.drawLine(0, 0, tft.width(), tft.height(), TFT_RED);
  tft.drawLine(0, tft.height(), tft.width(), 0, TFT_GREEN);

  // Rechteck und Kreis
  tft.drawRect(40, 40, 100, 60, TFT_BLUE);
  tft.fillCircle(200, 120, 20, TFT_YELLOW);

  Serial.println("Display initialisiert!");
}

void loop() {
  // Farbanimation
  static uint8_t colorIndex = 0;
  uint16_t colors[] = {TFT_RED, TFT_GREEN, TFT_BLUE, TFT_YELLOW, TFT_CYAN, TFT_MAGENTA};

  tft.fillScreen(colors[colorIndex]);
  tft.setTextColor(TFT_WHITE, colors[colorIndex]);
  tft.setCursor(40, 100);
  tft.println("Farbtest");

  colorIndex = (colorIndex + 1) % 6;
  delay(1000);
}