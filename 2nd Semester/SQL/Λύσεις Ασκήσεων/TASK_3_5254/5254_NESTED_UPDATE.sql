-- Να εξισωθεί η τιμή του mobile charger με τη μέση τιμή των GPS και KID SEAT αυξημένη κατά 23%.
UPDATE EXTRAS
SET ePrice=(SELECT 2.3*AVG(ePrice) FROM EXTRAS
            WHERE eName='GPS' OR eName='KID SEAT')
WHERE eName='MOBILE CHARGER';

-- Να εξισωθεί η τιμή και το πλήθος των πλοίων με αυτά των vans.
UPDATE VEHICLECAT
SET (VehicleCategoryPrice,VehicleCount)=(SELECT VehicleCategoryPrice,VehicleCount FROM VEHICLECAT WHERE Name='VAN')
WHERE Name='BOAT';