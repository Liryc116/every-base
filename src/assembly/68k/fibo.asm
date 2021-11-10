            ; ==============================            
            ; Vector initialization            
            ; ==============================
            
            org     $4
            
vector_001  dc.l    Main
            
            ; ==============================            
            ; Main Program
            ; ==============================
            
            org     $500
            
Main        move.l #Value1,d0            
			jsr     Fibo

            move.l #Value2,d0            
			jsr     Fibo
            
            illegal
            
            ; ==============================            
            ; Sub-routines            
            ; ==============================
            
            ; Initial d0 value: the rank to reach
            ; Final d0 value: the Fibonacci sequence at rank n
            
Fibo        movem.l	(d1,d2,d3),-(a7)       ; Saves D1, D2 and D3 in the stack.

			move.l	d0,d2
			clr.l	d0
			
			tst.l   d2            
			beq     \quit
			
            move.l	#1,d0
            clr.l	d1
            
\loop       tst.l   d2            
			beq     \quit
			
			move.l 	d1,d3
			move.l	d0,d1
            addq.l  d3,d0
            
            subq.l	#1,d2            
            bra     \loop
            
\quit       movem.l	(a7)+,(d3,d2,d1)       ; Restores D1, D2 and D3 values.
            rts
            
            ; ==============================            
            ; Data            
            ; ==============================
            
Value1      dc.b    0,0
Value2      dc.b    42,0
