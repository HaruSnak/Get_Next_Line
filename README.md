<img src="readme/gnl.png" alt="gnl" width="900"/>

<div align="center">

# Get_Next_Line
### A Reimplementation of the C get_next_line Function

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![License][license-shield]][license-url]

</div>

---

## 🇬🇧 English

<details>
<summary><b>📖 Click to expand/collapse English version</b></summary>

### 📖 About

**Get_Next_Line** is a compulsory project for 42 School students. It consists of reimplementing the get_next_line function in C, creating a function that reads a line from a file descriptor.

This project teaches:
- File descriptor reading and buffer management
- Static variable usage for state persistence
- Memory management for dynamic strings
- Handling multiple file descriptors (bonus)
- Code documentation and norming standards

### 🧠 Skills Learned

By completing the Get_Next_Line project, students develop essential skills in C programming:

- **File descriptor handling**: Learning to read from and manage file descriptors, including stdin and files.
- **Buffer management**: Efficiently handling buffers of variable sizes defined by BUFFER_SIZE, reading as little data as possible each time.
- **Static variables**: Using static variables to persist state between function calls, crucial for reading lines incrementally.
- **Dynamic memory management**: Mastering malloc and free for allocating and deallocating memory for strings, avoiding leaks.
- **Error handling**: Implementing robust error checking for invalid file descriptors, read failures, and end-of-file conditions.
- **String manipulation**: Building and manipulating strings dynamically, including concatenation and substring extraction.
- **Edge case management**: Handling special cases like empty lines, files without trailing newlines, and large files.
- **Bonus: Multiple file descriptors**: Managing state for multiple FDs simultaneously using an array of static variables.
- **Code organization**: Structuring code into modular functions, adhering to 42 norms for documentation and style.
- **Low-level I/O operations**: Gaining proficiency in system calls like read, and understanding file I/O at a low level.

