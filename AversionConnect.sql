CREATE DATABASE AversionConnect

CREATE TABLE users
(
id int NOT NULL IDENTITY(1,1) PRIMARY KEY,
username varchar(50),
password varchar(50),
name varchar(50),
phone varchar(20),
city varchar(20)
)

CREATE TABLE items
(
id int NOT NULL IDENTITY(1,1) PRIMARY KEY,
name varchar(50),
category_id int
)

CREATE TABLE user_item
(
user_id int,
item_id int
)

ALTER TABLE users
DROP COLUMN password

ALTER TABLE users
ADD password varchar(100)