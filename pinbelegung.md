# ESP32 Pinbelegung Direkt

<table>
  <tr>
    <td valign="top">

<b>Display-Anschlüsse (Kurzfassung)</b>

| Funktion | Pin |
| -------- | --- |
| CS       | 15  |
| DC       | 2   |
| RST      | 20  |
| BL       | 27  |
| SCK      | 18  |
| MOSI     | 23  |
| MISO     | 19  |

    </td>
    <td valign="top">

<b>RGB LED</b>

| Farbe | Pin |
| ----- | --- |
| Red   | 4   |
| Green | 16  |
| Blue  | 17  |

    </td>
  </tr>
</table>

---

## GPIO Übersicht

| Pin  | Funktion / Bemerkung                      | Status / Hinweise         |
|------|-------------------------------------------|--------------------------|
| 1    | Ungetestet                                | -                        |
| 2    | Externer Stecker                          | teilweise getestet       |
| 3    | Ungetestet                                | -                        |
| 4    | RGB LED Red                               | Bestätigt                |
| 5    | SD-Karte CS                               | Bestätigt                |
| 6    | Flash                                     | reserviert, nicht nutzbar|
| 7    | Flash                                     | reserviert               |
| 8    | Flash                                     | reserviert               |
| 9    | Flash                                     | reserviert               |
| 10   | Flash                                     | reserviert               |
| 11   | Flash                                     | reserviert               |
| 12   | SD-Karte MISO                             | Bestätigt                |
| 13   | SD-Karte MOSI                             | Bestätigt                |
| 14   | SD-Karte SCK                              | Bestätigt                |
| 15   | TFT CS                                    | Bestätigt                |
| 16   | RGB LED Green                             | Bestätigt                |
| 17   | RGB LED Blue                              | Bestätigt                |
| 18   | TFT SCK                                   | Bestätigt                |
| 19   | TFT MISO                                  | Bestätigt                |
| 20   | TFT RST                                   | Bestätigt                |
| 21   | TFT Backlight                             | Bestätigt, HIGH = AN     |
| 22   | Externer Stecker 2                        | Bestätigt                |
| 23   | TFT MOSI                                  | Bestätigt                |
| 24   | Ungetestet                                | -                        |
| 25   | SD-Karte Kandidat CS (nicht genutzt)      | getestet                 |
| 26   | SD-Karte Kandidat CS (nicht genutzt)      | getestet                 |
| 27   | Display Backlight (CYD Display)           | Bestätigt                |
| 28   | Ungetestet                                | -                        |
| 29   | Ungetestet                                | -                        |
| 30   | Ungetestet                                | -                        |
| 31   | Ungetestet                                | -                        |
| 32   | Ungetestet / ADC                          | getestet                 |
| 33   | Ungetestet / ADC                          | getestet                 |
| 34   | Helligkeitssensor (LDR)                   | Bestätigt                |
| 35   | Externer Stecker 1                        | Bestätigt                |
| 36   | Ungetestet / ADC                          | getestet                 |
| 37   | Ungetestet                                | -                        |
| 38   | Ungetestet                                | -                        |
| 39   | Ungetestet / ADC                          | getestet                 |

---

## ESP32-WROOM-32 Pinout Übersicht

![ESP32-WROOM-32 Pinout](https://lastminuteengineers.com/wp-content/uploads/iot/ESP32-WROOM-32-Pinout.png)

Quelle: [LastMinuteEngineers.com](https://lastminuteengineers.com/esp32-pinout-reference/)

---

Diese Übersicht hilft dir und anderen, die richtigen Pins für das Display und weitere Komponenten am ESP32 zu finden.