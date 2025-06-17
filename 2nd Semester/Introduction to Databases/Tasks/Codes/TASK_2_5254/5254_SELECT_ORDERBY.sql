--Αύξουσα ταξινόμηση του πίνακα EXTRAS με βάση την (μικρότερη) τιμή των προϊόντων. 
SELECT eName FROM EXTRAS ORDER BY ePrice ASC;

--Φθίνουσα ταξινόμηση του πίνακα CUSTOMER με βάση την πιο πρόσφατη εγγραφή πελάτη. 
SELECT cLastName, cFirstName FROM CUSTOMER ORDER BY cRegDate DESC;

--Εμφανίζει τα οχήματα ταξινομημένα πρώτα με βάση την τιμή τους σε αύξουσα διάταξη και δεύτερον με βάση τη διαθεσιμότητά τους σε φθίνουσα διάταξη. (isws einai lathos)
SELECT NAME FROM VEHICLECAT ORDER BY VehicleCategoryPrice ASC, VehicleCount DESC ;