//Bibliotecas dos sensores
#include <OneWire.h>
#include <DallasTemperature.h>
//Bibliotecas do Display
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//Definindo o buzzer
#define buzzer 7
//Definindo os LED's
#define led_Azul 11
#define led_Verde 12
#define led_Vermelho 13

//Definindo o pino na qual o sensor DS18B20 está conectado
#define ONE_WIRE_BUS 6
//Criando um elemento OneWire
OneWire oneWire(ONE_WIRE_BUS);
//Criando um elemento Sensors
DallasTemperature sensors(&oneWire);

//Criando um elemento LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  //Iniciando o Serial
  Serial.begin(9600);
  //Definindo os tipo de pino dos LED's
  pinMode(led_Azul, OUTPUT);
  pinMode(led_Verde, OUTPUT);
  pinMode(led_Vermelho, OUTPUT);
  //Iniciando o LCD
  lcd.init();
  lcd.backlight();
  //Inserindo os texto padroes no LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  //Iniciando o sensor DS18B20
  sensors.begin();
  //Definir o tipo de pino do Buzzer
  pinMode(buzzer, OUTPUT);
}

void loop() {
  //Desativando os LED'S
  digitalWrite(led_Azul, LOW);
  digitalWrite(led_Verde, LOW);
  digitalWrite(led_Vermelho, LOW);

  //Armazenando a temperatura do primeiro sensor em uma variavel
  sensors.requestTemperatures(); 
  float temperatureC = sensors.getTempCByIndex(0);

  //Insere a temperatura no LCD
  lcd.setCursor(5, 0);
  lcd.print(temperatureC);
  lcd.print("      ");

  //Se a temperatura for maior que 30
  if (temperatureC > 30) {
    //Acende o LED vermelho
    digitalWrite(led_Vermelho, HIGH);
    //Insere o estado da temperatura da agua
    lcd.setCursor(12, 0);
    lcd.print("HIGH");
    //Insere a presenca de lixo
    lcd.setCursor(0, 1);
    lcd.print("Lixo Detectado!");
    //Aciona o buzzer
    tone(buzzer, 1500, 1000);
  }
  //Se a temperatura for menor que 0
  else if (temperatureC < 0) {
    //Acende o LED azul
    digitalWrite(led_Azul, HIGH);
    //Insere o estado da temperatura da agua
    lcd.setCursor(12, 0);
    lcd.print("LOW ");
    //Insere a presenca de lixo
    lcd.setCursor(0, 1);
    lcd.print("Lixo Detectado!");
    //Aciona o buzzer
    tone(buzzer, 1500, 1000);
  }
  //Se a temperatura for entre 0 e 30
  else {
    //Acende o LED verde
    digitalWrite(led_Verde, HIGH);
    //Insere o estado da temperatura da agua
    lcd.setCursor(12, 0);
    lcd.print("OK  ");
    //Insere a presenca de lixo
    lcd.setCursor(0, 1);
    lcd.print("Sem Lixo       ");
  }

  //Mostra no console a temperatura
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println("°C");

  //Delay de 1.5 segundos
  delay(1500);
}