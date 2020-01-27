cocci_test_suite() {
	u8 cocci_id/* arch/x86/kernel/paravirt_patch.c 86 */;
	void *cocci_id/* arch/x86/kernel/paravirt_patch.c 86 */;
	unsigned long cocci_id/* arch/x86/kernel/paravirt_patch.c 86 */;
	unsigned int cocci_id/* arch/x86/kernel/paravirt_patch.c 86 */;
	const struct patch_lock cocci_id/* arch/x86/kernel/paravirt_patch.c 75 */;
	struct patch_lock {
		unsigned char queued_spin_unlock[3];
		unsigned char vcpu_is_preempted[2];
	} cocci_id/* arch/x86/kernel/paravirt_patch.c 70 */;
	const struct patch_xxl cocci_id/* arch/x86/kernel/paravirt_patch.c 39 */;
	struct patch_xxl {
		const unsigned char irq_irq_disable[1];
		const unsigned char irq_irq_enable[1];
		const unsigned char irq_save_fl[2];
		const unsigned char mmu_read_cr2[3];
		const unsigned char mmu_read_cr3[3];
		const unsigned char mmu_write_cr3[3];
		const unsigned char irq_restore_fl[2];
# ifdef CONFIG_X86_64
		const unsigned char cpu_wbinvd[2];
		const unsigned char cpu_usergs_sysret64[6];
		const unsigned char cpu_swapgs[3];
		const unsigned char mov64[3];
# else
		const unsigned char cpu_iret[1];
# endif
	} cocci_id/* arch/x86/kernel/paravirt_patch.c 21 */;
}
