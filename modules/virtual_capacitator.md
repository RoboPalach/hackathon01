# Viruální kapacitátor

**Pavel Šrytr**

### Rychlé shrnutí

<<<<<<< HEAD
Pyrotechnik musí udržet hladinu "napětí" pod určenou hranicí. Hladina napětí je zobrazen na 10 místném LED baragrafu. Hranice bude stanovena v návodu. Hladina se snižuje stiskem tlačítka. Doba plného nabití je variabilní.
=======
Pyrotechnik musí udržet hladinu "napětí" pod určenou hranicí. Hladina napětí je zobrazena na 10-ti místném LED baragrafu. Hranice bude stanovena v návodu. Hladina se snižuje stiskem tlačítka.
>>>>>>> 64dfb365751adafffb0d089cab32b43ec868c402

### Hardwarový popis

Baragraf je ovládán dvěma 8 bitovými posuvnými registry [https://www.onsemi.com/pub/Collateral/MC74HC595-D.PDF](74HC595). Deset výstupů z registrů je použito na ovládání paragrafu. Zbylých 6 výstupů je pro volné použití u jiných modulů. Dále je zapojeno tlačítko.

    - 3 digitální výstupy pro registry
    - 1 digitální vstup pro tlačítko
    - 6 digitálních výstupů **zbyde**

### Popis zneškodnění

Modul nelze zneškodnit, musí se celou hru udržovat na stanovené hladině. Pokud hodnota hladinu překročí, bomba vybouchne. Hladina se snižuje, pokud je stisknuté tlačítko.
