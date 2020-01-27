cocci_test_suite() {
	struct rt_sigframe {
		__u8 callee_used_stack[__SIGNAL_FRAMESIZE];
		__u16 svc_insn;
		struct siginfo info;
		struct ucontext_extended uc;
	} cocci_id/* arch/s390/kernel/signal.c 98 */;
	struct sigframe {
		__u8 callee_used_stack[__SIGNAL_FRAMESIZE];
		struct sigcontext sc;
		_sigregs sregs;
		int signo;
		_sigregs_ext sregs_ext;
		__u16 svc_insn;
	} cocci_id/* arch/s390/kernel/signal.c 63 */;
	void cocci_id/* arch/s390/kernel/signal.c 536 */;
	sigset_t *cocci_id/* arch/s390/kernel/signal.c 465 */;
	struct ksignal cocci_id/* arch/s390/kernel/signal.c 464 */;
	int cocci_id/* arch/s390/kernel/signal.c 442 */;
	struct ksignal *cocci_id/* arch/s390/kernel/signal.c 439 */;
	_sigregs_ext cocci_id/* arch/s390/kernel/signal.c 376 */;
	struct rt_sigframe cocci_id/* arch/s390/kernel/signal.c 376 */;
	__u16 __user *cocci_id/* arch/s390/kernel/signal.c 339 */;
	int __user *cocci_id/* arch/s390/kernel/signal.c 326 */;
	_sigregs __user __force *cocci_id/* arch/s390/kernel/signal.c 314 */;
	addr_t __user *cocci_id/* arch/s390/kernel/signal.c 309 */;
	struct sigcontext cocci_id/* arch/s390/kernel/signal.c 291 */;
	unsigned long cocci_id/* arch/s390/kernel/signal.c 269 */;
	struct k_sigaction *cocci_id/* arch/s390/kernel/signal.c 267 */;
	size_t cocci_id/* arch/s390/kernel/signal.c 267 */;
	void __user *cocci_id/* arch/s390/kernel/signal.c 266 */;
	struct rt_sigframe __user *cocci_id/* arch/s390/kernel/signal.c 242 */;
	rt_sigreturn cocci_id/* arch/s390/kernel/signal.c 239 */;
	sigset_t cocci_id/* arch/s390/kernel/signal.c 222 */;
	struct sigframe __user *cocci_id/* arch/s390/kernel/signal.c 220 */;
	struct pt_regs *cocci_id/* arch/s390/kernel/signal.c 219 */;
	sigreturn cocci_id/* arch/s390/kernel/signal.c 217 */;
	__u64 *cocci_id/* arch/s390/kernel/signal.c 212 */;
	__u64 cocci_id/* arch/s390/kernel/signal.c 200 */[__NUM_VXRS_LOW];
	_sigregs_ext __user *cocci_id/* arch/s390/kernel/signal.c 198 */;
	_sigregs cocci_id/* arch/s390/kernel/signal.c 140 */;
	_sigregs __user *cocci_id/* arch/s390/kernel/signal.c 138 */;
}
