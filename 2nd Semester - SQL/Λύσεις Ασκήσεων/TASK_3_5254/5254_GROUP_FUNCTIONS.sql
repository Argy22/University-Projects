-- Να βρείτε τις λιγότερες και τις περισσότερες ενοικιάσεις που έχουν γίνει. 
SELECT MIN(vRentTimes), MAX(vRentTimes) FROM VEHICLE;

-- Να βρείτε το πλήθος των οχημάτων της επιχείρησης. 
SELECT SUM(VehicleCount) FROM VEHICLECAT;

-- Να βρεθεί πόσες διαφορετικές κατηγορίες οχημάτων έχει η επιχείρηση.
SELECT COUNT(Name) FROM VEHICLECAT;

-- Να βρεθεί η μέση τιμή των προϊόντων του πίνακα extras.
SELECT AVG(ePrice) FROM EXTRAS;