### 📋 Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Compilation](#compilation)
- [Function Reference](#function-reference)
- [Credits](#credits)

<a name="features"></a>

### ✨ Features

- **Complete get_next_line reimplementation** with standard behavior
- **Strict C89/C99 compliance** with 42 School norming standards
- **Bonus support** for multiple file descriptors
- **Fully documented** with clear purpose statements
- **Configurable buffer size** via BUFFER_SIZE macro

<a name="installation"></a>

### 🚀 Installation

```bash
# Clone the repository
git clone https://github.com/HaruSnak/Get_Next_Line
cd Get_Next_Line
```

<a name="usage"></a>

### 💻 Usage

Include the header in your C projects:

```c
#include "get_next_line.h"
```

Compile your program with the source files:

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 your_program.c get_next_line.c get_next_line_utils.c -o your_program
./your_program
```

For bonus:

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 your_program.c get_next_line_bonus.c get_next_line_utils_bonus.c -o your_program
./your_program
```

<a name="project-structure"></a>

### 📂 Project Structure

```
Get_Next_Line/
├── get_next_line.h              # Main header file
├── get_next_line.c              # Main get_next_line function
├── get_next_line_utils.c        # Utility functions
├── get_next_line_bonus.h        # Bonus header file
├── get_next_line_bonus.c        # Bonus get_next_line function
├── get_next_line_utils_bonus.c  # Bonus utility functions
├── LICENSE                      # License file
├── README.md                    # This file
└── readme/                      # Assets folder
    └── gnl.png
```

<a name="compilation"></a>

### 🔧 Compilation

Compile with or without -D BUFFER_SIZE flag:

```bash
# With custom buffer size
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

# Without flag (defaults to 1)
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c
```

<a name="function-reference"></a>

### 📚 Function Reference

#### Main Function
- [`get_next_line`](get_next_line.c) - Reads a line from a file descriptor

#### Utility Functions
- [`ft_strjoin`](get_next_line_utils.c) - Concatenates two strings
- [`ft_substr`](get_next_line_utils.c) - Extracts a substring
- [`ft_strdup`](get_next_line_utils.c) - Duplicates a string
- [`ft_strlen`](get_next_line_utils.c) - Calculates string length

### 👨‍🎓 Note
<p align="left">
    <img src="https://image.noelshack.com/fichiers/2024/11/2/1710270009-125.png"
         alt="125/100" width="216" height="164">
</p>

<a name="credits"></a>

### 📖 Credits

- **42 School Norm**: [Official C Coding Standard](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)

### 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

</details>

---

## 🇫🇷 Français

<details>
<summary><b>📖 Cliquez pour développer/réduire la version française</b></summary>

### 📖 À propos

**Get_Next_Line** est un projet obligatoire pour les étudiants de l'école 42. Il s'agit de réimplémenter la fonction get_next_line en C, créant une fonction qui lit une ligne depuis un descripteur de fichier.

Ce projet enseigne :
- La lecture de descripteurs de fichiers et la gestion des tampons
- L'utilisation de variables statiques pour la persistance d'état
- La gestion de la mémoire pour les chaînes dynamiques
- La gestion de plusieurs descripteurs de fichiers (bonus)
- La documentation du code et les normes de programmation

### 🧠 Compétences acquises

En complétant le projet Get_Next_Line, les étudiants développent des compétences essentielles en programmation C :

- **Gestion des descripteurs de fichiers** : Apprendre à lire et gérer les descripteurs de fichiers, y compris stdin et les fichiers.
- **Gestion des tampons** : Gérer efficacement les tampons de tailles variables définies par BUFFER_SIZE, en lisant le moins de données possible à chaque fois.
- **Variables statiques** : Utiliser des variables statiques pour persister l'état entre les appels de fonction, crucial pour lire les lignes de manière incrémentielle.
- **Gestion de la mémoire dynamique** : Maîtriser malloc et free pour allouer et désallouer la mémoire pour les chaînes, en évitant les fuites.
- **Gestion d'erreurs** : Implémenter une vérification d'erreurs robuste pour les descripteurs de fichiers invalides, les échecs de lecture et les conditions de fin de fichier.
- **Manipulation de chaînes** : Construire et manipuler des chaînes dynamiquement, y compris la concaténation et l'extraction de sous-chaînes.
- **Gestion des cas limites** : Gérer des cas spéciaux comme les lignes vides, les fichiers sans nouvelle ligne finale et les gros fichiers.
- **Bonus : Plusieurs descripteurs de fichiers** : Gérer l'état pour plusieurs FDs simultanément en utilisant un tableau de variables statiques.
- **Organisation du code** : Structurer le code en fonctions modulaires, en respectant les normes 42 pour la documentation et le style.
- **Opérations d'E/S de bas niveau** : Acquérir une maîtrise des appels système comme read, et comprendre l'E/S de fichiers à un niveau bas.

### 📋 Table des matières

- [Caractéristiques](#caractéristiques)
- [Installation](#installation-1)
- [Utilisation](#utilisation)
- [Structure du projet](#structure-du-projet)
- [Compilation](#compilation-1)
- [Référence des fonctions](#référence-des-fonctions)
- [Crédits](#crédits-1)

<a name="caractéristiques"></a>

### ✨ Caractéristiques

- **Réimplémentation complète de get_next_line** avec comportement standard
- **Conformité stricte C89/C99** avec les normes de l'école 42
- **Support du bonus** pour plusieurs descripteurs de fichiers
- **Entièrement documentées** avec des descriptions claires
- **Taille de tampon configurable** via la macro BUFFER_SIZE

<a name="installation-1"></a>

### 🚀 Installation

```bash
# Cloner le dépôt
git clone https://github.com/HaruSnak/Get_Next_Line
cd Get_Next_Line
```

<a name="utilisation"></a>

### 💻 Utilisation

Incluez l'en-tête dans vos projets C :

```c
#include "get_next_line.h"
```

Compilez votre programme avec les fichiers sources :

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 votre_programme.c get_next_line.c get_next_line_utils.c -o votre_programme
./votre_programme
```

Pour le bonus :

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 votre_programme.c get_next_line_bonus.c get_next_line_utils_bonus.c -o votre_programme
./votre_programme
```

<a name="structure-du-projet"></a>

### 📂 Structure du projet

```
Get_Next_Line/
├── get_next_line.h              # Fichier d'en-tête principal
├── get_next_line.c              # Fonction get_next_line principale
├── get_next_line_utils.c        # Fonctions utilitaires
├── get_next_line_bonus.h        # Fichier d'en-tête bonus
├── get_next_line_bonus.c        # Fonction get_next_line bonus
├── get_next_line_utils_bonus.c  # Fonctions utilitaires bonus
├── LICENSE                      # Fichier de licence
├── README.md                    # Ce fichier
└── readme/                      # Dossier des ressources
    └── gnl.png
```

<a name="compilation-1"></a>

### 🔧 Compilation

Compilez avec ou sans l'option -D BUFFER_SIZE :

```bash
# Avec taille de tampon personnalisée
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

# Sans option (défaut à 1)
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c
```

<a name="référence-des-fonctions"></a>

### 📚 Référence des fonctions

#### Fonction principale
- [`get_next_line`](get_next_line.c) - Lit une ligne depuis un descripteur de fichier

#### Fonctions utilitaires
- [`ft_strjoin`](get_next_line_utils.c) - Concatène deux chaînes
- [`ft_substr`](get_next_line_utils.c) - Extrait une sous-chaîne
- [`ft_strdup`](get_next_line_utils.c) - Duplique une chaîne
- [`ft_strlen`](get_next_line_utils.c) - Calcule la longueur d'une chaîne

### 👨‍🎓 Note
<p align="left">
    <img src="https://image.noelshack.com/fichiers/2024/11/2/1710270009-125.png"
         alt="125/100" width="216" height="164">
</p>

<a name="crédits-1"></a>

### 📖 Crédits

- **Norme 42**: [Standard C officiel](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)

### 📄 Licence

Ce projet est sous licence **MIT** - voir le fichier [LICENSE](LICENSE) pour plus de détails.

</details>

---

[contributors-shield]: https://img.shields.io/github/contributors/HaruSnak/Get_Next_Line.svg?style=for-the-badge
[contributors-url]: https://github.com/HaruSnak/Get_Next_Line/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/HaruSnak/Get_Next_Line.svg?style=for-the-badge
[forks-url]: https://github.com/HaruSnak/Get_Next_Line/network/members
[stars-shield]: https://img.shields.io/github/stars/HaruSnak/Get_Next_Line.svg?style=for-the-badge
[stars-url]: https://github.com/HaruSnak/Get_Next_Line/stargazers
[issues-shield]: https://img.shields.io/github/issues/HaruSnak/Get_Next_Line.svg?style=for-the-badge
[issues-shield]: https://img.shields.io/github/issues/HaruSnak/Get_Next_Line.svg?style=for-the-badge
[issues-url]: https://github.com/HaruSnak/Get_Next_Line/issues
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/shany-moreno-5a863b2aa
[license-shield]: https://img.shields.io/github/license/HaruSnak/Get_Next_Line.svg?style=for-the-badge
[license-url]: https://github.com/HaruSnak/Get_Next_Line/blob/master/LICENSE
