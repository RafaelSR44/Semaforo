// Código para semaforo em ESP32

#define LED_RED 13
#define LED_YELLOW 11
#define LED_GREEN 9

class Semaforo {
  private:
    unsigned long previousMillis = 0;
    int intervalo = 1000;
    int8_t state = 0;

  public:

  bool delayMillis(int interval) {
    intervalo = interval;
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= intervalo) {
      previousMillis = currentMillis;
      return true;
    } else {
      return false;
    }
  }

  void red(){
    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_GREEN, LOW);
  }

  void yellow(){
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_YELLOW, HIGH);
    digitalWrite(LED_GREEN, LOW);
  }

  void green(){
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_YELLOW, LOW);
    digitalWrite(LED_GREEN, HIGH);
  }

  void working(){
    while (!delayMillis(6000) && state == 0){
      red();
      Serial.println("Red Light");
    } 
    state = 1;
    while (!delayMillis(4000)&& state == 1){
      green();
      Serial.println("Green Light");
    } 
    state = 2;
    
    while (!delayMillis(2000) && state == 2){
      yellow();
      Serial.println("Yellow Light");
    }

    state = 0;
    
  }


};

Semaforo semaforo;

void setup()  {
  Serial.begin(115200);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);

}

void loop()  {
  semaforo.working();
}