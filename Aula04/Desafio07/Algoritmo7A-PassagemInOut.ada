with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
 
procedure Principal is
	n: integer;
    procedure p (k: in out integer) is
    begin
    	n:= n+1;
    	k:= k+4;
    	put(n);
    end p;
begin
	n := 0;
    p(n);	
    put(n);
end;
