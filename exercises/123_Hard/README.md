# [123. Best Time to Buy and Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/)

Dado um vetor `prices` onde `prices[i]` representa o preço de uma ação no dia `i`, queremos calcular o lucro máximo possível realizando até duas transações (cada transação consiste em comprar e vender)

## Lógica da Solução 

A solução divide o problema em dois subproblemas usando dois vetores auxiliares:  
1. **`esq`**: Para cada dia `i`, armazena o lucro máximo obtido com uma transação até aquele dia (calculado da esquerda para direita, acompanhando o preço mínimo)  
2. **`dir`**: Para cada dia `i`, armazena o lucro máximo obtido com uma transação após aquele dia (calculado da direita para esquerda, acompanhando o preço máximo)  

O lucro máximo final é encontrado somando `esq[i] + dir[i]` para todos os dias `i` e selecionando o maior valor. Esta abordagem garante que as transações não se sobrepõem e executa em tempo linear O(n), sendo muito eficiente.

## Submissão

![Submissão](/assets/123_submit.png)

## [Código](./123_BestTimetoBuyandSellStockIII.cpp)