CREATE PROCEDURE SearchCustomers  
    @CustomerID INT = NULL,  
    @Name NVARCHAR(100) = NULL,  
    @City NVARCHAR(50) = NULL,  
    @Email NVARCHAR(100) = NULL  
AS  
BEGIN  
    SET NOCOUNT ON;  

    -- Dynamic Search Query  
    SELECT *  
    FROM Customers  
    WHERE (@CustomerID IS NULL OR CustomerID = @CustomerID)  
      AND (@Name IS NULL OR Name LIKE '%' + @Name + '%')  
      AND (@City IS NULL OR City LIKE '%' + @City + '%')  
      AND (@Email IS NULL OR Email LIKE '%' + @Email + '%');  
END  
