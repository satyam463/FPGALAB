.include "/home/pulkit/Desktop/FPGA_LAB/AS3/m328Pdef.inc"

Here:
    ldi r17,0b11100011 ;input pins 10,11,12,13
    out DDRB,r17
    ldi r17,0b11111111
    out PORTB,r17
    in r17,PINB


    ; pins 8 - 15 in the above 8-bit string
    ; we need 10 - 13
    lsr r17
    lsr r17

    ldi r21,0b00000001
    and r21,r17 ;z

    lsr r17
    ldi r22,0b00000001
    and r22,r17 ;w

    lsr r17
    ldi r23,0b00000001
    and r23,r17 ;v
    
    lsr r17
    ldi r24,0b00000001
    and r24,r17 ;u

    ; f = (u+v').w'+z
    
    ldi r25,0b00000001
    
    eor r23,r25
    or r24,r23
    eor r22,r25
    and r24,r22
    or r24,r21
    
  


    lsl r24
    lsl r24

    ldi r16,0b00111100
    out DDRD,r16
    out PORTD,r24

    rjmp Here






