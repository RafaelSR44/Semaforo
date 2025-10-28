// Código para semaforo em ESP32

// Definição dos pinos dos LEDs
#define LED_RED 4
#define LED_YELLOW 2
#define LED_GREEN 15

class Semaforo { // Classe Semaforo
  private:
    // Variáveis privadas
    unsigned long previousMillis = 0;
    int intervalo = 1000;
    int state0 = 0;
    int state1 = 1;
    int state2 = 2;
    int *ponteiro = &state0;

  public:
    // Método para controlar o tempo de atraso sem bloquear o loop principal
    // Retorna true quando o intervalo de tempo especificado tiver passado
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
  // Métodos para controlar os LEDs
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
  // Método principal para controlar o semáforo
  // Alterna entre os estados do semáforo com base no tempo definido
  // Estado 0: Vermelho, Estado 1: Verde, Estado 2: Amarelo
  void working(){
    while (!delayMillis(6000) && *ponteiro == 0){
      red();
      Serial.println("Red Light");
    } 
    ponteiro = &state1;
    while (!delayMillis(4000)&& *ponteiro == 1){
      green();
      Serial.println("Green Light");
    } 
    ponteiro = &state2;

    while (!delayMillis(2000) && *ponteiro == 2){
      yellow();
      Serial.println("Yellow Light");
    }

    ponteiro = &state0;

  }


};

// Instância da classe Semaforo
Semaforo semaforo;

// Função de configuração
void setup()  {
  Serial.begin(115200);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);

}

// Função principal de loop
void loop()  {
  semaforo.working();
}