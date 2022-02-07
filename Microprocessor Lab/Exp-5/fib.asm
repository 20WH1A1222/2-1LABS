ASSUME CS:CODE, DS:DATA
DATA SEGMENT 
     COUNT EQU 09H
DATA ENDS
CODE SEGMENT
START:
      MOV AX, DATA
      MOV DS, AX
      MOV DX, COUNT-1
      MOV AL, 00H
      MOV BL, 01H
      MOV [SI], AL
      INC SI
      MOV [SI], BL
  LI:INC SI
      ADD AL, BL
      MOV [SI], AL
      MOV AL, BL
      MOV BL, [SI]
      DEC DX
          JNZ LI
      INT 03H
  CODE ENDS
  END START