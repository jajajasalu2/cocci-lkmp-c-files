cocci_test_suite() {
	_sigregs32 cocci_id/* arch/s390/kernel/compat_signal.c 88 */;
	_sigregs32 __user *cocci_id/* arch/s390/kernel/compat_signal.c 86 */;
	__u32 cocci_id/* arch/s390/kernel/compat_signal.c 71 */;
	struct {
		__u8 callee_used_stack[__SIGNAL_FRAMESIZE32];
		__u16 svc_insn;
		compat_siginfo_t info;
		struct ucontext32 uc;
	} cocci_id/* arch/s390/kernel/compat_signal.c 45 */;
	int cocci_id/* arch/s390/kernel/compat_signal.c 418 */;
	sigset_t *cocci_id/* arch/s390/kernel/compat_signal.c 415 */;
	struct ksignal *cocci_id/* arch/s390/kernel/compat_signal.c 415 */;
	void cocci_id/* arch/s390/kernel/compat_signal.c 415 */;
	__u64 __force cocci_id/* arch/s390/kernel/compat_signal.c 402 */;
	unsigned int __force __user *cocci_id/* arch/s390/kernel/compat_signal.c 364 */;
	struct {
		__u8 callee_used_stack[__SIGNAL_FRAMESIZE32];
		struct sigcontext32 sc;
		_sigregs32 sregs;
		int signo;
		_sigregs_ext32 sregs_ext;
		__u16 svc_insn;
	} cocci_id/* arch/s390/kernel/compat_signal.c 35 */;
	u32 cocci_id/* arch/s390/kernel/compat_signal.c 344 */;
	__u16 __user *cocci_id/* arch/s390/kernel/compat_signal.c 307 */;
	unsigned long __force cocci_id/* arch/s390/kernel/compat_signal.c 303 */;
	int __force __user *cocci_id/* arch/s390/kernel/compat_signal.c 293 */;
	compat_sigset_t cocci_id/* arch/s390/kernel/compat_signal.c 280 */;
	unsigned int __user *cocci_id/* arch/s390/kernel/compat_signal.c 275 */;
	unsigned long cocci_id/* arch/s390/kernel/compat_signal.c 235 */;
	struct k_sigaction *cocci_id/* arch/s390/kernel/compat_signal.c 233 */;
	size_t cocci_id/* arch/s390/kernel/compat_signal.c 233 */;
	void __user *cocci_id/* arch/s390/kernel/compat_signal.c 232 */;
	rt_sigframe32 __user *cocci_id/* arch/s390/kernel/compat_signal.c 204 */;
	rt_sigreturn cocci_id/* arch/s390/kernel/compat_signal.c 201 */;
	compat_sigset_t __user *cocci_id/* arch/s390/kernel/compat_signal.c 186 */;
	sigset_t cocci_id/* arch/s390/kernel/compat_signal.c 184 */;
	sigframe32 __user *cocci_id/* arch/s390/kernel/compat_signal.c 183 */;
	struct pt_regs *cocci_id/* arch/s390/kernel/compat_signal.c 182 */;
	sigreturn cocci_id/* arch/s390/kernel/compat_signal.c 180 */;
	__u64 *cocci_id/* arch/s390/kernel/compat_signal.c 175 */;
	__u32 *cocci_id/* arch/s390/kernel/compat_signal.c 164 */;
	__u64 cocci_id/* arch/s390/kernel/compat_signal.c 156 */[__NUM_VXRS_LOW];
	__u32 cocci_id/* arch/s390/kernel/compat_signal.c 155 */[NUM_GPRS];
	_sigregs_ext32 __user *cocci_id/* arch/s390/kernel/compat_signal.c 153 */;
	_s390_fp_regs *cocci_id/* arch/s390/kernel/compat_signal.c 118 */;
	__u64 cocci_id/* arch/s390/kernel/compat_signal.c 113 */;
}
