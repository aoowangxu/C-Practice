	.file	"8.1.c"
	.text
	.globl	sort
	.type	sort, @function
sort:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	$0, -4(%ebp)
	movl	8(%ebp), %eax
	movl	(%eax), %edx
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	cmpl	%eax, %edx
	jge	.L1
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	movl	(%eax), %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	12(%ebp), %eax
	movl	-4(%ebp), %edx
	movl	%edx, (%eax)
.L1:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	sort, .-sort
	.section	.rodata
.LC0:
	.string	"%d %d %d\t"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	movl	$3, 16(%esp)
	movl	$5, 20(%esp)
	movl	$1, 24(%esp)
	movl	$0, 28(%esp)
	leal	20(%esp), %eax
	movl	%eax, 4(%esp)
	leal	16(%esp), %eax
	movl	%eax, (%esp)
	call	sort
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	leal	20(%esp), %eax
	movl	%eax, (%esp)
	call	sort
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	leal	16(%esp), %eax
	movl	%eax, (%esp)
	call	sort
	movl	24(%esp), %ecx
	movl	20(%esp), %edx
	movl	16(%esp), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$.LC0, (%esp)
	call	printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
