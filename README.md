# Verification of Finite State Machines with Variables

Some examples are investigated in the background of computer science.  

This brief report discusses verification problem of finite state machines with variables in the background of computer science.  The problem is related to the traditional supervisory control theory (SCT) of discrete event systems, but the difference exists in using variables to reduce the computational complexity and implement the control.  

In particular we will use the variables and predicates to implement the supervior in SCT theory. With the variables and predicates the new model functions like extended finite state machines (EFSM), which is widely-used model in computer engineering field, especially in verification of computer programs.  

Example of stack is illustrated as below in the background of computer science.  

![](https://github.com/godisreal/Verification-Control-EFSM/blob/master/img/EFSM01.PNG)

The specification of stack procedures is sequentially pusing twice and poping twice, and it is implemented by an FSM with variables.  
Sometimes it is useful to reduce the domain of variables, and it may be related to supverivor reduction in SCT theory.  
Comments are welcome!  

![](https://github.com/godisreal/Verification-Control-EFSM/blob/master/img/spec.PNG)
