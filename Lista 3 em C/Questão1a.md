#Estrutura de Dados

#Questão 1

##Letra A:

No melhor caso, o tempo de execução será O(n*log(n)), que seria quando o pivô cai exatamente sempre no meio do vetor, ou seja, k = n/2.

T(n) = 2(T(n/2)) + O(n) = O(n*log(n))