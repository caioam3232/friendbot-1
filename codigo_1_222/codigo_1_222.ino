char data_serial;
void setup() {
  Serial.begin(9600);}
void loop() {
  if (Serial.available () > 0) {
    Serial.println("E");
    data_serial = Serial.read();
    Serial.println(data_serial);
    if (data_serial == 'u') {
      analogWrite (6, 255) ;
      analogWrite (9, 0) ;
      analogWrite (3, 255) ;
      analogWrite (5, 0) ; }
      if (data_serial == 'd') {
        analogWrite (6, 0) ;
        analogWrite (9, 255) ;
        analogWrite (3, 0) ;
        analogWrite (5, 255) ; }
        if (data_serial == 'r') {
          analogWrite (6, 0) ;
          analogWrite (9,255) ;
          analogWrite (3, 255) ;
          analogWrite (5, 0) ; }
          if (data_serial == 'l') {
            analogWrite (6, 255) ;
            analogWrite (9, 0) ;
            analogWrite (3, 0) ;
            analogWrite (5, 255) ; }
            if (data_serial == 's') {
              analogWrite (6, 0) ;
              analogWrite (9, 0) ;
              analogWrite (3, 0) ;
              analogWrite (5, 0) ; }
    }
    }
