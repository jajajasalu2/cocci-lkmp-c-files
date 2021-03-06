cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/misc/pch_phub.c 891 */;
	const struct pci_device_id cocci_id/* drivers/misc/pch_phub.c 881 */[];
	pm_message_t cocci_id/* drivers/misc/pch_phub.c 840 */;
	const char *cocci_id/* drivers/misc/pch_phub.c 702 */;
	struct pch_phub_reg cocci_id/* drivers/misc/pch_phub.c 665 */;
	const struct pci_device_id *cocci_id/* drivers/misc/pch_phub.c 660 */;
	struct pci_dev *cocci_id/* drivers/misc/pch_phub.c 659 */;
	const struct bin_attribute cocci_id/* drivers/misc/pch_phub.c 649 */;
	u8 cocci_id/* drivers/misc/pch_phub.c 627 */[ETH_ALEN];
	u8 cocci_id/* drivers/misc/pch_phub.c 610 */[8];
	struct device_attribute *cocci_id/* drivers/misc/pch_phub.c 607 */;
	struct device *cocci_id/* drivers/misc/pch_phub.c 607 */;
	unsigned char *cocci_id/* drivers/misc/pch_phub.c 511 */;
	struct pch_phub_reg *cocci_id/* drivers/misc/pch_phub.c 495 */;
	int cocci_id/* drivers/misc/pch_phub.c 491 */;
	unsigned char cocci_id/* drivers/misc/pch_phub.c 487 */;
	unsigned int cocci_id/* drivers/misc/pch_phub.c 486 */;
	loff_t cocci_id/* drivers/misc/pch_phub.c 484 */;
	size_t cocci_id/* drivers/misc/pch_phub.c 484 */;
	struct bin_attribute *cocci_id/* drivers/misc/pch_phub.c 483 */;
	char *cocci_id/* drivers/misc/pch_phub.c 483 */;
	struct kobject *cocci_id/* drivers/misc/pch_phub.c 482 */;
	struct file *cocci_id/* drivers/misc/pch_phub.c 482 */;
	ssize_t cocci_id/* drivers/misc/pch_phub.c 482 */;
	u8 *cocci_id/* drivers/misc/pch_phub.c 449 */;
	void cocci_id/* drivers/misc/pch_phub.c 449 */;
	u32 cocci_id/* drivers/misc/pch_phub.c 408 */;
	u8 cocci_id/* drivers/misc/pch_phub.c 295 */;
	void __iomem *cocci_id/* drivers/misc/pch_phub.c 146 */;
	const int cocci_id/* drivers/misc/pch_phub.c 132 */[ETH_ALEN];
	struct pch_phub_reg {
		u32 phub_id_reg;
		u32 q_pri_val_reg;
		u32 rc_q_maxsize_reg;
		u32 bri_q_maxsize_reg;
		u32 comp_resp_timeout_reg;
		u32 bus_slave_control_reg;
		u32 deadlock_avoid_type_reg;
		u32 intpin_reg_wpermit_reg0;
		u32 intpin_reg_wpermit_reg1;
		u32 intpin_reg_wpermit_reg2;
		u32 intpin_reg_wpermit_reg3;
		u32 int_reduce_control_reg[MAX_NUM_INT_REDUCE_CONTROL_REG];
		u32 clkcfg_reg;
		u32 funcsel_reg;
		void __iomem *pch_phub_base_address;
		void __iomem *pch_phub_extrom_base_address;
		u32 pch_mac_start_address;
		u32 pch_opt_rom_start_address;
		int ioh_type;
		struct pci_dev *pdev;
	} cocci_id/* drivers/misc/pch_phub.c 108 */;
}
