void setup() {
}

void loop() {
  int i;
  // Quiet reminders (10s)
  for (i=0; i<50; i++) {
    tone(6, 10000, 1);
    delay(200);
  }
  // Persistent reminder (20s)
  for (i=0; i<20; i++) {
    tone(6, 2500, 10);
    delay(1000);
  }
  // Alarm
  while (true) {
    tone(6, 2500, 500);
    delay(1000);
  }
}
