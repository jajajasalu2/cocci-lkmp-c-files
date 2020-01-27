cocci_test_suite() {
	unsigned long cocci_id/* arch/x86/um/signal.c 90 */;
	sigset_t cocci_id/* arch/x86/um/signal.c 565 */;
	void cocci_id/* arch/x86/um/signal.c 559 */;
	struct rt_sigframe cocci_id/* arch/x86/um/signal.c 496 */;
	struct rt_sigframe {
		char __user *pretcode;
		struct ucontext uc;
		struct siginfo info;
		struct _xstate fpstate;
	} cocci_id/* arch/x86/um/signal.c 480 */;
	char __user *cocci_id/* arch/x86/um/signal.c 437 */;
	struct rt_sigframe __user *cocci_id/* arch/x86/um/signal.c 409 */;
	int __user *cocci_id/* arch/x86/um/signal.c 392 */;
	short __user *cocci_id/* arch/x86/um/signal.c 391 */;
	void __user *cocci_id/* arch/x86/um/signal.c 364 */;
	struct sigframe __user *cocci_id/* arch/x86/um/signal.c 363 */;
	struct ksignal *cocci_id/* arch/x86/um/signal.c 360 */;
	struct rt_sigframe {
		char __user *pretcode;
		int sig;
		struct siginfo __user *pinfo;
		void __user *puc;
		struct siginfo info;
		struct ucontext uc;
		struct _xstate fpstate;
		char retcode[8];
	} cocci_id/* arch/x86/um/signal.c 348 */;
	struct sigframe {
		char __user *pretcode;
		int sig;
		struct sigcontext sc;
		struct _xstate fpstate;
		unsigned long extramask[_NSIG_WORDS - 1];
		char retcode[8];
	} cocci_id/* arch/x86/um/signal.c 338 */;
	sigset_t *cocci_id/* arch/x86/um/signal.c 327 */;
	struct ucontext __user *cocci_id/* arch/x86/um/signal.c 326 */;
	unsigned int cocci_id/* arch/x86/um/signal.c 25 */;
	struct faultinfo *cocci_id/* arch/x86/um/signal.c 241 */;
	struct _xstate __user *cocci_id/* arch/x86/um/signal.c 237 */;
	struct _xstate cocci_id/* arch/x86/um/signal.c 229 */;
	void *cocci_id/* arch/x86/um/signal.c 214 */;
	struct user_fxsr_struct cocci_id/* arch/x86/um/signal.c 206 */;
	struct sigcontext cocci_id/* arch/x86/um/signal.c 156 */;
	struct sigcontext __user *cocci_id/* arch/x86/um/signal.c 154 */;
	struct pt_regs *cocci_id/* arch/x86/um/signal.c 153 */;
	unsigned long __user *cocci_id/* arch/x86/um/signal.c 139 */;
	unsigned long *cocci_id/* arch/x86/um/signal.c 138 */;
	unsigned short cocci_id/* arch/x86/um/signal.c 126 */;
	long cocci_id/* arch/x86/um/signal.c 123 */;
	struct _fpreg __user *cocci_id/* arch/x86/um/signal.c 120 */;
	struct _fpxreg *cocci_id/* arch/x86/um/signal.c 119 */;
	unsigned long cocci_id/* arch/x86/um/signal.c 118 */[7];
	struct _fpstate __user *cocci_id/* arch/x86/um/signal.c 116 */;
	struct user_fxsr_struct *cocci_id/* arch/x86/um/signal.c 115 */;
	int cocci_id/* arch/x86/um/signal.c 115 */;
}
