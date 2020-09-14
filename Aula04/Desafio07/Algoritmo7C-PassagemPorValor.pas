program ideone;

type
	vector = array [1..10] of integer; 
var
a:vector;
n:integer;
procedure p(b:integer);
begin
	writeln(b);
    n := n+1;
    writeln(b);
    b := b+5;
end;
var
i:integer;
begin
	a[1] := 10;
    a[2] := 20;
    a[3] := 30;
    a[4] := 40;
    n := 1;
    p(a[n+2]);
    writeln();
    i:=0;
    while i<4 do
	begin
    	writeln(a[i]);
    	i:= i+1;
	end;
end.
