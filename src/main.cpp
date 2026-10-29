#include <Arduino.h>

void setup() {
  // เริ่มต้นการสื่อสาร Serial ด้วยความเร็ว 115200 bps
  Serial.begin(115200);

  // กำหนดให้ขา LED บนบอร์ดเป็น Output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);   // เปิดไฟ (NodeMCU ไฟติดเมื่อ logic LOW)
  Serial.println("ไฟติด");
  delay(200);                       // หน่วงเวลา 200 มิลลิวินาที (กะพริบเร็วขึ้น)

  digitalWrite(LED_BUILTIN, HIGH);  // ปิดไฟ
  Serial.println("ไฟดับ");
  delay(200);                       // หน่วงเวลา 200 มิลลิวินาที (กะพริบเร็วขึ้น)
}
