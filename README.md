# 🎮 Jogo de Adivinhação em C 
<table align="center">
  <tr>
    <td width="300">
      <video src="https://github.com/user-attachments/assets/1c4d32a7-7b41-405f-8efe-bd842f7c9c44" controls></video>
    </td>
  </tr>
</table>

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Terminal](https://img.shields.io/badge/Terminal-%234D4D4D.svg?style=for-the-badge&logo=gnu-bash&logoColor=white)

Um jogo de adivinhação. Foi construído para consolidar fundamentos essenciais de algoritmos, estruturas de repetição e lógica de programação.

O sistema gera um número secreto aleatório e desafia o jogador a descobrir qual é, oferecendo dicas e calculando uma pontuação dinâmica baseada na precisão dos palpites.

## ✨ Funcionalidades em Destaque

* **Níveis de Dificuldade:** Três níveis (Fácil, Médio e Difícil) implementados com `switch/case`, que alteram dinamicamente a quantidade de tentativas disponíveis.
* **Sistema de Pontuação Dinâmico:** Utilização da função matemática `abs()` para calcular a perda de pontos de forma proporcional à distância entre o chute do jogador e o número secreto.
* **Validação de Entrada:** O sistema impede chutes de números negativos, utilizando `continue` para não penalizar o jogador com a perda de uma tentativa.
* **Interface Textual (ASCII Art):** Telas de boas-vindas e de vitória/derrota personalizadas com arte ASCII para melhorar a experiência do usuário no terminal.

## 🛠️ Tecnologias e Conceitos Aplicados

* **Linguagem C**
* Manipulação de números pseudoaleatórios (`srand` e `time`)
* Estruturas de controle (`if/else`, `switch`, `for`)
* Tipagens dinâmicas no fluxo do jogo (`int`, `double`)

## 🚀 Como executar o projeto na sua máquina

Certifique-se de ter um compilador C (como o `gcc`) instalado em seu ambiente.

**1. Clone o repositório:**
`git clone https://github.com/sid-neyz/jogo-adivinhacao.git`

**2. Acesse a pasta do projeto:**
`cd jogo-adivinhacao`

**3. Compile o código-fonte:**
`gcc adivinhacao.c -o adivinhacao`

**4. Execute o jogo:**
* **Linux / macOS:** `./adivinhacao`
* **Windows:** `adivinhacao.exe`

---
Feito por [Sidiney](https://github.com/sid-neyz) 
