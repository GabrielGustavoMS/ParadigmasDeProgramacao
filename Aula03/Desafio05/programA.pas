program A;

function f(x,y:integer):integer;
var
z:integer;
begin
	x:=1;
	y:=1;
	z := x+y;
end;

var
x,y,z:integer;

begin
	(* your code goes here *)
	x:=0;
	y:=0;
	z:=0;
	writeln(x,y,z);
	z:=f(x,z);
	writeln(x,y,z);
end.