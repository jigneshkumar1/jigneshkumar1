-- -- Create  Country table
CREATE TABLE Country (
    id INT PRIMARY KEY NOT NULL,
    country_name VARCHAR(50) NOT NULL,
    Country_name_eng VARCHAR(50) NOT NULL,
    Country_code VARCHAR(50) NOT NULL
);


-- Create City table

CREATE TABLE City (
    id INT PRIMARY KEY NOT NULL,
    city_name VARCHAR(50) NOT NULL,
    lat VARCHAR(70) NOT NULL,
    long_ VARCHAR(70) NOT NULL,
    country_id INT NOT NULL,
    FOREIGN KEY (country_id)
        REFERENCES Country (id)
);

-- -- Create Customer table

CREATE TABLE Customer (
    id INT PRIMARY KEY NOT NULL,
    Customer_name VARCHAR(50) NOT NULL,
    city_id INT NOT NULL,
    Customer_address VARCHAR(100) NOT NULL,
    next_call_date VARCHAR(50) NOT NULL,
    ts_inserted VARCHAR(100) NOT NULL,
    FOREIGN KEY (city_id)
        REFERENCES City (id)
);

ALTER TABLE Customer;
  ALTER TABLE Customer MODIFY next_call_date VARCHAR(50);
UPDATE Customer 
SET 
    next_call_date = DATE_FORMAT(next_call_date, '%D-%B-%Y');


-- insert data into the country table
INSERT INTO Country value (1,"Deutschland","Germany","DEU");
INSERT INTO Country value (2,"Srbija","Serbia","SEB");
INSERT INTO Country value (3,"Hrvatska","Croatia","HRV");
INSERT INTO Country value (4,"United Sates of America","United Sates of America","USA");
INSERT INTO Country value (5,"Polska","Poland","POL");
INSERT INTO Country value (6,"Espana","Spain","ESP");
INSERT INTO Country value (7,"Rossiya","Russia","RUS");

SELECT 
    *
FROM
    Country;
DROP TABLE Country;

-- insert data into the city table
INSERT INTO City value (1,"Berlin","52.520008","13.404954",1);
INSERT INTO City value (2,"Belgrade","44.787197","20.457273",2);
INSERT INTO City value (3,"Zagreb","45.815399","15.966568",3);
INSERT INTO City value (4,"New York","40.730610","-73.935242",4);
INSERT INTO City value (5,"Los Angeles","34.052235","-118.243683",4);
INSERT INTO City value (6,"Warsaw","52.237049","21.017532",5);

SELECT 
    *
FROM
    City;
DROP TABLE City;

-- insert data into the customer table
INSERT INTO Customer value (1,"Jewelry Store",4,"Long Street 120","21-01-2020","2020-01-09 14:01:20.000");
INSERT INTO Customer value (2,"Bakery",1,"Kurfurstendamn 25","21-02-2020","2020-01-09 17:52:15.000");
INSERT INTO Customer value (3,"Cafe",1,"Tauentzienstrabe 44","21-01-2020","2020-01-10 08:02:49.000");
INSERT INTO Customer value (4,"Restaurant",3,"Ulica lipa 15","21-01-2020","2020-01-10 09:20:21.000");
    
SELECT 
    *
FROM
    Customer;
DROP TABLE Customer ;

-- Task : 1 (join multiple tables using left join) 
-- List all Countries and customers related to these countries. 
-- For each country displaying its name in English, the name of the city customer is located in as 
-- well as the name of the customer.  
-- Return even countries without related cities and customers. 

SELECT 
    Country.country_name_eng AS Country,
    City.city_name AS City,
    Customer.customer_name AS Customer
FROM
    Country
        LEFT JOIN
    City ON Country.id = City.country_id
        LEFT JOIN
    Customer ON City.id = customer.city_id
ORDER BY Country.country_name;


-- Task : 2 (join multiple tables using both left and inner join) 
-- Return the list of all countries that have pairs(exclude countries which are not referenced by any 
-- city). For such pairs return all customers. 
-- Return even pairs of not having a single customer

SELECT 
    Country.country_name AS Country,
    City.city_name AS City,
    Customer.customer_name AS Customer
FROM
    Country
        INNER JOIN
    City ON Country.id = city.country_id
        LEFT JOIN
    Customer ON city.id = Customer.city_id
ORDER BY Country.country_name , City.city_name , Customer.customer_name;