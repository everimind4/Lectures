	.file	"sum.c"
	.text
	.globl	plus
	.type	plus, @function
plus:
	endbr64
	leaq	(%rdi,%rsi), %rax
	ret
	.size	plus, .-plus
	.globl	sumstore
	.type	sumstore, @function
sumstore:
	endbr64
	pushq	%rbx
	movq	%rdx, %rbx
	call	plus
	movq	%rax, (%rbx)
	popq	%rbx
	ret
	.size	sumstore, .-sumstore
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%ld + %ld --> %ld\n"
	.text
	.globl	main
	.type	main, @function
main:
	endbr64
	pushq	%r12
	pushq	%rbp
	pushq	%rbx
	subq	$16, %rsp
	movq	%rsi, %rbp
	movl	$40, %r12d
	movq	%fs:(%r12), %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	movq	8(%rsi), %rdi
	movl	$10, %edx
	movl	$0, %esi
	call	strtol@PLT
	movslq	%eax, %rbx
	movq	16(%rbp), %rdi
	movl	$10, %edx
	movl	$0, %esi
	call	strtol@PLT
	movslq	%eax, %rbp
	movq	%rsp, %rdx
	movq	%rbp, %rsi
	movq	%rbx, %rdi
	call	sumstore
	movq	(%rsp), %r8
	movq	%rbp, %rcx
	movq	%rbx, %rdx
	leaq	.LC0(%rip), %rsi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk@PLT
	movq	8(%rsp), %rax
	xorq	%fs:(%r12), %rax
	jne	.L7
	movl	$0, %eax
	addq	$16, %rsp
	popq	%rbx
	popq	%rbp
	popq	%r12
	ret
.L7:
	call	__stack_chk_fail@PLT
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
