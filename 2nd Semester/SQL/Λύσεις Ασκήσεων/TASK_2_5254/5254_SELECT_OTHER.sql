--α. Να δοθεί ένα παράδειγμα WHERE με χρήση μιας συνθήκης που θα χρησιμοποιεί κάποιον από τους τελεστές ( =, >, <, < >, >=, <=,). 
--Εμφανίζει τα ονόματα των οχημάτων που δεν διαθέτει η επιχείρηση και δεν μπορεί να τα προσφέρει προς ενοικίαση έτσι ώστε μέσα στο επόμενο διάστημα να προγραμματίσει να προσθέσει κι αυτά στον "κατάλογό" της.
SELECT NAME FROM VEHICLECAT WHERE VEHICLECAT.VehicleCount=0;

--β. Να δοθεί ένα παράδειγμα WHERE με χρήση σύνθετης συνθήκης AND.
--Επειδή καταχωρήθηκε λάθος στο σύστημα ο αριθμός ταυτότητας του Χρήστου, ψάχνουμε το ονοματεπώνυμό του ώστε να εμφανιστούν τα στοιχεία που αντιστοιχούν σε αυτόν και να διορθώσουμε ότι χρειάζεται.
SELECT * FROM CUSTOMER WHERE CUSTOMER.cLastName='CHRISTOY' AND CUSTOMER.cFirstName='CHRISTOS';

--γ. Να δοθεί ένα παράδειγμα WHERE με χρήση σύνθετης συνθήκης OR.
SELECT * FROM VEHICLE WHERE VEHICLE.vPlateNumber='QRS5204' OR VEHICLE.vColor='ROZ';

--δ. Να δοθεί ένα παράδειγμα WHERE με χρήση σύνθετης συνθήκης ΝΟΤ. 
SELECT * FROM VEHICLE WHERE NOT (VEHICLE.vPlateNumber='KDE8480');

--ε. Να δοθεί ένα παράδειγμα WHERE με χρήση συνθήκης που έχει στήλη NULL.
SELECT * FROM RENTING WHERE InDate IS NULL;

--στ. Να δοθεί ένα παράδειγμα WHERE με χρήση BETWEEN.
SELECT * FROM CUSTOMER WHERE (cRegDate BETWEEN TO_DATE('05/02/2021', 'DD/MM/YYYY') AND TO_DATE('15/02/2021', 'DD/MM/YYYY'));

--ζ. Να δοθεί ένα παράδειγμα WHERE με χρήση IN. 
SELECT * FROM CUSTOMER WHERE cAFM IN ('100025128', '200093814');

--η. Να δοθούν δυο παραδείγματα WHERE με χρήση LIKE.
SELECT * FROM CUSTOMER WHERE cFirstName LIKE '%AS';
SELECT * FROM CUSTOMER WHERE cFirstName LIKE 'D%';
 
--θ. Να δοθεί ένα παράδειγμα WHERE που στη συνθήκη θα συγκρίνει δυο στήλες.
--(Το παράδειγμα δεν είναι και πολύ λογικό).
SELECT vPlateNumber, vColor, vCC, vHorsePower, vRentTimes, VehCatName FROM VEHICLE 
WHERE vCC > vHorsePower;
 
--ι. Να δοθούν δυο παραδείγματα SELECT με χρήση DISTINCT.
--Βλέπουμε εάν έχουν ενοικιαστεί όλα τα οχήμα της επιχείρησης από τουλάχιστον μία φορά. Βέβαια υπάρχει και πιο εύκολος τρόπος αλλά για να βγει το παράδειγμα χρησιμοποιώ αυτόν.
SELECT DISTINCT vPlateNumber FROM RENTING;

--κ. Να δοθεί ένα παράδειγμα SELECT με χρήση στήλης ημερομηνίας.
--Εμφανίζει τις επιστροφές έχουν γίνει τις τελευταίες δέκα μέρες και από ποιους.
SELECT cAFM, sysdate, InDate, sysdate - InDate FROM RENTING WHERE (sysdate - InDate)<10;


