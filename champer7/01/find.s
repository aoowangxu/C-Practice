	.file	"find.c"
	.text
	.globl	Max_com_div
	.type	Max_com_div, @function
Max_com_div:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	$0, -8(%ebp)
	movl	$0, -4(%ebp)
	movl	12(%ebp), %eax
	cmpl	%eax, 8(%ebp)
	cmovle	8(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, -8(%ebp)
	jmp	.L2
.L5:
	movl	8(%ebp), %eax
	cltd
	idivl	-8(%ebp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L3
	movl	12(%ebp), %eax
	cltd
	idivl	-8(%ebp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L3
	movl	-8(%ebp), %eax
	jmp	.L1
.L3:
	subl	$1, -8(%ebp)
.L2:
	cmpl	$0, -8(%ebp)
	jg	.L5
.L1:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	Max_com_div, .-Max_com_div
	.globl	Min_com_mul
	.type	Min_com_mul, @function
Min_com_mul:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	$0, -8(%ebp)
	movl	$0, -4(%ebp)
	movl	8(%ebp), %eax
	cmpl	%eax, 12(%ebp)
	cmovge	12(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, -8(%ebp)
.L9:
	movl	-8(%ebp), %eax
	cltd
	idivl	8(%ebp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L7
	movl	-8(%ebp), %eax
	cltd
	idivl	12(%ebp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L7
	movl	-8(%ebp), %eax
	jmp	.L10
.L7:
	addl	$1, -8(%ebp)
	jmp	.L9
.L10:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	Min_com_mul, .-Min_com_mul
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
