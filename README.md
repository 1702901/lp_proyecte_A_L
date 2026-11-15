# OpenStreetMap viewer with points of interest (LP)

A Windows application that reads an [OpenStreetMap](https://www.openstreetmap.org) map (XML file) and displays its points of interest (shops, restaurants...) with a color that depends on their type.

> Coursework for the **Laboratori de Programació (LP)** course at UAB, 2024-25. <!-- TODO: check the course name -->
> Authors: **Alicia Medina Sillero** <!-- TODO: her GitHub or LinkedIn --> and **Andreu Elias Puigvert Gómez** ([@CatCodeMage](https://github.com/CatCodeMage)).

## What is ours and what was provided

The course gave us the project skeleton. We implemented the `*Solucio` classes.

| Part | Author |
|---|---|
| WPF/C# graphical interface (`LP-OSM-2223-WPF/`) | Course |
| Bridge between the C++ DLL and the interface (`DLL-Bridge.cpp`), XML reading (`XML4OSMUtil`), `Util` | Course |
| Base interfaces: `MapaBase`, `CamiBase`, `PuntDeInteresBase` | Course |
| Xerces-C library for XML parsing (`third-party/`) | Third party |
| **`MapaSolucio`**: walks the XML elements, separates points of interest from path nodes and creates the points of interest | **Ours** |
| **`PuntDeInteresBotigaSolucio`** and **`PuntDeInteresRestaurantSolucio`**: shops and restaurants with a color based on their type (supermarket, tobacco shop, bakery, Chinese cuisine, pizza, accessibility...) | **Ours** |
| **`CamiSolucio`**: a path represented as a list of coordinates | **Ours** |

## Tech

C++ (DLL) · C# / WPF · OpenStreetMap (XML) · Xerces-C · Visual Studio

## Running it

Windows with Visual Studio: open `LP-OSM-2223.sln`, build the solution and run the WPF project.

## Status

Completed
