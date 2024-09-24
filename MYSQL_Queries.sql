#create a databse books_shop_db
create database books_shop_db;

use books_shop_db;
#create a tabke books
create table books(book_id varchar(255),
 title  int primary key ,
 authorFirstName varchar(255),
 authorLastName varchar(255),
 releaseYear date,
 stockQuantity int,
 pages int);
 
 desc books;
 
 alter table books modify column releaseYear int;

# insert values into the table books 

insert into books values( 1,'The Nameskar', 'Jhumpa', 'Lahri', 2003, 32, 291) ,
( 2,'Norse Mythology', 'Neil', 'Gaiman', 2016, 43, 304),
(3,'American Gos','Neil','Gaiman',2001,12,465),
(4,'Interpreter of Maladies','Jhumpa','Lahiri',1996,97,198),
(5,'A Hologram of the king: A Novel','Dave','Eggers',2012,154,352),
(6,'The Circle','Dave','Eggers',2013,28,504),
(7,'The Amazing Adventures of Kaviler & Clay','Michael','Chabon',2000,68,634),
(8,'Just kids','Patiie','Smith',2010,55,304),
(9,'A Heartbreaking Word of Staggering Genius','Dave','Eggers',2001,104,437),
(10,'Coraline','Neil','Gaiman',2003,100,208),
(11,'What We Talk About When We Talk About Love: Stories','Raymond','Carver',1981,23,176),
(12,'Where I\'m Calling from: Selected Stories','Raymond','Carver',1989,12,526),
(13,'White Noice','Don','Delillo',1985,49,325),
(14,'Cannery Row','John','Steinbeck',1945,95,181),
(15,'Ovlivion: Stories','David','Foster Wallace',2004,172,329),
(16,'Consider The Lobster','David','Foster Wallace',2005,92,143);

select * from books;

