# Proiect: Gestionare Hoteluri in C++

Acest proiect implementeaza un sistem de gestionare a informatiilor despre hoteluri utilizand limbajul de programare C++. Proiectul include caracteristici avansate precum mosteniri, functii virtuale, dynamic_cast, exceptii, functii si atribute static, STL, smart pointers etc., respectand cerintele generale enumerate mai jos:

## Cerinte Generale

1. **Separarea codului in fisiere .cpp si .h:**
   - Codul este organizat in fisiere separate pentru a mentine o structura clara si modulara.
2. **Mosteniri:**
   - Functii virtuale (pure) apelate prin pointeri de clasa baza.
   - Apelarea constructorului din clasa de baza.
   - Suprascris cc/op=.
3. **dynamic_cast:**
   - Se utilizeaza dynamic_cast pentru conversii intre clase.
4. **Exceptii:**
   - ierarhie proprie cu baza std::exception sau derivata din std::exception (minim 2 clase)
   - utilizare cu sens: de exemplu, throw in constructor, try/catch in main
5. **Functii si atribute static:**
   - Se utilizeaza functii si atribute static in mod corespunzator.
6. **STL:**
   - Se utilizeaza containeri si algoritmi din STL pentru gestionarea datelor.
7. **Smart Pointers:**
    - Se utilizează smart pointers pentru gestionarea resurselor.
8. **Cat mai multe const**
9. **Rescriere operator <<**
10. **Citirea informatiilor complete a n obiecte (de diferite tipuri), memorarea si afisarea acestora:**
    - Programul permite utilizatorului sa introduca informatiile complete pentru n obiecte de diferite tipuri (de exemplu, Hoteluri) si sa le stocheze intr-o structura de date adecvata (de exemplu, vector, lista). Informatiile pot fi apoi afisate.
11. **Meniu interactiv:**
    - Programul include un meniu interactiv pentru a interactiona cu utilizatorul. Meniul poate oferi optiuni pentru citirea informatiilor, afisarea acestora, gestionarea resurselor etc.
