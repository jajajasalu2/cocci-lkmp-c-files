cocci_test_suite() {
	struct pt_regs *cocci_id/* arch/powerpc/kernel/mce_power.c 629 */;
	long cocci_id/* arch/powerpc/kernel/mce_power.c 629 */;
	void cocci_id/* arch/powerpc/kernel/mce_power.c 62 */;
	struct mce_error_info cocci_id/* arch/powerpc/kernel/mce_power.c 609 */;
	const struct mce_ierror_table cocci_id/* arch/powerpc/kernel/mce_power.c 607 */[];
	const struct exception_table_entry *cocci_id/* arch/powerpc/kernel/mce_power.c 582 */;
	uint64_t cocci_id/* arch/powerpc/kernel/mce_power.c 485 */;
	struct mce_error_info *cocci_id/* arch/powerpc/kernel/mce_power.c 482 */;
	const struct mce_derror_table cocci_id/* arch/powerpc/kernel/mce_power.c 481 */[];
	unsigned int *cocci_id/* arch/powerpc/kernel/mce_power.c 376 */;
	struct pt_regs cocci_id/* arch/powerpc/kernel/mce_power.c 371 */;
	struct instruction_op cocci_id/* arch/powerpc/kernel/mce_power.c 370 */;
	uint64_t *cocci_id/* arch/powerpc/kernel/mce_power.c 359 */;
	int cocci_id/* arch/powerpc/kernel/mce_power.c 359 */;
	struct mm_struct *cocci_id/* arch/powerpc/kernel/mce_power.c 33 */;
	unsigned int cocci_id/* arch/powerpc/kernel/mce_power.c 31 */;
	pte_t *cocci_id/* arch/powerpc/kernel/mce_power.c 30 */;
	unsigned long cocci_id/* arch/powerpc/kernel/mce_power.c 28 */;
	struct mce_derror_table {
		unsigned long dsisr_value;
		bool dar_valid;
		unsigned int error_type;
		unsigned int error_subtype;
		unsigned int error_class;
		unsigned int initiator;
		unsigned int severity;
		bool sync_error;
	} cocci_id/* arch/powerpc/kernel/mce_power.c 241 */;
	struct mce_ierror_table {
		unsigned long srr1_mask;
		unsigned long srr1_value;
		bool nip_valid;
		unsigned int error_type;
		unsigned int error_subtype;
		unsigned int error_class;
		unsigned int initiator;
		unsigned int severity;
		bool sync_error;
	} cocci_id/* arch/powerpc/kernel/mce_power.c 126 */;
}
