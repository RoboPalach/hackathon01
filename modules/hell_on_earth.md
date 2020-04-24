# Peklo na Zemi

Kubík Hampl

### Rychlé shrnutí

Modul 'Peklo na zemi' využívá ovládacího panelu TM1638. Cílem je, aby jste si při zneškodňování tohoto modulu přáli neexistovat. 

### Hardwarový popis

Modul je ovládací panel TM1638. Obsahuje 8 tlačítek, 8 světlo vyzařujících diod a 8 osmi-segmentových displayů. K ESP je připojen 3 datovými dráty.

### Popis zneškodnění

Cílem je dle LED vytvořit na displayích určitý vzor.

Jakmile zmáčknete tlačítko, display nad ním změní svůj vzor. Toto je třeba opakovat s každým tlačítkem, dokud všechny displaye dohomady netvoří jeden velký vzor.

Jaký vzor vytvořit určují světlo vyzařující diody spolu s tabulkou možných vzorů (která zatím neexistuje).

Jeden samostatný display může mít jeden z těchto malých vzorů:

![Pattern 1](images/char(1).png)
![Pattern 2](images/char(8).png)
![Pattern 3](images/char(9).png)
![Pattern 4](images/char(48).png)
![Pattern 6](images/char(54).png)
![Pattern 7](images/char(112).png)
![Pattern 8](images/char(70).png)
![Pattern 9](images/char(64).png)
![Pattern 10](images/char(73).png)
![Pattern 11](images/char(63).png)
![Pattern 12](images/char(127).png)
