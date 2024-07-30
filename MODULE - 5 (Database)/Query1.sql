# 1. Create Table Name : Student and Exam
CREATE TABLE Student (
Rollno INT PRIMARY KEY AUTO_INCREMENT ,
Name VARCHAR(25) NOT NULL,
Branch VARCHAR(50) NOT NULL
);

INSERT INTO Student VALUE (1,"Jay","Computer scicnce");
INSERT INTO Student VALUE (2,"Suhani","Electronic and Com");
INSERT INTO Student VALUE (3,"Kriti","Electronic and Com");


CREATE TABLE Exam  (
Rollno INT  ,
S_code VARCHAR(25) NOT NULL,
Marks INT  NOT NULL,
P_code VARCHAR(25) NOT NULL,
FOREIGN KEY Exam(Rollno) REFERENCES Student(Rollno)
);

INSERT INTO Exam VALUE (1,"CS11",50,"CS");
INSERT INTO Exam VALUE (1,"CS12",60,"CS");
INSERT INTO Exam VALUE (2,"EC101",66,"EC");
INSERT INTO Exam VALUE (2,"EC102",70,"EC");
INSERT INTO Exam VALUE (3,"EC101",45,"EC");
INSERT INTO Exam VALUE (3,"EC102",50,"EC");

SELECT * FROM Student;
SELECT * FROM Exam;
DROP TABLE  Student;
DROP TABLE  Exam;