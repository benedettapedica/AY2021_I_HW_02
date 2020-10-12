README- Descrizione del codice

Per lo sviluppo del progetto, partendo dallo schematico ho collegato i due canali del mio LED RGB ad anodo comune con due pin digitali attraverso una resistenza 330 alle porte 2.6 (Verde) e 2.7 (Rosso). I due pin sono stati poi collegati ai rispettivi PWM, entrambi comandati da un clock a 128 Hz.
Per lo switch tra i diversi pattern ho utilizzato due PWM, una per ognuno dei due canali controllati, in quanto negli ultimi due pattern i periodi delle due onde quadre sono differenti. I parametri dei PWM sono stati settati in base a considerazioni fatte sulla forma d'onda voluta sulla base del fatto che per far sì che il LED si accenda è necessario che il pin sia basso. 
Il periodo è stato settato direttamente dal grafico, il compare value in base al duty cycle necessario ed il compare mode in base al fronte di salita o discesa voluto (perchè in alcuni casi lo stato iniziale è alto mentre in altri è basso). 
Ho poi utilizzato un reset del counter di entrambi i PWM per garantire sincronismo.
In corrispondenza del push button collegato alla porta 2.1 (pulsante onboard) ho utilizzato un debouncer chiamato da un'interrupt isr che viene triggerata nel caso in cui il pulsante onboard venga premuto.
Ho così generato il mio programma che mi permette di switchare in maniera sequenzale nei 7 diversi pattern. 