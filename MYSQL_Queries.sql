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
# for changing the value withoud using the primary key 
SET SQL_SAFE_UPDATES = 0;

#Write SQL query to fetch title, release_year, author_fanme, author_lname from books table.

select title, releaseyear, authorFirstName, authorLastName from books; 

#Write the SQL queries to update the author_last_name whose write the book "Coraline"
update  books  set authorLastName = 'Bisht' where title = 'Coraline';


#Write the SQL queries to fetch unique author_first_name and author_last_name?
select distinct authorFirstName, authorLastName from books;


#Delete books details where books pages are less than 200
delete  from books where pages <200;

#Write a query to fetch only those records from the books table whose pages is above 400.

select * from books where pages >400;

#Write a sql query to Reverse and uppercase the following sentence: "Why does my cat look at me with such hatered?"
SELECT UPPER(REVERSE('Why does my cat look at me with such hatered?')) AS reversed_uppercase_sentence;

#Write a sql query to print original author_last_name and reverse_last_name as the forward and backward names.
select authorLastName as forwardName, reverse(authorLastName) as backwordName from books;

#Write a sql queries to combine the author_first_name and author_last_name and print with title, release_year and stock_quantity.
select concat(authorFirstName,' ', authorLastName) as name, title, releaseYear, stockQuantity from books;

#Write a sql queries to combine the author_first_name and author_last_name in caps and print with title, pages and stock_quantity.
select upper(concat(authorFirstName,' ', authorLastName)) as name, title, releaseYear, stockQuantity from books;


#Write a query to concat title and release year like that "title was release in release year" the value of title and release year fetch from the books table.
select concat(title, " was released in ", releaseYear) from books;

#Write a query to print book title and length of each title
select title, length(title) as length from books;

#sql query to show only 10 character of title followed by ... and first and last name as author and quantity as --in stock
select concat(left(title,10),'...') as shortTitle, concat(authorLastName, ",", authorFirstName) as author, concat(stockQuantity ," in stock") as quantity from books;

#Write a sql query to fetch unique title and author_last_name in ascending order.
select distinct(title), authorLastName from books  order by authorLastName;

#Find the longest book from the books table. 
#(longest books means Highest number of pages) 
select  max(pages) as HighestPage from books;




