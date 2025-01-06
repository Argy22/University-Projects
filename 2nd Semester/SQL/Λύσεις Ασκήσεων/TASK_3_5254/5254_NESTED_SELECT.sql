-- α.1 Να βρεθούν τα οχήματα και ο τύπος των οχημάτων που έχουν ίδιο χρώμα με το όχημα που έχει αριθμό πινακίδας KDE8480.
SELECT vPlateNumber,VehCatName,vColor
FROM VEHICLE
WHERE vColor IN (SELECT vColor FROM VEHICLE WHERE vPlateNumber='KDE8480');

-- α.2 Να βρεθούν τα ονοματεπώνυμα των πελατών που εγγράφτηκαν στην εταιρεία την ίδια μέρα με τον Κωνσταντίνου Κώστα. 
SELECT cLastName,cFirstName
FROM CUSTOMER
WHERE cRegDate IN (SELECT cRegDate FROM CUSTOMER WHERE cLastName='KONSTANTINOY' AND cFirstName='KOSTAS');										 

-- α.3 Να βρεθούν όσοι ενοικίασαν το όχημα με αριθμό πινακίδας XYZ3303 και το πότε.
SELECT cAFM,OutDate
FROM RENTING
WHERE OutDate IN (SELECT OutDate FROM RENTING WHERE vPlateNumber='XYZ3303');

-- β.1 Να βρεθούν τα οχήματα που έχουν ίδο vcc και vHorsePower με το πλοίο ABC0987.
SELECT vPlateNumber,vCC,vHorsePower FROM VEHICLE
WHERE (vCC,vHorsePower) IN (SELECT vCC,vHorsePower FROM VEHICLE WHERE vPlateNumber='ABC0987');

-- γ.1 Να βρεθεί η κατηγορία οχημάτων με τα περισσότερεα διαθέσιμα οχήματα.
SELECT * FROM VEHICLECAT
WHERE VehicleCount=(SELECT MAX(VehicleCount) FROM VEHICLECAT);

-- γ.2 Να βρεθεί το όχημα (ή τα οχήματα) με τις λιγότερες ενοικιάσεις.
SELECT * FROM VEHICLE
WHERE vRentTimes=(SELECT MIN(vRentTimes) FROM VEHICLE);

-- δ.1 Βρες τα μηχανάκια που έχουν περισσότερες ενοικιάσεις έστω και από ένα αυτοκίνητο.	
SELECT vPlateNumber FROM VEHICLE WHERE (VehCatName='MOTORBIKE' AND vRentTimes > ANY(SELECT vRentTimes FROM VEHICLE WHERE VehCatName='CAR'));

-- δ.2 Βρες τα μηχανάκια που έχουν περισσότερες ενοικιάσεις από τα αυτοκίνητα.
SELECT vPlateNumber FROM VEHICLE WHERE (VehCatName='MOTORBIKE' AND vRentTimes > ALL(SELECT vRentTimes FROM VEHICLE WHERE VehCatName='CAR'));