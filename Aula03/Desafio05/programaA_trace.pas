program A_trace;

function f(x,y:integer):integer;
var
z:integer;
px,py,pz:^integer;
endx,endy,endz:^word;
begin
	//Armazena-se endereços em ponteiros
	px:=@x;
	py:=@y;
	pz:=@z;
	//Armazena-se os r-values dos ponteiros em outros ponteiros
	endx:=addr(px);
	endy:=addr(py);
	endz:=addr(pz);
	writeln('Endereços (l-values) no RA de f:');
	//Imprimi-se conteúdos dos ponteiros = endereços de x,y,z
	writeln(endx^,' ',endy^,' ',endz^);
	x:=1;
	y:=1;
	z := x+y;
	writeln('Valores (r-values) no RA de f:');
	writeln(x,y,z);
	z := x+y;
	
end;

var
x,y,z:integer;
px,py,pz:^integer;
endx,endy,endz:^word;

begin
	(* your code goes here *)
	x:=0;
	y:=0;
	//z:=0;
	
	//Armazena-se endereços em ponteiros
	px:=@x;
	py:=@y;
	//pz:=@z;
	//Armazena-se os r-values dos ponteiros em outros ponteiros
	endx:=addr(px);
	endy:=addr(py);
	//endz:=addr(pz);
	writeln('Endereços (l-values) no RA da main:');
	writeln(endx^,' ',endy^,' ');
	writeln('Valores (r-values) no RA da main:');
	writeln(x,y,z);
	z:=f(x,y);
	writeln('Novos valores (r-values) no RA da main após chamar f:');
	writeln(x,y,z);
end.

