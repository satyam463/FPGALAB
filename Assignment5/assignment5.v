module Assignment5(
input  wire a,
input  wire b,
input wire c,
input wire d,
output wire redled,
);

reg out1;
always @(*)
begin
out1=((a|~(b))&(~(c)))|d;
if(out1==1)
begin
redled=1;
end
else
begin
redled=0;
end

end
endmodule
