cocci_test_suite() {
	bool cocci_id/* drivers/firmware/psci/psci.c 94 */;
	u32 cocci_id/* drivers/firmware/psci/psci.c 80 */[PSCI_FN_MAX];
	enum psci_function{PSCI_FN_CPU_SUSPEND, PSCI_FN_CPU_ON, PSCI_FN_CPU_OFF, PSCI_FN_MIGRATE, PSCI_FN_MAX,} cocci_id/* drivers/firmware/psci/psci.c 72 */;
	psci_fn *cocci_id/* drivers/firmware/psci/psci.c 70 */;
	unsigned long cocci_id/* drivers/firmware/psci/psci.c 68 */(unsigned long,
								    unsigned long,
								    unsigned long,
								    unsigned long);
	enum arm_smccc_conduit cocci_id/* drivers/firmware/psci/psci.c 60 */;
	void cocci_id/* drivers/firmware/psci/psci.c 60 */;
	psci_initcall_t cocci_id/* drivers/firmware/psci/psci.c 564 */;
	const struct of_device_id *cocci_id/* drivers/firmware/psci/psci.c 563 */;
	const struct of_device_id cocci_id/* drivers/firmware/psci/psci.c 553 */[]__initconst;
	struct psci_operations cocci_id/* drivers/firmware/psci/psci.c 55 */;
	u32 cocci_id/* drivers/firmware/psci/psci.c 507 */;
	int __init cocci_id/* drivers/firmware/psci/psci.c 505 */;
	int (*cocci_id/* drivers/firmware/psci/psci.c 477 */)(const struct device_node *);
	void __init cocci_id/* drivers/firmware/psci/psci.c 420 */;
	const struct platform_suspend_ops cocci_id/* drivers/firmware/psci/psci.c 319 */;
	suspend_state_t cocci_id/* drivers/firmware/psci/psci.c 314 */;
	enum reboot_mode cocci_id/* drivers/firmware/psci/psci.c 261 */;
	const char *cocci_id/* drivers/firmware/psci/psci.c 241 */;
	struct device_node *cocci_id/* drivers/firmware/psci/psci.c 239 */;
	int cocci_id/* drivers/firmware/psci/psci.c 239 */;
	struct arm_smccc_res cocci_id/* drivers/firmware/psci/psci.c 127 */;
	unsigned long cocci_id/* drivers/firmware/psci/psci.c 123 */;
	const u32 cocci_id/* drivers/firmware/psci/psci.c 116 */;
}
