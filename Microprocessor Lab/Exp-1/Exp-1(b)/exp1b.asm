ASSUME CS: CODE, DS: DATA
DATA SEGMENT
     NUMBERS DB 07H, 10H, 12H, 16H, 08H, 02H
DATA ENDS
CODE SEGMENT
START:
     MOV AX, DATA
     MOV DS, AX
     MOV AX, 0000H
     MOV BX, 0000H
     MOV CX, 0000H
     MOV DX, 0000H
     LEA SI, NUMBERS
     MOV AL, [SI]
     INC SI
     MOV BL, [SI]
     MUL BL
     INC SI
     MOV CL, [SI]
     ADD AL, CL
     INC SI
     MOV DL, [SI]
     SUB AX, DX 
     INC SI
     MOV AH, 00H
     MOV DL, AL
     MOV AL, [SI]
     INC SI
     MOV BL, [SI]
     DIV BL
     ADD AX, DX
     INT 03H 
CODE ENDS
END START