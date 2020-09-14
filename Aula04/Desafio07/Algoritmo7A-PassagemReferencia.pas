program ideone;
var
n:integer;
 
procedure p(var k: integer);
begin
    n := n+1;
    k := k+4;
    writeln(n);
end;
 
begin
	n := 0;
    p(n);
    writeln(n);
end.
