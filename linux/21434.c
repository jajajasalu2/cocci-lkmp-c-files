cocci_test_suite() {
	bool cocci_id/* arch/arm64/kernel/signal.c 96 */;
	unsigned long *cocci_id/* arch/arm64/kernel/signal.c 96 */;
	size_t cocci_id/* arch/arm64/kernel/signal.c 96 */;
	struct rt_sigframe_user_layout cocci_id/* arch/arm64/kernel/signal.c 951 */;
	struct rt_sigframe_user_layout *cocci_id/* arch/arm64/kernel/signal.c 95 */;
	int cocci_id/* arch/arm64/kernel/signal.c 95 */;
	void __init cocci_id/* arch/arm64/kernel/signal.c 949 */;
	unsigned long
__ro_after_init
 cocci_id/* arch/arm64/kernel/signal.c 942 */;
	void cocci_id/* arch/arm64/kernel/signal.c 899 */;
	struct ksignal cocci_id/* arch/arm64/kernel/signal.c 832 */;
	sigset_t *cocci_id/* arch/arm64/kernel/signal.c 786 */;
	struct task_struct *cocci_id/* arch/arm64/kernel/signal.c 785 */;
	struct rt_sigframe cocci_id/* arch/arm64/kernel/signal.c 73 */;
	__sigrestore_t cocci_id/* arch/arm64/kernel/signal.c 726 */;
	struct k_sigaction *cocci_id/* arch/arm64/kernel/signal.c 723 */;
	struct frame_record __user *cocci_id/* arch/arm64/kernel/signal.c 709 */;
	struct frame_record cocci_id/* arch/arm64/kernel/signal.c 708 */;
	struct ksignal *cocci_id/* arch/arm64/kernel/signal.c 696 */;
	const size_t cocci_id/* arch/arm64/kernel/signal.c 69 */;
	struct extra_context __user *cocci_id/* arch/arm64/kernel/signal.c 654 */;
	struct esr_context __user *cocci_id/* arch/arm64/kernel/signal.c 634 */;
	struct esr_context cocci_id/* arch/arm64/kernel/signal.c 579 */;
	struct rt_sigframe __user *cocci_id/* arch/arm64/kernel/signal.c 529 */;
	struct pt_regs *cocci_id/* arch/arm64/kernel/signal.c 528 */;
	rt_sigreturn cocci_id/* arch/arm64/kernel/signal.c 526 */;
	struct rt_sigframe_user_layout {
		struct rt_sigframe __user *sigframe;
		struct frame_record __user *next_frame;
		unsigned long size;
		unsigned long limit;
		unsigned long fpsimd_offset;
		unsigned long esr_offset;
		unsigned long sve_offset;
		unsigned long extra_offset;
		unsigned long end_offset;
	} cocci_id/* arch/arm64/kernel/signal.c 49 */;
	struct user_ctxs cocci_id/* arch/arm64/kernel/signal.c 487 */;
	sigset_t cocci_id/* arch/arm64/kernel/signal.c 485 */;
	struct frame_record {
		u64 fp;
		u64 lr;
	} cocci_id/* arch/arm64/kernel/signal.c 44 */;
	struct sve_context __user *cocci_id/* arch/arm64/kernel/signal.c 397 */;
	struct rt_sigframe {
		struct siginfo info;
		struct ucontext uc;
	} cocci_id/* arch/arm64/kernel/signal.c 39 */;
	struct fpsimd_context __user *cocci_id/* arch/arm64/kernel/signal.c 380 */;
	const __user struct _aarch64_ctx *cocci_id/* arch/arm64/kernel/signal.c 348 */;
	u64 cocci_id/* arch/arm64/kernel/signal.c 346 */;
	const __user struct extra_context *cocci_id/* arch/arm64/kernel/signal.c 345 */;
	u32 cocci_id/* arch/arm64/kernel/signal.c 343 */;
	const __user char *constcocci_id/* arch/arm64/kernel/signal.c 333 */;
	const __user char *cocci_id/* arch/arm64/kernel/signal.c 333 */;
	struct _aarch64_ctx __user *cocci_id/* arch/arm64/kernel/signal.c 328 */;
	struct sigcontext __user *constcocci_id/* arch/arm64/kernel/signal.c 327 */;
	struct user_ctxs *cocci_id/* arch/arm64/kernel/signal.c 324 */;
	int cocci_id/* arch/arm64/kernel/signal.c 319 */(struct user_ctxs *user);
	int cocci_id/* arch/arm64/kernel/signal.c 318 */(void __user *ctx);
	const char __user *cocci_id/* arch/arm64/kernel/signal.c 292 */;
	struct sve_context cocci_id/* arch/arm64/kernel/signal.c 262 */;
	unsigned int cocci_id/* arch/arm64/kernel/signal.c 229 */;
	u16 cocci_id/* arch/arm64/kernel/signal.c 228 */[ARRAY_SIZE(ctx->__reserved)];
	struct user_ctxs {
		struct fpsimd_context __user *fpsimd;
		struct sve_context __user *sve;
	} cocci_id/* arch/arm64/kernel/signal.c 218 */;
	__u32 cocci_id/* arch/arm64/kernel/signal.c 191 */;
	struct user_fpsimd_state cocci_id/* arch/arm64/kernel/signal.c 190 */;
	struct fpsimd_context cocci_id/* arch/arm64/kernel/signal.c 183 */;
	const struct user_fpsimd_state *cocci_id/* arch/arm64/kernel/signal.c 172 */;
	char __user *cocci_id/* arch/arm64/kernel/signal.c 165 */;
	const struct rt_sigframe_user_layout *cocci_id/* arch/arm64/kernel/signal.c 163 */;
	unsigned long cocci_id/* arch/arm64/kernel/signal.c 163 */;
	void __user *cocci_id/* arch/arm64/kernel/signal.c 162 */;
	struct _aarch64_ctx cocci_id/* arch/arm64/kernel/signal.c 153 */;
	struct extra_context cocci_id/* arch/arm64/kernel/signal.c 107 */;
}
