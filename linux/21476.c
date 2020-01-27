cocci_test_suite() {
	const struct user_fpsimd_state *cocci_id/* arch/arm64/kernel/signal32.c 96 */;
	struct compat_vfp_sigframe __user *cocci_id/* arch/arm64/kernel/signal32.c 94 */;
	union __fpsimd_vreg {
		__uint128_t raw;
		struct {
#ifdef __AARCH64EB__
			u64 hi;
			u64 lo;
#else
			u64 lo;
			u64 hi;
#endif
		};
	} cocci_id/* arch/arm64/kernel/signal32.c 81 */;
	long cocci_id/* arch/arm64/kernel/signal32.c 69 */;
	compat_sigset_t cocci_id/* arch/arm64/kernel/signal32.c 64 */;
	const compat_sigset_t __user *cocci_id/* arch/arm64/kernel/signal32.c 62 */;
	compat_sigset_t __user *cocci_id/* arch/arm64/kernel/signal32.c 51 */;
	void cocci_id/* arch/arm64/kernel/signal32.c 481 */;
	sigset_t *cocci_id/* arch/arm64/kernel/signal32.c 461 */;
	struct compat_aux_sigframe {
		struct compat_vfp_sigframe vfp;
		unsigned long end_magic;
	}__attribute__((__aligned__(8))) cocci_id/* arch/arm64/kernel/signal32.c 42 */;
	struct compat_vfp_sigframe cocci_id/* arch/arm64/kernel/signal32.c 38 */;
	unsigned int cocci_id/* arch/arm64/kernel/signal32.c 369 */;
	void *cocci_id/* arch/arm64/kernel/signal32.c 346 */;
	compat_ulong_t __user *cocci_id/* arch/arm64/kernel/signal32.c 319 */;
	struct k_sigaction *cocci_id/* arch/arm64/kernel/signal32.c 318 */;
	compat_ulong_t cocci_id/* arch/arm64/kernel/signal32.c 301 */;
	int cocci_id/* arch/arm64/kernel/signal32.c 299 */;
	struct ksignal *cocci_id/* arch/arm64/kernel/signal32.c 297 */;
	void __user *cocci_id/* arch/arm64/kernel/signal32.c 297 */;
	struct compat_rt_sigframe __user *cocci_id/* arch/arm64/kernel/signal32.c 266 */;
	rt_sigreturn cocci_id/* arch/arm64/kernel/signal32.c 263 */;
	struct compat_sigframe __user *cocci_id/* arch/arm64/kernel/signal32.c 235 */;
	struct pt_regs *cocci_id/* arch/arm64/kernel/signal32.c 234 */;
	sigreturn cocci_id/* arch/arm64/kernel/signal32.c 232 */;
	struct compat_vfp_sigframe {
		compat_ulong_t magic;
		compat_ulong_t size;
		struct compat_user_vfp {
			compat_u64 fpregs[32];
			compat_ulong_t fpscr;
		} ufp;
		struct compat_user_vfp_exc {
			compat_ulong_t fpexc;
			compat_ulong_t fpinst;
			compat_ulong_t fpinst2;
		} ufp_exc;
	}__attribute__((__aligned__(8))) cocci_id/* arch/arm64/kernel/signal32.c 23 */;
	unsigned long cocci_id/* arch/arm64/kernel/signal32.c 190 */;
	struct compat_aux_sigframe __user *cocci_id/* arch/arm64/kernel/signal32.c 189 */;
	sigset_t cocci_id/* arch/arm64/kernel/signal32.c 188 */;
	struct user_fpsimd_state cocci_id/* arch/arm64/kernel/signal32.c 146 */;
	union __fpsimd_vreg cocci_id/* arch/arm64/kernel/signal32.c 119 */;
}
