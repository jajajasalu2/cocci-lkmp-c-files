cocci_test_suite() {
	bool cocci_id/* arch/x86/xen/time.c 97 */;
	struct timekeeper *cocci_id/* arch/x86/xen/time.c 96 */;
	struct xen_platform_op cocci_id/* arch/x86/xen/time.c 94 */;
	struct timespec64 cocci_id/* arch/x86/xen/time.c 92 */;
	void *cocci_id/* arch/x86/xen/time.c 89 */;
	struct notifier_block *cocci_id/* arch/x86/xen/time.c 88 */;
	const struct timespec64 *cocci_id/* arch/x86/xen/time.c 83 */;
	struct timespec64 *cocci_id/* arch/x86/xen/time.c 78 */;
	struct pvclock_wall_clock *cocci_id/* arch/x86/xen/time.c 70 */;
	struct shared_info *cocci_id/* arch/x86/xen/time.c 69 */;
	char *cocci_id/* arch/x86/xen/time.c 575 */;
	int __init cocci_id/* arch/x86/xen/time.c 575 */;
	struct clocksource *cocci_id/* arch/x86/xen/time.c 57 */;
	void __init cocci_id/* arch/x86/xen/time.c 548 */;
	int cocci_id/* arch/x86/xen/time.c 538 */;
	struct pvclock_vcpu_time_info *cocci_id/* arch/x86/xen/time.c 47 */;
	void cocci_id/* arch/x86/xen/time.c 45 */;
	struct vcpu_register_time_memory_area cocci_id/* arch/x86/xen/time.c 404 */;
	u64 cocci_id/* arch/x86/xen/time.c 380 */;
	struct pvclock_vsyscall_time_info *cocci_id/* arch/x86/xen/time.c 379 */;
	const struct pv_time_ops cocci_id/* arch/x86/xen/time.c 374 */;
	struct clock_event_device *cocci_id/* arch/x86/xen/time.c 331 */;
	struct xen_clock_event_device *cocci_id/* arch/x86/xen/time.c 330 */;
	irqreturn_t cocci_id/* arch/x86/xen/time.c 303 */;
	struct xen_clock_event_device {
		struct clock_event_device evt;
		char name[16];
	} cocci_id/* arch/x86/xen/time.c 297 */;
	const struct clock_event_device *cocci_id/* arch/x86/xen/time.c 294 */;
	struct vcpu_set_singleshot_timer cocci_id/* arch/x86/xen/time.c 260 */;
	struct clock_event_device cocci_id/* arch/x86/xen/time.c 215 */;
	s64 cocci_id/* arch/x86/xen/time.c 187 */;
	unsigned long cocci_id/* arch/x86/xen/time.c 187 */;
	struct clocksource cocci_id/* arch/x86/xen/time.c 148 */;
	struct notifier_block cocci_id/* arch/x86/xen/time.c 144 */;
	long cocci_id/* arch/x86/xen/time.c 101 */;
	__typeof__(struct xen_clock_event_device) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
