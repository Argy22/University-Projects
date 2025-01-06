-- 1.
SELECT cAFM, COUNT (cPHONE)
FROM PHONE
GROUP BY cAFM;

-- 2.
SELECT VehCatName, COUNT(*)
FROM VEHICLE
GROUP BY VehCatName
ORDER BY COUNT(*) DESC;

-- 3.
SELECT vColor, VehCatName, COUNT(*)
FROM VEHICLE
GROUP BY vColor, VehCatName
ORDER BY VehCatName ASC;

-- 4.
SELECT vPlateNumber, COUNT(*)
FROM VEHICLE_EXTRAS
GROUP BY vPlateNumber;

-- 5.
SELECT VehCatName, SUM(vCC), SUM(vHorsePower)
FROM VEHICLE
GROUP BY VehCatName
ORDER BY VehCatName ASC;

-- 6.
SELECT cRegDate, COUNT(*)
FROM CUSTOMER
WHERE cAFM LIKE '%1' OR cAFM LIKE'%5'
GROUP BY cRegDate
HAVING COUNT(*)>=2
ORDER BY cRegDate ASC;

-- 7.
SELECT cAFM, COUNT(*)
FROM RENTING 
GROUP BY cAFM;

-- 8.
-- Κύριε γράψτε μου σας παρακαλώ σε σχόλιο πώς γίνεται το συγκεκριμένο.
-- Και στην προηγούμενη εργασία ήθελα να δοκιμάσω κάτι με την επιλογή μήνα (όχι έτους όπως εδώ) αλλά δεν έβγαλα άκρη. 
-- Παίζει να έκανα όλους τους πιθανούς συνδυασμούς με αυτά που βρήκα στο google εκτός από τον έναν που είναι και ο σωστός.
-- SELECT vPlateNumber, COUNT(*)
-- FROM RENTING 
-- WHERE outdate
-- GROUP BY vplatenumber;

-- 9.
SELECT VehCatName,vColor,sum(vRentTimes)
FROM VEHICLE
WHERE vCC>50 AND vRentTimes<=3
GROUP BY VehCatName,vColor
ORDER BY VehCatName ASC;

-- 10. 
-- Δε λύθηκε.

