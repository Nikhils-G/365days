-- Create database
CREATE DATABASE CompanyDB;
USE CompanyDB;

-- Create Employees table
CREATE TABLE Employees (
    EmployeeID INT PRIMARY KEY AUTO_INCREMENT,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Email VARCHAR(100) UNIQUE,
    PhoneNumber VARCHAR(15),
    HireDate DATE,
    JobID INT,
    Salary DECIMAL(10,2),
    DepartmentID INT,
    FOREIGN KEY (DepartmentID) REFERENCES Departments(DepartmentID),
    FOREIGN KEY (JobID) REFERENCES Jobs(JobID)
);

-- Create Departments table
CREATE TABLE Departments (
    DepartmentID INT PRIMARY KEY AUTO_INCREMENT,
    DepartmentName VARCHAR(100) UNIQUE,
    ManagerID INT,
    Location VARCHAR(100)
);

-- Create Jobs table
CREATE TABLE Jobs (
    JobID INT PRIMARY KEY AUTO_INCREMENT,
    JobTitle VARCHAR(100),
    MinSalary DECIMAL(10,2),
    MaxSalary DECIMAL(10,2)
);

-- Create Projects table
CREATE TABLE Projects (
    ProjectID INT PRIMARY KEY AUTO_INCREMENT,
    ProjectName VARCHAR(100),
    StartDate DATE,
    EndDate DATE,
    Budget DECIMAL(15,2)
);

-- Create Employee_Project mapping table
CREATE TABLE Employee_Project (
    EmployeeID INT,
    ProjectID INT,
    Role VARCHAR(50),
    PRIMARY KEY (EmployeeID, ProjectID),
    FOREIGN KEY (EmployeeID) REFERENCES Employees(EmployeeID),
    FOREIGN KEY (ProjectID) REFERENCES Projects(ProjectID)
);

-- Insert sample data
INSERT INTO Departments (DepartmentName, ManagerID, Location) VALUES 
('IT', 1, 'New York'),
('HR', 2, 'Los Angeles'),
('Finance', 3, 'Chicago');

INSERT INTO Jobs (JobTitle, MinSalary, MaxSalary) VALUES 
('Software Engineer', 50000, 120000),
('Data Scientist', 60000, 130000),
('HR Manager', 55000, 110000);

INSERT INTO Employees (FirstName, LastName, Email, PhoneNumber, HireDate, JobID, Salary, DepartmentID) VALUES 
('John', 'Doe', 'johndoe@example.com', '1234567890', '2020-01-15', 1, 80000, 1),
('Jane', 'Smith', 'janesmith@example.com', '0987654321', '2019-03-20', 2, 95000, 1),
('Robert', 'Brown', 'robertbrown@example.com', '1122334455', '2021-06-10', 3, 75000, 2);

INSERT INTO Projects (ProjectName, StartDate, EndDate, Budget) VALUES 
('AI Development', '2023-01-01', '2023-12-31', 500000),
('Cloud Migration', '2023-06-01', '2024-06-01', 700000);

INSERT INTO Employee_Project (EmployeeID, ProjectID, Role) VALUES 
(1, 1, 'Developer'),
(2, 1, 'Data Scientist'),
(3, 2, 'HR Consultant');

-- Query to get employee details along with department and job
SELECT e.EmployeeID, e.FirstName, e.LastName, e.Email, j.JobTitle, d.DepartmentName 
FROM Employees e
JOIN Jobs j ON e.JobID = j.JobID
JOIN Departments d ON e.DepartmentID = d.DepartmentID;

-- Query to get employees working on each project
SELECT p.ProjectName, e.FirstName, e.LastName, ep.Role 
FROM Employee_Project ep
JOIN Employees e ON ep.EmployeeID = e.EmployeeID
JOIN Projects p ON ep.ProjectID = p.ProjectID;
