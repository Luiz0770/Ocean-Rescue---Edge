# Projeto: Monitoramento de Temperatura dos Oceanos da Ocean Rescue

 **Link do projeto em funcionamento:**[Link do projeto](https://wokwi.com/projects/399913420681902081)

Este projeto utiliza um sensor de temperatura DS18B20 para monitorar a temperatura da água dos oceanos, fornecendo alertas visuais (LEDs) e sonoros (buzzer) para alertar a irregularidade da temperatura. Além disso, foi utilizado um display LCD para visualizar melhor os dados capturados e o estado do sistema.

## Sumário

- [Descrição do Projeto](#descrição-do-projeto)
- [Requisitos](#requisitos)
- [Instruções de Uso](#instruções-de-uso)
- [Instalação](#instalação)
- [Dependências](#dependências)
- [Licença](#licença)

## 🚀 Descrição do Projeto

O sistema monitora a temperatura da água utilizando o sensor DS18B20 e apresenta as seguintes funcionalidades:

- Exibição da temperatura em um display LCD.
- Acionamento de LEDs indicativos (Azul, Verde e Vermelho) de acordo com a faixa de temperatura.
- Emissão de alerta sonoro através de um buzzer quando a temperatura está fora dos padrões.
- Indicação da presença de lixo com base na leitura da temperatura.

## 📋 Requisitos

- Arduino (qualquer modelo compatível, no projeto foi utilizado o Arduino Uno)
- Sensor de temperatura DS18B20
- Display LCD I2C
- LEDs (Azul, Verde, Vermelho)
- Buzzer
- Jumpers
- Protoboard

## ⚙️ Instruções de Uso

1. **Montagem do Circuito:**
   - Conecte o sensor DS18B20 ao pino digital 6 do Arduino.
   - Conecte o display LCD aos pinos A4 e A5 do Arduino.
   - Conecte o LED Azul ao pino digital 11, o LED Verde ao pino digital 12 e o LED Vermelho ao pino digital 13.
   - Conecte o buzzer ao pino digital 7.

2. **Upload do Código:**
   - Faça o upload do código fornecido para a IDE do seu Arduino.

3. **Operação:**
   - O display LCD exibirá a temperatura atual.
   - Os LEDs indicarão o estado da temperatura:
     - Azul: Se a temperatura estiver abaixo de 0°C.
     - Verde: Se a temperatura estiver entre 0°C e 30°C.
     - Vermelho: Se a temperatura estiver acima de 30°C.
   - O buzina será acionada quando a temperatura estiver fora dos padrões (menor que 0°C ou maior que 30°C).

## 🔧 Instalação

**Instalacao da IDE:**
   - Para passar o código fornecido para seu arduino é necessário a instalação de sua IDE! [IDE Arduino](https://www.arduino.cc/en/software).

**Instalacao das Bibliotecas:**
   - Nesse projeto é necessário a instalação das bibliotecas através do Gerenciador de Bibliotecas da IDE Arduino:
     
  Para instalar essas bibliotecas, siga as etapas abaixo na IDE Arduino:
    1. Vá para **Sketch** > **Include Library** > **Manage Libraries**.
    2. Pesquise por cada instale cada biblioteca mencionada abaixo e instale.

## 📦 Dependências

O projeto necessita das seguintes bibliotecas:

- [OneWire](https://www.arduino.cc/reference/en/libraries/onewire/)
- [DallasTemperature](https://www.arduino.cc/reference/en/libraries/dallastemperature/)
- [Wire](https://www.arduino.cc/en/reference/wire)
- [LiquidCrystal_I2C](https://github.com/johnrickman/LiquidCrystal_I2C)

## 📄 Licença

Este projeto é licenciado sob a [MIT License](LICENSE).

---

🎁 Sinta-se à vontade para contribuir com melhorias e novas funcionalidades! Se você encontrar algum problema ou tiver sugestões, fique a vontade para melhorar o projeto!.

---

## ✒️ Autores

* **Luiz Felipe Coelho Ramos** - *RM:555074* - [Luiz0770](https://github.com/Luiz0770)
* **Fernando Gonzales Alexandre** - *RM:555045* - [Fernando1403](https://github.com/Fernando1403)
* **Lucas Catroppa Piratininga** - *RM:555450* - [Fernando1403](https://github.com/Fernando1403)
