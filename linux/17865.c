cocci_test_suite() {
	unsigned int cocci_id/* arch/h8300/kernel/signal.c 78 */;
	struct sigcontext *cocci_id/* arch/h8300/kernel/signal.c 74 */;
	int *cocci_id/* arch/h8300/kernel/signal.c 74 */;
	u32 cocci_id/* arch/h8300/kernel/signal.c 281 */;
	struct pt_regs *cocci_id/* arch/h8300/kernel/signal.c 281 */;
	void cocci_id/* arch/h8300/kernel/signal.c 281 */;
	unsigned long cocci_id/* arch/h8300/kernel/signal.c 266 */;
	struct ksignal cocci_id/* arch/h8300/kernel/signal.c 264 */;
	int cocci_id/* arch/h8300/kernel/signal.c 247 */;
	sigset_t *cocci_id/* arch/h8300/kernel/signal.c 246 */;
	struct k_sigaction *cocci_id/* arch/h8300/kernel/signal.c 211 */;
	unsigned short *cocci_id/* arch/h8300/kernel/signal.c 192 */;
	unsigned long *cocci_id/* arch/h8300/kernel/signal.c 190 */;
	unsigned char *cocci_id/* arch/h8300/kernel/signal.c 164 */;
	struct rt_sigframe *cocci_id/* arch/h8300/kernel/signal.c 162 */;
	struct ksignal *cocci_id/* arch/h8300/kernel/signal.c 154 */;
	size_t cocci_id/* arch/h8300/kernel/signal.c 154 */;
	void __user *cocci_id/* arch/h8300/kernel/signal.c 153 */;
	struct sigcontext __user *cocci_id/* arch/h8300/kernel/signal.c 133 */;
	sigset_t cocci_id/* arch/h8300/kernel/signal.c 110 */;
	struct rt_sigframe {
		long dummy_er0;
		long dummy_vector;
#if defined(CONFIG_CPU_H8S)
		short dummy_exr;
#endif
		long dummy_pc;
		char *pretcode;
		struct siginfo *pinfo;
		void *puc;
		unsigned char retcode[8];
		struct siginfo info;
		struct ucontext uc;
		int sig;
	}__packed __aligned(2) cocci_id/*  1 */;
}
