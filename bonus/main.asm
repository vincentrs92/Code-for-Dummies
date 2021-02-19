.LC0:
        .ascii  "Hello World\000"
main:
        push    {fp, lr}
        add     fp, sp, #4
        ldr     r0, .L3
        bl      printf
        mov     r3, #0
        mov     r0, r3
        pop     {fp, pc}
.L3:
        .word   .LC0
