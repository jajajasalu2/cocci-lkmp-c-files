cocci_test_suite() {
	struct cluster_mask *cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 55 */;
	u32 cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 42 */;
	unsigned long cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 41 */;
	struct cpumask *cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 40 */;
	unsigned int cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 39 */;
	const struct cpumask *cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 37 */;
	int cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 37 */;
	void cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 36 */;
	char *cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 23 */;
	struct apic cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 179 */;
	struct cluster_mask {
		unsigned int clusterid;
		int node;
		struct cpumask mask;
	} cocci_id/* arch/x86/kernel/apic/x2apic_cluster.c 12 */;
	__typeof__(struct cluster_mask *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(u32) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(cpumask_var_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
