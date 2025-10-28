# Atividade - Semáforo offline com ESP32

## Aluno
- Nome: Rafael Santana Rodrigues
- Matrícula: A2025.1A.0288
- Turma: T15

## Lista de Materiais

| Componentes | Quantidade |
|-------------|--------------|
| Placa ESP32 | 1 |
| Protoboard | 1 |
| Cabo USB | 1 |
| LED Vermelho | 1 |
| LED Amarelo | 1 |
| LED Verde | 1 |
| Resistores de 330 ohms | 3 |
| Fios de conexão | Vários |

## Tutorial

1. Conecte os LEDs vermelho, amarelo e verde aos pinos 4, 2 e 15 do ESP32, respectivamente, intermediados por resistores de 330 ohms. 

2. Conecte o GND do ESP32 ao negativo da Protoboard e os pinos negativos dos LEDs.

3. Carregue o código `semaforo.ino` na placa ESP32 utilizando a IDE do Arduino ou o PlatformIO.

Clique [aqui](https://drive.google.com/file/d/1mWzwLcbfxMA0pC625Zi-VLrwsYCPx-U0/view?usp=sharing) para o acessar o video.


## Tabela de Avaliação entre Pares

## Avaliação 1

 **Avaliador:** Vinicius Maciel 
| Critério | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Nota Atribuída | Observações do Avaliador |
|-----------|--------------------|----------------------------------|------------------------|----------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores | Nota 3 | Nota 1,5 | 0 | Nota 3  | Boa organização dos fios e uso correto dos resistores. |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo | Até 3 | Até 1,5 | 0 | Nota 3 | Cronometramos com o Celular e estava tudo correto. |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3 | Até 1,5 | 0 | Nota 3 | Código claro e bem estruturado. |
| Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código | Até 1 | Até 0,5 | 0 | Nota 1 | Utilizou Ponteiro para controle de estados. |
| **Pontuação Total** |  |  |  | Nota 10 |

## Avaliação 2
**Avaliador:** Breno Farias Gomes da Silva 
| Critério | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Nota Atribuída | Observações do Avaliador |
|-----------|--------------------|----------------------------------|------------------------|----------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores | Nota 3 | Nota 1,5 | 0 | Nota 3  | Boa organização dos fios e uso correto dos resistores. |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo | Até 3 | Até 1,5 | 0 | Nota 3 | Cronometramos com o Celular e estava tudo correto. |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3 | Até 1,5 | 0 | Nota 3 | Código claro e bem estruturado. |
| Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código | Até 1 | Até 0,5 | 0 | Nota 1 | Utilizou Ponteiro para controle de estados. |
| **Pontuação Total** |  |  |  | Nota 10 |