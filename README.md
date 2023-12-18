# Uebung-cabspr-012 -- Zahlenstatistik  - `❗ Probetest `

- [Angabe.pdf](https://github.com/IxI-Enki/Uebung-cabspr-012/blob/main/BSP10.pdf)

---

- ### [Lösung.c ](https://github.com/IxI-Enki/Uebung-cabspr-012/blob/main/Zahlenstatistik.c) - sourcecode  
- ### [Lösung.exe ](https://github.com/IxI-Enki/Uebung-cabspr-012/blob/main/Zahlenstatistik.exe) - application  

<sub><sup>
---
</sup></sub>

## Console:
| *Meine Ausgabe:* |
| :-------- |
| ![ausgabe](https://github.com/IxI-Enki/Uebung-cabspr-012/assets/138018029/d5da2f32-3dc0-48e8-92ae-cdf61fe4490a) |

---

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
  int userInput = 0;          // Benutzereingabe
  int sumEvenInputs = 0;      // Summe der geraden eingegebenen Zahlen
  int numEvenInputs = 0;      // Anzahl der eingegebenen Zahlen
  int maxNumInput = 0;        // größte eingegebene Zahl
  int secondMaxNumInput = 0;  // zweitgrößte eingegebene Zahl
  int swap = 0;               // Tauschvariable

  float averageEven = 0;      // Mittelwert der eingegebenen geraden Zahlen %.2f (2 Nachkommastellen)

  printf("\n         Zahlenstatistik         ");
  printf("\n=================================");
  printf("\n Positive Ganzzahl eingeben: \n (0 zum Beenden)    ");

  scanf_s("   %d", &userInput);

  while (userInput != 0)
  {
    if (userInput != 0)
    {
      if (userInput % 2 == 0)
      {
        numEvenInputs++;
        // printf("\n Anzahl an geraden Zahlen: %d ", numEvenInputs);
        sumEvenInputs = sumEvenInputs + userInput;
        // printf("\n Summe der geraden Zahlen: %d ", sumEvenInputs);
        averageEven = sumEvenInputs / (float)numEvenInputs;
        // printf("\n Mittelwert: %.2f ", averageEven);
      }

      if (userInput > secondMaxNumInput)
      {
        secondMaxNumInput = userInput;
        // printf("\n zweitgroeste Zahl: %d ", secondMaxNumInput);
      }

      if (secondMaxNumInput > maxNumInput)
      {
        swap = secondMaxNumInput;
        secondMaxNumInput = maxNumInput;
        maxNumInput = swap;
        // printf("\n groeste Zahl: %d ", maxNumInput);
      }
    }
    printf("---------------------------------");
    printf("\n Naechste Zahl ein: \n (0 zum Beenden)    ");
    scanf_s("   %d", &userInput);
  }         
  printf("=================================");
  printf("\n Anzahl an geraden Zahlen: %3d   ", numEvenInputs);
  printf("\n Summe der geraden Zahlen: %3d   ", sumEvenInputs);
  printf("\n Mittelwert:               %6.2f ", averageEven);
  printf("\n Zweitgroesste Zahl:       %3d   ", secondMaxNumInput);
  printf("\n Groesste Zahl:            %3d   ", maxNumInput);
  printf("\n=================================");

  printf("\n Eingabetaste zum beenden drucken");
  while (_fgetchar() != '\n');
  { _fgetchar(); }
  return 0;
}
```
