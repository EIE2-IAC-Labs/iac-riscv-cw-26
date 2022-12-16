module pc_src #(
) (
    input logic JumpE,
    input logic BranchE,
    input logic ZeroE,
    output logic PCSrcE
);

logic and_result;

always_comb begin
    and_result = BranchE & ZeroE;
    PCSrcE = and_result | JumpE;
end
    
endmodule
