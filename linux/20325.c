cocci_test_suite() {
	bool cocci_id/* arch/x86/kernel/tsc_sync.c 81 */;
	s64 cocci_id/* arch/x86/kernel/tsc_sync.c 80 */;
	cycles_t cocci_id/* arch/x86/kernel/tsc_sync.c 404 */;
	unsigned int cocci_id/* arch/x86/kernel/tsc_sync.c 403 */;
	struct tsc_adjust *cocci_id/* arch/x86/kernel/tsc_sync.c 402 */;
	char *cocci_id/* arch/x86/kernel/tsc_sync.c 40 */;
	bool __read_mostly cocci_id/* arch/x86/kernel/tsc_sync.c 38 */;
	int cocci_id/* arch/x86/kernel/tsc_sync.c 310 */;
	void cocci_id/* arch/x86/kernel/tsc_sync.c 310 */;
	struct tsc_adjust {
		s64 bootval;
		s64 adjusted;
		unsigned long nextcheck;
		bool warned;
	} cocci_id/* arch/x86/kernel/tsc_sync.c 25 */;
	arch_spinlock_t cocci_id/* arch/x86/kernel/tsc_sync.c 215 */;
	atomic_t cocci_id/* arch/x86/kernel/tsc_sync.c 207 */;
	struct cpumask *cocci_id/* arch/x86/kernel/tsc_sync.c 142 */;
	bool __init cocci_id/* arch/x86/kernel/tsc_sync.c 114 */;
	__typeof__(struct tsc_adjust) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
