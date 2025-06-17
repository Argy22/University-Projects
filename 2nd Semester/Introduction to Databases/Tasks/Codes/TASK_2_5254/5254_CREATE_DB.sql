CREATE TABLE CUSTOMER(
cAFM CHAR(9), cAT VARCHAR(8) not null, cLastName VARCHAR(20) not null, cFirstName VARCHAR(15) not null, cRegDate DATE not null,
PRIMARY KEY (cAFM),
UNIQUE (cAT)
);

CREATE TABLE PHONE(
cAFM CHAR(9), cPhone CHAR(10),
PRIMARY KEY (cAFM,cPhone),
FOREIGN KEY (cAFM) REFERENCES CUSTOMER(cAFM)
);

CREATE TABLE VEHICLECAT(
Name CHAR(15), VehicleCategoryPrice NUMBER(5,2) not null, VehicleCount NUMBER,
PRIMARY KEY (Name)
);

CREATE TABLE VEHICLE(
vPlateNumber CHAR(15), vColor CHAR(10) not null, vCC NUMBER not null, vHorsePower NUMBER not null, vRentTimes NUMBER, VehCatName CHAR(15) not null,
PRIMARY KEY (vPlateNumber),
FOREIGN KEY (VehCatName) REFERENCES VEHICLECAT(Name)
);

CREATE TABLE EXTRAS(
eName CHAR(15), ePrice NUMBER(3,2) not null,
PRIMARY KEY (eName)
);

CREATE TABLE VEHICLE_EXTRAS(
vPlateNumber CHAR(15), eName CHAR(15),
PRIMARY KEY (vPlateNumber,eName),
FOREIGN KEY (vPlateNumber) REFERENCES VEHICLE(vPlateNumber),
FOREIGN KEY (eName) REFERENCES EXTRAS(eName)
);

CREATE TABLE RENTING(
cAFM CHAR(9), vPlateNumber CHAR(15), OutDate DATE, InDate DATE null,
PRIMARY KEY (cAFM, vPlateNumber, OutDate),
FOREIGN KEY (cAFM) REFERENCES CUSTOMER(cAFM),
FOREIGN KEY (vPlateNumber) REFERENCES VEHICLE(vPlateNumber)
);




