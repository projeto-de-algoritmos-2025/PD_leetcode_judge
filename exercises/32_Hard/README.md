# [32. Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/description/)

O problema "Longest Valid Parentheses" pede que, dado uma string composta apenas pelos caracteres '(' e ')', seja retornado o comprimento da maior substring válida de parênteses, ou seja, o maior trecho da string onde todos os parênteses estão corretamente balanceados e bem-formados. Por exemplo, na string ")()())", a maior substring válida é "()()", com comprimento 4. O objetivo é encontrar esse valor para qualquer entrada válida com até 30.000 caracteres.

## Lógica da Solução 

A lógica da solução usa programação dinâmica para encontrar o comprimento da maior substring de parênteses válidos. Para isso, criamos um vetor dp onde dp[i] armazena o tamanho da sequência válida que termina na posição i. A cada caractere, se encontrarmos um ')', verificamos se ele fecha um parêntese imediatamente anterior '(', ou se pode fechar uma estrutura válida anterior usando dp[i - 1]. Em ambos os casos, atualizamos dp[i] somando os comprimentos válidos já computados. Por fim, mantemos max_len com o maior valor encontrado durante a iteração, que será a resposta.

## Submissão

![Submissão](/assets/32_submit.png)

## [Código](./32_LongestValidParentheses.cpp)