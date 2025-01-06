-- 1.α.
SELECT * FROM CUSTOMER, PHONE;

-- 1.β. 
SELECT * FROM CUSTOMER, VEHICLE, RENTING;

-- 2.
SELECT CUSTOMER.cAFM,CUSTOMER.cAT,CUSTOMER.cFirstName, CUSTOMER.cLastName, PHONE.cPhone 
FROM CUSTOMER, PHONE
WHERE CUSTOMER.cAFM=PHONE.cAFM;

-- 3.
SELECT VEHICLE.vPlateNumber, VEHICLE.vColor, VEHICLE.vCC, VEHICLE.VehCatName, VEHICLECAT.VehicleCategoryPrice 
FROM VEHICLE, VEHICLECAT
WHERE VEHICLE.VehCatName=VEHICLECAT.Name;

-- 4.
SELECT CUSTOMER.cAFM, CUSTOMER.cFirstName, CUSTOMER.cLastName, CUSTOMER.cRegDate,
       VEHICLE.vPlateNumber, VEHICLE.vColor, VEHICLE.VehCatName, 
       RENTING.OutDate, RENTING.InDate
FROM   CUSTOMER,VEHICLE, RENTING
WHERE  CUSTOMER.cRegDate LIKE ('10%21') 
       AND VEHICLE.vColor='KOKKINO'
       AND CUSTOMER.cAFM=RENTING.cAFM;

-- 5. 
-- Δείξτε τα πλήρη στοιχεία βάσης δεδομένων εταιρείας (ποια κατηγορία έχει ποια οχήματα, 
-- ποια κατηγορία έχει τα περισσότερα οχήματα και ποιο το έξτρα τους,
-- πόσες ενοικιάσεις έχει το κάθε όχημα, από ποιους και πότε αυτές έγιναν).
SELECT * 
FROM   CUSTOMER, PHONE, VEHICLECAT, VEHICLE, EXTRAS, VEHICLE_EXTRAS, RENTING
WHERE  CUSTOMER.cAFM=PHONE.cAFM
AND    CUSTOMER.cAFM=RENTING.cAFM
AND    VEHICLECAT.Name=VEHICLE.VehCatName
AND    EXTRAS.eName=VEHICLE_EXTRAS.eName
AND    VEHICLE_EXTRAS.vPlateNumber=RENTING.vPlateNumber
AND    VEHICLE_EXTRAS.vPlateNumber=VEHICLE.vPlateNumber;

-- 6.
SELECT cFirstName,cLastName 
FROM CUSTOMER,PHONE
WHERE CUSTOMER.cAFM=PHONE.cAFM AND PHONE.cPhone=' ';

-- 7. 
SELECT VEHICLE.vPlateNumber, VEHICLE.vColor, VEHICLE.VehCatName, VEHICLE_EXTRAS.eName, EXTRAS.ePrice
FROM VEHICLE, VEHICLE_EXTRAS, EXTRAS
WHERE VEHICLE.vPlateNumber=VEHICLE_EXTRAS.vPlateNumber AND EXTRAS.eName=VEHICLE_EXTRAS.eName;

-- 8.
SELECT EXTRAS.eName,EXTRAS.ePrice,NVL(VEHICLE.vPlatenumber,0) AS vPlatenumber
FROM VEHICLE,VEHICLE_EXTRAS,EXTRAS
WHERE VEHICLE.vPlatenumber(+) = VEHICLE_EXTRAS.vPlatenumber 
AND VEHICLE_EXTRAS.ENAME(+)=EXTRAS.eName;

-- 9.
-- Δε λύθηκε.

-- 10.
-- Δε λύθηκε.