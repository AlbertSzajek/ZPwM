#include <Windows.h>

int WINAPI WinMain(HINSTANCE hlnstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
  int iRetKey = MessageBox(0, "Pomyœl liczbê z zakresu 1-40.", "Symulacja czytania w myœlach.", MB_OKCANCEL);
  if (iRetKey == IDOK)
  {
    int liczba = MessageBox(0, "Czy liczba jest wiêksza od 20", "Patrz mi w oczy", MB_YESNO);
    if (liczba == IDYES)
    {
      int liczba1 = MessageBox(0, "Czy liczba jest wiêksza od 30", "Patrz mi w oczy", MB_YESNO);
      if (liczba1 == IDYES)
      {
        int liczba2 = MessageBox(0, "Czy liczba jest wiêksza od 35", "Patrz mi w oczy", MB_YESNO);
        if (liczba2 == IDYES)
        {
          int liczba3 = MessageBox(0, "Czy liczba jest wiêksza od 38", "Patrz mi w oczy", MB_YESNO);
          if (liczba3 == IDYES)
          {
            int liczba4 = MessageBox(0, "Czy liczba to 39", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
            }
            else
            {
              MessageBox(0, "Twoja liczba to 40 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
          else
          {
            int liczba4 = MessageBox(0, "Czy liczba jest wiêksza 36", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              int liczba5 = MessageBox(0, "Czy liczba to 37", "Patrz mi w oczy", MB_YESNO);
              if (liczba5 == IDYES)
              {
                MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
              }
              else
              {
                MessageBox(0, "Twoja liczba to 38 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
              }
            }
            else
            {
              MessageBox(0, "Twoja liczba to 36 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
        }
        else
        {
          int liczba3 = MessageBox(0, "Czy liczba jest wiêksza od 33", "Patrz mi w oczy", MB_YESNO);
          if (liczba3 == IDYES)
          {
            int liczba4 = MessageBox(0, "Czy liczba to 34", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
            }
            else
            {
              MessageBox(0, "Twoja liczba to 35 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
          else
          {
            int liczba4 = MessageBox(0, "Czy liczba jest wiêksza 31", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              int liczba5 = MessageBox(0, "Czy liczba to 32", "Patrz mi w oczy", MB_YESNO);
              if (liczba5 == IDYES)
              {
                MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
              }
              else
              {
                MessageBox(0, "Twoja liczba to 33 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
              }
            }
            else
            {
              MessageBox(0, "Twoja liczba to 31 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
        }
      }
      else
      {
        int liczba2 = MessageBox(0, "Czy liczba jest wiêksza od 25", "Patrz mi w oczy", MB_YESNO);
        if (liczba2 == IDYES)
        {
          int liczba3 = MessageBox(0, "Czy liczba jest wiêksza od 28", "Patrz mi w oczy", MB_YESNO);
          if (liczba3 == IDYES)
          {
            int liczba4 = MessageBox(0, "Czy liczba to 29", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
            }
            else
            {
              MessageBox(0, "Twoja liczba to 30 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
          else
          {
            int liczba4 = MessageBox(0, "Czy liczba jest wiêksza 26", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              int liczba5 = MessageBox(0, "Czy liczba to 27", "Patrz mi w oczy", MB_YESNO);
              if (liczba5 == IDYES)
              {
                MessageBox(0, "Wygra³em, nie mia³eœ szans szans", "Patrz mi w oczy", MB_OK);
              }
              else
              {
                MessageBox(0, "Twoja liczba to 28 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
              }
            }
            else
            {
              MessageBox(0, "Twoja liczba to 26 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
        }
        else
        {
          int liczba3 = MessageBox(0, "Czy liczba jest wiêksza od 23", "Patrz mi w oczy", MB_YESNO);
          if (liczba3 == IDYES)
          {
            int liczba4 = MessageBox(0, "Czy liczba to 24", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
            }
            else
            {
              MessageBox(0, "Twoja liczba to 25 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
          else
          {
            int liczba4 = MessageBox(0, "Czy liczba jest wiêksza 21", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              int liczba5 = MessageBox(0, "Czy liczba to 22", "Patrz mi w oczy", MB_YESNO);
              if (liczba5 == IDYES)
              {
                MessageBox(0, "Wygra³em, nie mia³eœ szans szans", "Patrz mi w oczy", MB_OK);
              }
              else
              {
                MessageBox(0, "Twoja liczba to 23 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
              }
            }
            else
            {
              MessageBox(0, "Twoja liczba to 21 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
        }
      }
    }
    else
    {
      int liczba1 = MessageBox(0, "Czy liczba jest wiêksza od 10", "Patrz mi w oczy", MB_YESNO);
      if (liczba1 == IDYES)
      {
        int liczba2 = MessageBox(0, "Czy liczba jest wiêksza od 15", "Patrz mi w oczy", MB_YESNO);
        if (liczba2 == IDYES)
        {
          int liczba3 = MessageBox(0, "Czy liczba jest wiêksza od 18", "Patrz mi w oczy", MB_YESNO);
          if (liczba3 == IDYES)
          {
            int liczba4 = MessageBox(0, "Czy liczba to 19", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
            }
            else
            {
              MessageBox(0, "Twoja liczba to 20 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
          else
          {
            int liczba4 = MessageBox(0, "Czy liczba jest wiêksza 16", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              int liczba5 = MessageBox(0, "Czy liczba to 17", "Patrz mi w oczy", MB_YESNO);
              if (liczba5 == IDYES)
              {
                MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
              }
              else
              {
                MessageBox(0, "Twoja liczba to 18 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
              }
            }
            else
            {
              MessageBox(0, "Twoja liczba to 16 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
        }
        else
        {
          int liczba3 = MessageBox(0, "Czy liczba jest wiêksza od 13", "Patrz mi w oczy", MB_YESNO);
          if (liczba3 == IDYES)
          {
            int liczba4 = MessageBox(0, "Czy liczba to 14", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
            }
            else
            {
              MessageBox(0, "Twoja liczba to 15 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
          else
          {
            int liczba4 = MessageBox(0, "Czy liczba jest wiêksza 11", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              int liczba5 = MessageBox(0, "Czy liczba to 12", "Patrz mi w oczy", MB_YESNO);
              if (liczba5 == IDYES)
              {
                MessageBox(0, "Wygra³em, nie mia³eœ szans szans", "Patrz mi w oczy", MB_OK);
              }
              else
              {
                MessageBox(0, "Twoja liczba to 13 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
              }
            }
            else
            {
              MessageBox(0, "Twoja liczba to 11 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
        }
      }
      else
      {
        int liczba2 = MessageBox(0, "Czy liczba jest wiêksza od 5", "Patrz mi w oczy", MB_YESNO);
        if (liczba2 == IDYES)
        {
          int liczba3 = MessageBox(0, "Czy liczba jest wiêksza od 8", "Patrz mi w oczy", MB_YESNO);
          if (liczba3 == IDYES)
          {
            int liczba4 = MessageBox(0, "Czy liczba to 9", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
            }
            else
            {
              MessageBox(0, "Twoja liczba to 10 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
          else
          {
            int liczba4 = MessageBox(0, "Czy liczba jest wiêksza 6", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              int liczba5 = MessageBox(0, "Czy liczba to 7", "Patrz mi w oczy", MB_YESNO);
              if (liczba5 == IDYES)
              {
                MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
              }
              else
              {
                MessageBox(0, "Twoja liczba to 8 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
              }
            }
            else
            {
              MessageBox(0, "Twoja liczba to 6 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
        }
        else
        {
          int liczba3 = MessageBox(0, "Czy liczba jest wiêksza od 3", "Patrz mi w oczy", MB_YESNO);
          if (liczba3 == IDYES)
          {
            int liczba4 = MessageBox(0, "Czy liczba to 4", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              MessageBox(0, "Wygra³em, nie mia³eœ szans szans", "Patrz mi w oczy", MB_OK);
            }
            else
            {
              MessageBox(0, "Twoja liczba to 5 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
          else
          {
            int liczba4 = MessageBox(0, "Czy liczba jest wiêksza 1", "Patrz mi w oczy", MB_YESNO);
            if (liczba4 == IDYES)
            {
              int liczba5 = MessageBox(0, "Czy liczba to 2", "Patrz mi w oczy", MB_YESNO);
              if (liczba5 == IDYES)
              {
                MessageBox(0, "Wygra³em, nie mia³eœ szans", "Patrz mi w oczy", MB_OK);
              }
              else
              {
                MessageBox(0, "Twoja liczba to 3 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
              }
            }
            else
            {
              MessageBox(0, "Twoja liczba to 1 ale i tak wygra³em", "Patrz mi w oczy", MB_OK);
            }
          }
        }
      }
    }
  }
  else
  {
    MessageBox(0, "To nie gramy", "Game over", MB_OK | MB_ERR_INVALID_CHARS);
  }

  return 0;
}