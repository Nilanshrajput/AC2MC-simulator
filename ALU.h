#include <bits/stdc++.h>
#include "InterStateBuffers"

using namespace std;



class ALU {
	private:
	int RA,RB;
	unsigned RAU,RBU;
    public:
    bool state;
    int result;

    void compute(InterStateBuffers &object) 
    {
        string ins = object.ALU_OP;
		RA = object.RA.readInt(); // reading both values before hand
		RB = object.RB.readInt();
		RAU = object.RA.readInt(); // reading both values before hand
		RBU = object.RB.readInt();

		if(ins == "add"){
			result = RA + RB;
			object.RZ.writeInt(result);
		}
		else if(ins == "sub"){
			result = RA - RB;
			object.RZ.writeInt(result);
		}
		else if(ins == "mul"){
			result = RA * RB;
			object.RZ.writeInt(result);
		}
		else if(ins == "and"){
			result = RA & RB;
			object.RZ.writeInt(result);
		}
		else if(ins == "or"){
			result = RA | RB;
			object.RZ.writeInt(result);
		}
		else if(ins == "xor"){
			result = RA ^ RB;
			object.RZ.writeInt(result);
		}
		else if(ins == "sll"){
			result = RA << RB ;
			object.RZ.writeInt(result);
		}
		else if(ins == "slr"){
			result = RA >> RB;
			object.RZ.writeInt(result);
		}
		else if(ins == "blt"){
			state = (RA < RB) ? 1 : 0;
		}
		else if(ins == "ble"){
			state = (RA <= RB) ? 1 : 0;
		}
		else if(ins == "bgt"){
			state = (RA > RB) ? 1 : 0;
		}
		else if(ins == "bge"){
			state = (RA >= RB) ? 1 : 0;
		}
		else if(ins == "bltu"){
			state = (RAU < RBU) ? 1 : 0;
		}
		else if(ins == "bgtu"){
			state = (RAU > RBU) ? 1 : 0;
		}
		

    }

    
};

