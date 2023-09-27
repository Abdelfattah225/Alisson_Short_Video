


#ifndef BIT_CALC_H_
#define	BIT_CALC_H_


#define Set_Bit(var,Bit_No) (var)|=(1<<(Bit_No))

#define Clear_Bit(var,Bit_No) (var)&=(~(1<<(Bit_No)))

#define Toggle_Bit(var,Bit_No) (var)^= (1<<(Bit_No))

#define Get_Bit(var,Bit_No) (((var)>>(Bit_No))&(1))

#define Assign_Bit(var,Bit_No,val) do{if(val==1)\
									Set_Bit(var,Bit_No);\
									else\
									Clear_Bit(var,Bit_No);}while(0)
										

#endif /* BIT_CALC_H_ */
