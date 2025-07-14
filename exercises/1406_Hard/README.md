# [1406. Stone Game III](https://leetcode.com/problems/stone-game-iii/description/)

No jogo Stone Game III, Alice e Bob se revezam pegando 1, 2 ou 3 pedras de uma fila, cada uma com um valor (positivo ou negativo), começando por Alice. O objetivo é maximizar a soma dos valores coletados. O jogo termina quando todas as pedras forem pegas, e vence quem tiver a maior pontuação — ou ocorre empate se os valores forem iguais. Ambos os jogadores jogam de forma ótima. Dado o vetor de valores das pedras, o desafio é determinar se Alice vence, Bob vence ou se há empate.

## Lógica da Solução 

A solução utiliza programação dinâmica para calcular, do fim para o início, a maior diferença de pontos que o jogador atual pode garantir sobre o oponente em cada posição do vetor. A cada passo, o jogador pode escolher pegar 1, 2 ou 3 pedras, somando seus valores e subtraindo o resultado da jogada ótima do oponente nas próximas posições, representado por dp[i+k+1]. A ideia é sempre maximizar essa diferença. Ao final, dp[0] indica a vantagem de Alice: se for positiva, ela vence; se zero, é empate; se negativa, Bob vence pois ambos jogam de forma ótima.

## Submissão

![Submissão](/assets/1406_submit.png)

## [Código](./1406_StoneGameIII.cpp)