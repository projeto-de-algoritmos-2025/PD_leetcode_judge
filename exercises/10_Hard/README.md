# [10. Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/description/)

O problema consiste em verificar se uma string `s` corresponde completamente a um padrão `p` que pode conter dois caracteres especiais: o ponto `.` que corresponde a qualquer caractere único, e o asterisco `*` que indica zero ou mais repetições do caractere anterior. 

## Lógica da Solução 

A solução utiliza programação dinâmica para resolver o problema de forma eficiente. Construímos uma tabela booleana `dp` onde `dp[i][j]` indica se os primeiros `i` caracteres de `s` correspondem aos primeiros `j` caracteres de `p`. A tabela é preenchida considerando três casos principais: 
1. quando o caractere atual do padrão é um match direto ou um ponto `.`
2. quando encontramos um asterisco `*` (avaliando tanto a possibilidade de zero ocorrências quanto uma ou mais ocorrências do caractere anterior)
3. os casos base que tratam strings vazias. Esta abordagem garante que todas as possíveis combinações de correspondência sejam avaliadas sistematicamente, resultando em uma solução ótima com complexidade O(m×n) tanto para tempo quanto para espaço, onde m e n são os comprimentos da string e do padrão, respectivamente.

## Submissão

![Submissão](/assets/10_submit.png)
Submissão e caso de teste 1

## [Código](./4_MedianofTwoSortedArrays.cpp)