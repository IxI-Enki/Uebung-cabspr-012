/*------------------------------------------------------------------------------------------------*
 *     -> Code-language:  [ C ]             HTL-Leonding                   Class: 3ACIF           *
 *------------------------------------------------------------------------------------------------*
 *     ->            by:  Jan Ritt                                          Year: 2023/2024       *
 *------------------------------------------------------------------------------------------------*
 *  Description:
 *          Schreib ein Programm, welches in einer while-Schleife positive Ganzzahlen einliest.
 *            Wenn die Zahl 0 eingegeben wird, wird das Programm beendet.
 *          Es sollen folgende Werte berechnet und ausgegeben werden:
 *          a)   Summe der eingegebenen geraden Zahlen (gerade ==> Zahl durch 2 teilbar)
 *          b)   Anzahl der eingegebenen geraden Zahlen
 *          c)   Mittelwert der geraden Zahlen (Genauigkeit: zwei Nachkommastellen)
 *          d)   Größte eingegebene Zahl
 *          e)   Zweitgrößte eingegebene Zahl
 *  Anmerkung: Achten Sie darauf, dass es zu keiner Division durch Null kommt!
 *-----------------------------------------------------------------------------------------------*/
 /*
 * Bsp:
  Eingabe der Zahlen: 2 3 4 6 7 10 11

  Summe = 2 + 4 + 6 + 10 = 22
  Anzahl = 4
  Mittelwert= 5,50
  Größte Zahl = 11
  Zweitgrößte Zahl = 10
 */
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