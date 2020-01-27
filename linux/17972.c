cocci_test_suite() {
	compat_sigset_t cocci_id/* arch/sparc/kernel/signal32.c 93 */;
	struct signal_frame32 __user *cocci_id/* arch/sparc/kernel/signal32.c 87 */;
	struct sigstack32 __user *cocci_id/* arch/sparc/kernel/signal32.c 705 */;
	u32 cocci_id/* arch/sparc/kernel/signal32.c 703 */;
	struct sigstack32 {
		u32 the_stack;
		int cur_status;
	} cocci_id/* arch/sparc/kernel/signal32.c 698 */;
	bool cocci_id/* arch/sparc/kernel/signal32.c 663 */;
	struct ksignal cocci_id/* arch/sparc/kernel/signal32.c 660 */;
	struct sigaction *cocci_id/* arch/sparc/kernel/signal32.c 634 */;
	sigset_t *cocci_id/* arch/sparc/kernel/signal32.c 622 */;
	struct rt_signal_frame32 {
		struct sparc_stackf32 ss;
		compat_siginfo_t info;
		struct pt_regs32 regs;
		compat_sigset_t mask;
		u32 fpu_save;
		unsigned int insns[2];
		compat_stack_t stack;
		unsigned int extra_size;
		siginfo_extra_v8plus_t v8plus;
		u32 rwin_save;
	}__attribute__((aligned(8))) cocci_id/* arch/sparc/kernel/signal32.c 59 */;
	struct signal_frame32 {
		struct sparc_stackf32 ss;
		__siginfo32_t info;
		u32 fpu_save;
		unsigned int insns[2];
		unsigned int extramask[_COMPAT_NSIG_WORDS - 1];
		unsigned int extra_size;
		siginfo_extra_v8plus_t v8plus;
		u32 rwin_save;
	}__attribute__((aligned(8))) cocci_id/* arch/sparc/kernel/signal32.c 47 */;
	struct reg_window *cocci_id/* arch/sparc/kernel/signal32.c 439 */;
	struct reg_window32 cocci_id/* arch/sparc/kernel/signal32.c 437 */;
	u32 __user *cocci_id/* arch/sparc/kernel/signal32.c 435 */;
	__siginfo_rwin_t __user *cocci_id/* arch/sparc/kernel/signal32.c 415 */;
	u64 cocci_id/* arch/sparc/kernel/signal32.c 410 */;
	struct {
		unsigned int g_upper[8];
		unsigned int o_upper[8];
		unsigned int asi;
	} cocci_id/* arch/sparc/kernel/signal32.c 41 */;
	__siginfo_fpu_t __user *cocci_id/* arch/sparc/kernel/signal32.c 407 */;
	siginfo_extra_v8plus_t cocci_id/* arch/sparc/kernel/signal32.c 398 */;
	__siginfo_rwin_t cocci_id/* arch/sparc/kernel/signal32.c 368 */;
	__siginfo_fpu_t cocci_id/* arch/sparc/kernel/signal32.c 366 */;
	pmd_t *cocci_id/* arch/sparc/kernel/signal32.c 303 */;
	pud_t *cocci_id/* arch/sparc/kernel/signal32.c 302 */;
	pgd_t *cocci_id/* arch/sparc/kernel/signal32.c 301 */;
	pte_t *cocci_id/* arch/sparc/kernel/signal32.c 300 */;
	struct ksignal *cocci_id/* arch/sparc/kernel/signal32.c 262 */;
	void __user *cocci_id/* arch/sparc/kernel/signal32.c 262 */;
	u32 *cocci_id/* arch/sparc/kernel/signal32.c 228 */;
	unsigned long cocci_id/* arch/sparc/kernel/signal32.c 225 */;
	int cocci_id/* arch/sparc/kernel/signal32.c 183 */;
	sigset_t cocci_id/* arch/sparc/kernel/signal32.c 182 */;
	compat_uptr_t cocci_id/* arch/sparc/kernel/signal32.c 180 */;
	unsigned int cocci_id/* arch/sparc/kernel/signal32.c 179 */;
	struct rt_signal_frame32 __user *cocci_id/* arch/sparc/kernel/signal32.c 178 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/signal32.c 176 */;
	void cocci_id/* arch/sparc/kernel/signal32.c 176 */;
	long cocci_id/* arch/sparc/kernel/signal32.c 168 */;
}
