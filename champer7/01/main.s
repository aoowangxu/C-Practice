	.file	"main.c"
	.section	.rodata
.LC0:
	.string	"please intput a, b:"
.LC1:
	.string	"%d%d"
.LC2:
	.string	"Max_com_div is %d\n"
.LC3:
	.string	"Min_com_mul is %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	movl	$0, 24(%esp)
	movl	$0, 28(%esp)
	movl	$.LC0, (%esp)
	call	printf
	leal	28(%esp), %eax
	movl	%eax, 8(%esp)
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC1, (%esp)
	call	__isoc99_scanf
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	Max_com_div
	movl	%eax, 4(%esp)
	movl	$.LC2, (%esp)
	call	printf
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	Min_com_mul
	movl	%eax, 4(%esp)
	movl	$.LC3, (%esp)
	call	printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
