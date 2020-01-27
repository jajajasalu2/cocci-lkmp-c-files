cocci_test_suite() {
	enum{HP_THREAD_NONE=0, HP_THREAD_ACTIVE, HP_THREAD_PARKED,} cocci_id/* kernel/smpboot.c 91 */;
	struct smpboot_thread_data {
		unsigned int cpu;
		unsigned int status;
		struct smp_hotplug_thread *ht;
	} cocci_id/* kernel/smpboot.c 85 */;
	bool cocci_id/* kernel/smpboot.c 465 */;
	void cocci_id/* kernel/smpboot.c 465 */;
	void __init cocci_id/* kernel/smpboot.c 40 */;
	struct smpboot_thread_data *cocci_id/* kernel/smpboot.c 174 */;
	struct task_struct *cocci_id/* kernel/smpboot.c 173 */;
	struct smp_hotplug_thread *cocci_id/* kernel/smpboot.c 171 */;
	unsigned int cocci_id/* kernel/smpboot.c 171 */;
	int cocci_id/* kernel/smpboot.c 170 */;
	void *cocci_id/* kernel/smpboot.c 107 */;
	__typeof__(struct task_struct *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(atomic_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
