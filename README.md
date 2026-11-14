# Mapa de OpenStreetMap con puntos de interés (LP)

Aplicación de Windows que lee un mapa de [OpenStreetMap](https://www.openstreetmap.org) (fichero XML) y muestra sus puntos de interés (tiendas, restaurantes...) con un color según el tipo.

> Práctica de la asignatura **Laboratori de Programació (LP)** de la UAB, curso 2024-25. <!-- TODO: comprobad el nombre de la asignatura -->
> Autores: **Alicia Medina Sillero** <!-- TODO: su GitHub o LinkedIn --> y **Andreu Elias Puigvert Gómez** ([@CatCodeMage](https://github.com/CatCodeMage)).

## Qué es nuestro y qué venía dado

La asignatura nos dio el esqueleto del proyecto. Nosotros implementamos las clases `*Solucio`.

| Parte | Autoría |
|---|---|
| Interfaz gráfica en WPF/C# (`LP-OSM-2223-WPF/`) | Asignatura |
| Puente entre la DLL de C++ y la interfaz (`DLL-Bridge.cpp`), lectura de XML (`XML4OSMUtil`), `Util` | Asignatura |
| Interfaces base: `MapaBase`, `CamiBase`, `PuntDeInteresBase` | Asignatura |
| Librería Xerces-C para leer XML (`third-party/`) | Externa |
| **`MapaSolucio`**: recorre los elementos del XML, separa los nodos de interés de los nodos de camino y crea los puntos de interés | **Nuestro** |
| **`PuntDeInteresBotigaSolucio`** y **`PuntDeInteresRestaurantSolucio`**: tiendas y restaurantes con su color según el tipo (supermercado, estanco, panadería, cocina china, pizza, accesibilidad...) | **Nuestro** |
| **`CamiSolucio`**: representación de un camino como lista de coordenadas | **Nuestro** |

## Tecnologías

C++ (DLL) · C# / WPF · OpenStreetMap (XML) · Xerces-C · Visual Studio

## Ejecutarlo

Windows con Visual Studio: abre `LP-OSM-2223.sln`, compila la solución y ejecuta el proyecto WPF.

## Estado

Entrega parcial. Los puntos de interés funcionan. La construcción de los caminos (`MapaSolucio::afegeixCami`) quedó sin terminar.
