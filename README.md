# Interrupteur-infrarouge

Description

Ce projet Arduino utilise un capteur infrarouge (IR) pour détecter la présence d’un obstacle (comme une main ou un objet).
Lorsque le capteur détecte un obstacle, la LED s’allume automatiquement ; on peut aussi l'éteindre en repassant devant le capteure.

Ce type de montage est très utile pour comprendre le fonctionnement basique des capteurs IR, souvent utilisés dans les robots éviteurs d’obstacles, les systèmes de détection de mouvement ou les interrupteurs sans contact.


Conecxions 

| Composant  | Broche du module | Broche Arduino | Description                            |
| ---------- | ---------------- | -------------- | -------------------------------------- |
| Capteur IR | VCC              | 5V             | Alimentation du capteur                |
|            | OUT              | D7             | Signal de détection envoyé à l’Arduino |
|            | GND              | GND            | Masse commune                          |
| LED        | Anode (+)        | D6             | Signal de commande de la LED           |
|            | Cathode (–)      | GND            | Masse commune                          |
