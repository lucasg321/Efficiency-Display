USE [aaReports]
GO

DECLARE	@return_value int

EXEC	@return_value = [dbo].[pr_BFP_rpt_ToyoCount]
		@date = '$(date)',
		@shift = '$(shift)'

SELECT	'Return Value' = @return_value

GO
