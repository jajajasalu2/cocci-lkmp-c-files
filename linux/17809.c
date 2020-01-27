cocci_test_suite() {
	union paravirt_nr_irqs_max cocci_id/* arch/ia64/kernel/nr-irqs.c 21 */;
	union paravirt_nr_irqs_max {
		char ia64_native_nr_irqs[IA64_NATIVE_NR_IRQS];
	} cocci_id/* arch/ia64/kernel/nr-irqs.c 17 */;
	void cocci_id/* arch/ia64/kernel/nr-irqs.c 15 */;
}
