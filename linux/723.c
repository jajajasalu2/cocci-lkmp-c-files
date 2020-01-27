cocci_test_suite() {
	struct pci_dev *cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 97 */;
	struct slot *cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 96 */;
	struct hotplug_slot *cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 94 */;
	int cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 94 */;
	struct slot cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 41 */;
	struct slot {
		struct list_head slot_list;
		struct hotplug_slot hotplug_slot;
		struct zpci_dev *zdev;
	} cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 33 */;
	enum zpci_state cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 24 */;
	struct zpci_dev *cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 176 */;
	void cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 176 */;
	char cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 147 */[SLOT_NAME_SIZE];
	const struct hotplug_slot_ops cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 138 */;
	u8 *cocci_id/* drivers/pci/hotplug/s390_pci_hpc.c 131 */;
}
