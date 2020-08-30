program C;
var 
y:integer;


type
  pInt = ^integer;
function f(x:pInt):integer;
var 
z:integer;
begin
	x^:=1;
	z:= x^+y;
	
end;

var
x,z:integer;
p:^integer;


begin

	x:=0;
	y:=4;
	z:=0;
	p:=@x;
	writeln(x,y,z);
	
	z:=f(p);
	writeln(x,y,z);
end.