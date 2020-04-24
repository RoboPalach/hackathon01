# Numeric Code

**Jan Kalina**

### Rychlé shrnutí
Modul obsahuje pouze klávesnici 4x4. Čísla se zadávají hexadecimálně.

### Hardwarový popis
Klávesnice 4x4 pro zadání čísel HEX soustavy.

### Popis zneškodnění
Správné zadání kódu se určuje podle sériového čílsa. Tento modul se *musí* vyřadit v určitém pořadí. Např. když je sériové číslo 0000, musí se modul vyřadit jako 1.

#### Příklady
| Sériové číslo | Pořadí modulu | Kód |
| :-: | :-: | :-: |
| 0000 | 1 | 65 535 |
| 0000 | 6 | 48 832 |
| 0001 | 5 | 43 981 |
