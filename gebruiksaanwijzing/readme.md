**Opladen / Vervangen van Batterijen**  
De LIPO 2S batterijen vereisen een speciale oplader. Gebruik nooit een oplader die hier niet specifiek voor bedoeld is, omdat dit ernstige schade kan veroorzaken.  . Let goed op de juiste polariteit bij het plaatsen van de batterijen,in de oplader.  

---

**Draadloze Communicatie**  

**Verbinding maken**  
De auto is uitgerust met een Bluetooth-module voor draadloze communicatie. Let op: deze module is niet compatibel met Apple-apparaten, gebruik dus een Android-toestel. Installeer de app *Serial Bluetooth Terminal* om commando's naar de auto te sturen. Verbind eerst via de Bluetooth-instellingen van uw apparaat met de module en selecteer deze vervolgens in de app. Daarna is de draadloze communicatie klaar voor gebruik.  

---

**Commando's**  

- **debug [on/off]**: Toont de ingestelde parameters.  
- **run**: Start de auto (rijden begint).  
- **stop**: Stopt de auto.  
- **set cycle [µs]**: Stelt de maximale cyclusduur in (ongeveer dubbel de berekeningstijd die bij *debug* wordt weergegeven).  
- **set power [0..255]**: Stelt het motorvermogen in. Zet dit niet zomaar op het maximum; de auto zal anders alleen wheelies maken.  
- **set diff [0..1]**: Stelt het snelheidsverschil in tussen rechte stukken en bochten. Hoe hoger de waarde, hoe minder de auto vertraagt in bochten.  
- **set kp [0..]**: Bepaalt hoe agressief de auto instuurt. Bij een te hoge waarde schokt de auto heen en weer over de lijn.  
- **set ki [0..]**: Vergroot de stuurcorrectie naarmate de bocht langer duurt.  
- **set kd [0..]**: Corrigeert de fout van *kp*. Hoe groter de fout, hoe sterker de correctie.  
- **calibrate black**: Uitvoeren terwijl de sensor op een zwart oppervlak staat, zodat de auto zwart kan herkennen.  
- **calibrate white**: Uitvoeren terwijl de sensor op een wit oppervlak staat, zodat de auto wit kan herkennen.  

---

**Kalibratie**  
Kalibratie is vereist voordat de auto begint te rijden en moet worden uitgevoerd op hetzelfde type oppervlak waarop de auto zal rijden. Zorg dat de juiste kleur wordt gebruikt (niet een kleur die er slechts op lijkt).  

Plaats de auto op het juiste oppervlak en stuur vervolgens de commando's *calibrate black* en *calibrate white* zoals hierboven uitgelegd.  

---

**Instellingen**  
Voor stabiel rijden worden de volgende parameters aanbevolen:  

- **Cycle time**: 3000  
- **Power**: 72  
- **Diff**: 0.74  
- **Kp**: 20  
- **Ki**: 0  
- **Kd**: 0.90  

---

**Start/Stop-knop**  
Schakel de batterijspanning in via de schakelaar aan de voorkant van de batterijhouder. Druk vervolgens op de startknop, die zich aan de rechterkant in het midden van de printplaat bevindt, om de auto te laten rijden. Druk tijdens het rijden opnieuw op dezelfde knop om de auto te stoppen.  
