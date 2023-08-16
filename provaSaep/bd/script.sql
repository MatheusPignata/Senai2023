DROP DATABASE IF EXISTS saep;
CREATE DATABASE saep CHARSET=UTF8 COLLATE UTF8_GENERAL_CI;

USE saep;

CREATE TABLE concessionarias (
	id integer not null auto_increment primary key,
	concessionaria varchar(50) not null
);

CREATE TABLE automoveis (
	id integer not null auto_increment primary key,
	modelo varchar(100) not null,
    preco varchar(100) not null
);

CREATE TABLE clientes (
	id integer not null auto_increment primary key,
	nome varchar(200) not null
);

CREATE TABLE alocacao (
	id integer not null auto_increment primary key,
	area integer not null,
    automovel integer not null,
    concessionaria integer not null,
    quantidade integer not null,
    constraint fk_automovel foreign key (automovel) references automoveis (id) on delete cascade,
    constraint fk_concessionaria foreign key (concessionaria) references concessionarias (id) on delete cascade
);

LOAD DATA INFILE 'C:/matheus/Senai2023/provaSaep/bd/dados/concessionarias.csv'
INTO TABLE concessionarias
FIELDS TERMINATED BY ';'
ENCLOSED BY '"'
LINES TERMINATED BY '\r\n'
IGNORE 1 ROWS;

LOAD DATA INFILE 'C:/matheus/Senai2023/provaSaep/bd/dados/automoveis.csv'
INTO TABLE automoveis
FIELDS TERMINATED BY ';'
ENCLOSED BY '"'
LINES TERMINATED BY '\r\n'
IGNORE 1 ROWS;

LOAD DATA INFILE 'C:/matheus/Senai2023/provaSaep/bd/dados/clientes.csv'
INTO TABLE clientes
FIELDS TERMINATED BY ';'
ENCLOSED BY '"'
LINES TERMINATED BY '\r\n'
IGNORE 1 ROWS;

LOAD DATA INFILE 'C:/matheus/Senai2023/provaSaep/bd/dados/alocacao.csv'
INTO TABLE alocacao
FIELDS TERMINATED BY ';'
ENCLOSED BY '"'
LINES TERMINATED BY '\r\n'
IGNORE 1 ROWS;