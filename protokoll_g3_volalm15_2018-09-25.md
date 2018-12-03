
# Protokoll Nr. 02  ![](https://upload.wikimedia.org/wikipedia/commons/thumb/3/30/HTL_Kaindorf_Logo.svg/300px-HTL_Kaindorf_Logo.svg.png) 
�bungsdatum: **25.09.2018**  
Name: Vollmaier Alois  
KNr.: 15 Klasse: 4AHME  
Gruppe: 3  

Anwesenheit:  

| Anwesend | Abwesend|
| ------------- |:-------------:|
| Vezonik, Vollmaier, Wesonig, WinterM., WinterT.    | Wegl |

___
### Themen-�bersicht
 - **[1]**-Kompilierung
	 - [1.1] - *Grundbegriffe der Kompilierung* 
 - **[2]** - Terminal
	 - [2.1] - *Commands und deren Erkl�rung* 
 - **[3]** - Manuelles Kompilieren mithilfe der Konsole
	  

## [1] Kompilierung
[1.1] - **Grundbegriffe der Kompilierung** 

**Was ist ein Compiler?**  
Ein **Compiler** ist ein Programm, das in einer h�heren Programmiersprache wie z.B. Java verfassten **Quellcode in maschinenlesbare Sprache**, den sogenannten Objektcode, Zielsprache oder auch Assemblersprache �bersetzt. Man k�nnte einen Compiler demnach auch als �bersetzer bezeichnen, doch seine Aufgaben sind weitreichender, denn beim Compilen ermittelt das Programm zus�tzlich Fehler beim Auslesen des Codes.

**Wie arbeitet ein Compiler?**  
Ein **Compiler** arbeitet sich immer komplett durch ein gesamtes Dokument durch. Auf diese Weise unterscheidet sich seine Arbeit vom  Interpreter. Bevor der Compiler h�heren Quellcode in maschinenlesbare Zielsprache �bersetzen kann, muss der Quellcode gescannt und Programmsymbole extrahiert werden. Nach dieser lexikalischen Analyse erfolgt das Parsing. Hierbei wird die syntaktische Korrektheit des Codes �berpr�ft. Anschlie�end wird die Semantik des Codes ermittelt, um zum Schluss den Zielcode zu erstellen. Fehler im Code versucht der Compiler zu optimieren bzw. auszublenden. �blicherweise laufen alle Einzelschritte in wenigen Sekunden ab.

Wichtig ist, dass der Compiler trotz Fehler im Code weiterarbeitet. Ansonsten kann der Quellcode nicht in maschinenlesbare Zielsprachen �bertragen werden.

**Was ist ein Linker?**  
**Linker** helfen den Programmierer, die �bersetzten Programme zum Ablauf zu bringen. Die kompilierten Objektprogramme sind noch nicht lauff�hig. Da im Quellprogramm verlangte Programmteile, wie z.B. Ein- und Ausgabeprozeduren, hinzugef�gt werden m�ssen, bindet der Linker diesen Objektcode mit externen Bibliotheken zusammen. Ergebnis dieses Binden ist dann das ablauff�hige Programm.

**Was ist ein Assembler?**  
**Assembler** ist eine Programmiersprache, welche eine f�r Menschen bessere, lesbare Repr�sentation der Maschinensprache ist. Als _Assembler_ wird nicht nur die Sprache selbst, sondern auch ihr Compile benannt. �bersetzt der Compiler ein Assembler-Programm in die Maschinensprache, so nennt man den Vorgang "_assemblieren_". Den umgekehrten Vorgang nennt man "_disassemblieren_".

**Was ist ein GCC-Compiler**  
Der C-Compiler von **GNU**, _gcc_, ist einer der vielseitigsten und fortschrittlichsten aller verf�gbaren Compiler. Anders als andere C-Compiler (zum Beispiel die mit AT&T- oder BSD-Distributionen ausgelieferten oder solche von Drittherstellern) unterst�tzt _gcc_ alle modernen C-Standards - etwa ANSI-C - sowie viele Erweiterungen, die nur in _gcc_ zu finden sind. Gl�cklicherweise kann _gcc_ trotzdem zu �lteren C-Compilern und �lteren Methoden der C-Programmierung kompatibel gemacht werden.
___

**Was ist ein Terminal/Shell/Bash?**

Weil die direkte Kommunikation mit dem Betriebssystem-Kern f�r einen Benutzer viel zu komplex w�re, ist eine vereinfachte Benutzer-Schnittstelle erforderlich. Neben einer grafischen Schnittstelle wie dem X Window System wird diese Leistung vor allem von einer Shell bereitgestellt. Der englische Ausdruck **Shell**, zu Deutsch etwa **Schale** oder **Ummantelung**, dr�ckt diesen Sachverhalt bereits aus. Die �bersetzung oder Symbolisierung als **Muschel** hat dabei wohl mehr mit Spieltrieb und Anschaulichkeit als mit einem echten technischen Hintergrund zu tun. Jedenfalls l�sst sich eine Shell als eine Schicht zwischen Betriebssystem und Benutzer verstehen.

