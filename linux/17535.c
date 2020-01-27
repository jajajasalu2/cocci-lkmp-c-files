cocci_test_suite() {
	unsigned long *cocci_id/* arch/powerpc/perf/callchain.c 53 */;
	long cocci_id/* arch/powerpc/perf/callchain.c 52 */;
	struct pt_regs *cocci_id/* arch/powerpc/perf/callchain.c 47 */;
	struct perf_callchain_entry_ctx *cocci_id/* arch/powerpc/perf/callchain.c 47 */;
	void cocci_id/* arch/powerpc/perf/callchain.c 46 */;
	unsigned int __user *cocci_id/* arch/powerpc/perf/callchain.c 431 */;
	struct mcontext32 __user *cocci_id/* arch/powerpc/perf/callchain.c 395 */;
	struct rt_signal_frame_32 __user *cocci_id/* arch/powerpc/perf/callchain.c 383 */;
	struct signal_frame_32 __user *cocci_id/* arch/powerpc/perf/callchain.c 372 */;
	struct rt_signal_frame_32 cocci_id/* arch/powerpc/perf/callchain.c 361 */;
	unsigned int cocci_id/* arch/powerpc/perf/callchain.c 359 */;
	int cocci_id/* arch/powerpc/perf/callchain.c 359 */;
	struct signal_frame_32 cocci_id/* arch/powerpc/perf/callchain.c 351 */;
	struct rt_signal_frame_32 {
		char dummy[__SIGNAL_FRAMESIZE32 + 16];
		compat_siginfo_t info;
		struct ucontext32 uc;
		int abigap[56];
	} cocci_id/* arch/powerpc/perf/callchain.c 342 */;
	struct signal_frame_32 {
		char dummy[__SIGNAL_FRAMESIZE32];
		struct sigcontext32 sctx;
		struct mcontext32 mctx;
		int abigap[56];
	} cocci_id/* arch/powerpc/perf/callchain.c 332 */;
	struct siginfo cocci_id/* arch/powerpc/perf/callchain.c 325 */;
	unsigned long __user *cocci_id/* arch/powerpc/perf/callchain.c 240 */;
	struct signal_frame_64 __user *cocci_id/* arch/powerpc/perf/callchain.c 239 */;
	struct signal_frame_64 cocci_id/* arch/powerpc/perf/callchain.c 207 */;
	unsigned long cocci_id/* arch/powerpc/perf/callchain.c 205 */;
	struct signal_frame_64 {
		char dummy[__SIGNAL_FRAMESIZE];
		struct ucontext uc;
		unsigned long unused[2];
		unsigned int tramp[6];
		struct siginfo *pinfo;
		void *puc;
		struct siginfo info;
		char abigap[288];
	} cocci_id/* arch/powerpc/perf/callchain.c 194 */;
	unsigned int *cocci_id/* arch/powerpc/perf/callchain.c 168 */;
	unsigned cocci_id/* arch/powerpc/perf/callchain.c 116 */;
	pte_t *cocci_id/* arch/powerpc/perf/callchain.c 115 */;
	pgd_t *cocci_id/* arch/powerpc/perf/callchain.c 114 */;
	void __user *cocci_id/* arch/powerpc/perf/callchain.c 111 */;
	void *cocci_id/* arch/powerpc/perf/callchain.c 111 */;
}
