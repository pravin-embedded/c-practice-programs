	.file	"calculator.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter the action you want to perform (+, -, /, *): "
.LC1:
	.string	" %c"
.LC2:
	.string	"Enter the value of a: "
.LC3:
	.string	"%d"
.LC4:
	.string	"Enter the value of b: "
.LC5:
	.string	"The answer for addition is %d"
	.align 8
.LC6:
	.string	"The answer for subtraction is %d"
	.align 8
.LC7:
	.string	"The answer for division is %.2f"
	.align 8
.LC8:
	.string	"Division by zero is not allowed."
	.align 8
.LC9:
	.string	"The answer for multiplication is %d"
.LC10:
	.string	"Invalid input"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-33(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-32(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-28(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-33(%rbp), %eax
	cmpb	$43, %al
	jne	.L2
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L3
.L2:
	movzbl	-33(%rbp), %eax
	cmpb	$45, %al
	jne	.L4
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L3
.L4:
	movzbl	-33(%rbp), %eax
	cmpb	$47, %al
	jne	.L5
	movl	-28(%rbp), %eax
	testl	%eax, %eax
	je	.L6
	movl	-32(%rbp), %eax
	pxor	%xmm0, %xmm0
	cvtsi2ssl	%eax, %xmm0
	movl	-28(%rbp), %eax
	pxor	%xmm1, %xmm1
	cvtsi2ssl	%eax, %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -20(%rbp)
	pxor	%xmm2, %xmm2
	cvtss2sd	-20(%rbp), %xmm2
	movq	%xmm2, %rax
	movq	%rax, %xmm0
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$1, %eax
	call	printf@PLT
	jmp	.L3
.L6:
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L3
.L5:
	movzbl	-33(%rbp), %eax
	cmpb	$42, %al
	jne	.L7
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	imull	%edx, %eax
	movl	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L3
.L7:
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L3:
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L9
	call	__stack_chk_fail@PLT
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