![enter image description here](https://image.ibb.co/h7S79K/unspecified.png)  
W�hrend Benutzer, die noch nicht h�ufig mit Shells in Ber�hrung gekommen sind, den wartenden Eingabeprompt einer Shell als trist und abweisend, ja sogar als Hindernis empfinden m�gen, wurden Shells doch mit der gegenteiligen Absicht entwickelt: Sie sollten die t�gliche Arbeit vereinfachen und erleichtern.

**Was ist eine Bibliothek?**

Bibliotheken Die C-Standard-Bibliothek (englisch C standard library) ist die Standardbibliothek der Programmiersprache C. In jeder standardkonformen betriebssystemgest�tzten Implementierung (hosted environment) von C muss die C-Standard-Bibliothek in vollem Umfang vorhanden sein. Hingegen m�ssen freistehende Umgebungen (freestanding environment), wie man sie beispielsweise im Embedded-Bereich h�ufig antrifft, nur eine festgelegte Untermenge der Standardbibliothek anbieten, um standardkonform zu sein.

## [2] Terminal
[2.1] - **Grundbefehle und deren Erkl�rung** 

**Verzeichnis wechseln**: �ber die Eingabe des Befehls "`cd`" wechselt man in das n�chsth�here Verzeichnis.

> [user@linux user1]$  **cd**

**Anzeige des aktuellen Verzeichnisses**: Wenn man nicht mehr wei�t, in welchem Verzeichnis man sich gerade befindet, kann man es sich mit Hilfe von "`pwd`" anzeigen lassen.

> [user@linux user1]$  **pwd**

**Inhalte von Verzeichnisse anzeigen**: "`ls`" zeigt alle Dateien an, die sich im momentanen Verzeichnis befinden.

> [user@linux user1]$  **ls**

**ls** [OPTION]� [DATEI]�

**Beispiele f�r Operatoren:**  

**-a**, **--all**
              Eintr�ge nicht ignorieren, die mit �.� beginnen
              **-A**, **--almost-all**
              Die impliziten Eintr�ge �.� und �..� nicht auflisten
              **-b**, **--escape**
              Bei nichtdruckbaren Zeichen Maskierungen im C-Stil ausgeben
Liste aller Operatoren: [Mirror
](http://manpages.ubuntu.com/manpages/bionic/de/man1/ls.1.html)
___
**Eingabefenster l�schen**: Mit dem Befehl "`clear`" r�umt man das Eingabefenster auf und l�scht alle bisherigen Eingaben.

> [user@linux user1]$  **clear**            


**Handbuch aufrufen**: �ber den Befehl "`man`" ruft man eine Handbuchseite mit Informationen zu einem Befehl oder einer Anwendung auf.
> [user@linux user1]$  **man**            
  
  **Verkn�pfung von Dateien**: Mit dem Befehl "`cat`" kannst du dir Dateien anzeigen lassen und Inhalte verkn�pfen.
> [user@linux user1]$  **cat**    
  ___

  `which`--Anzeige der Datei, die bei Eingabe eines Befehls ausgef�hrt wird

`mkdir`--**mkdir** steht f�r **m**a**k**e **dir**ectory und dient zum Anlegen von einem oder mehreren Verzeichnissen.

`rmdir`---**rmdir** steht f�r **r**e**m**ove **dir**ectory und dient zum L�schen von Verzeichnisse, die leer sind. Mit Hilfe des Befehl "`rm`" lassen sich auch nicht-leere Verzeichnisse l�schen.

`mv`---**mv** steht f�r **m**o**v**e und verschiebt eine Datei, wobei der Befehl teilweise auch zum Umbenennen verwendet wird.

> **mv** [OPTION] QUELLE ZIEL

`cp`---**cp** steht f�r **c**o**p**y und ist der Befehl zum Kopieren, es k�nnen Dateien oder ganze Verzeichnisse kopiert werden.

> cp [OPTIONEN] QUELLE ZIEL
___
**Absolut:** genauer Platz z.b `/home/schueler/folder`  
**Relativ:**  von der Position abh�ngig `/Schreibtisch`

### Das Zeichen  **"~"**

Oft wird die Kurzform  **~/Ordnername**  verwendet. Die Tilde  **~**  steht f�r eine Shell-Extension, also quasi eine Abk�rzung, die immer auf  **/home/BENUTZERNAME/**  verweist.

### Der Pipe-Operator **"|"**

Der Pipe-Operator leitet die Ausgabe eines Befehls direkt an einen anderen Befehl weiter (anstatt ins Terminal). Damit kann der zweite Befehl das Ergebnis bzw. die Ausgabe des ersten Befehls weiterverarbeiten. Die allgemeine Syntax lautet (man kann nat�rlich auch mehr als zwei Befehle miteinander verbinden):

> Befehl1 | Befehl2
> 
**Nano** ist ein einfacher Editor, der die Bearbeitung von Dateien in einem Terminal bzw. auf der Konsole erlaubt.

    nano [OPTIONEN] [DATEI]

## [2] Manuelles Kompilieren mithilfe der Konsole

`nano main.c` | - �ffnet die main.c mithilfe des **nano** Editors -> Programm schreiben
```
#incude <stdio.h>
int main()
{
printf("Hallo, Guten Morgen\n");
return 0;
}
```

Strg + o Datei wird gespeichert
Strg + x Editor wird beendet


`hexdump -C ("DATEINAME")` |-Anzeigen des Codes auf der Konsole in Hexadezimal 

**Kompilierungsvorgang:**

`gcc main.c **-E** ` |-Preprozessieren  
`gcc main.c **-S** ` |-Kompilieren  
`gcc main.c **-c** ` |-Assemblieren     --- `objdump--dissasemble-all main.c`  
`gcc main.c **-o**`  |-Object Datei erstellen    
![enter image description here](https://image.ibb.co/hjjOGz/8YD.png)    
   *`avr-gcc` Wird nur f�r Mikrocontroller verwendet*
