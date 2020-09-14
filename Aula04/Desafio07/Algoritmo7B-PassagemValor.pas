program ideone;
var
n:integer;
 
procedure p(k: integer);
begin
    writeln(k);
    n := n+10;
    writeln(k);
    n := n+5;
    writeln(k);
end;
 
 
begin
	n := 0;
    p(n+1);
 
end.
