# exercise_complex_numbers
Esercitazione assegnata il 18 marzo 2025 - da consegnare entro 26 marzo 2025
\n

Un numero complesso e' un numero della forma z = a + ib, dove i = √−1
e' l'unita' immaginaria. I due numeri reali a e b sono detti rispettivamente
parte reale e parte immaginaria. \n
Si definisca una classe template complex number che modella i numeri
complessi. La classe template prende come parametro il tipo T con il quale si
rappresentano a e b sulla macchina. La classe deve funzionare correttamente
per T = float e T = double. \n
Tale classe template deve: \n
• Avere un costruttore di default \n
• Avere un costruttore user-defined per l’inizializzazione di parte reale
ed immaginaria \n
• Avere metodi che restituiscano il coniugato, la parte reale e la parte
immaginaria \n
• Fornire un overload dell’operatore << per stampare il numero comp-
lesso. Se per esempio a = 1 e b = 2, dev’essere stampato 1+2i, mentre
se b = −2 dev’essere stampato 1-2i. \n
• Fornire un overload degli operatori += e +. \n
• Fornire un overload degli operatori *= e *. \n
• Opzionale: in modo simile a quanto fatto in classe nel caso di rational,
utilizzare i concept per vincolare T ad essere un tipo floating poing.
Verificare su https://en.cppreference.com/w/cpp/header/concepts
qual’e' il concept da utilizzare a tal scopo. \n
