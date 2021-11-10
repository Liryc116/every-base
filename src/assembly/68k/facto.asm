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
			jsr     Facto

            move.l #Value2,d0            
			jsr     Facto
            
            illegal
            
            ; ==============================            
            ; Sub-routines            
            ; ==============================
            
            ; Initial d0 value: number to factorial-ized
            ; Final d0 value: the factorial sequence of n (the initial d0)
            
Facto       move.l	(d1),-(a7)       ; Saves D1, D2 and D3 in the stack.

			move.l	d0,d1
            move.l	#1,d0
            
\loop       tst.l   d1            
			beq     \quit
			
			mulq.l	d1,d0
            
            subq.l	#1,d1            
            bra     \loop
            
\quit       move.l	(a7)+,(d1)       ; Restores D1, D2 and D3 values.
            rts
            
            ; ==============================            
            ; Data            
            ; ==============================
            
Value1      dc.b    0,0
Value2      dc.b    7,0
