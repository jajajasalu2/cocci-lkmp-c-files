cocci_test_suite() {
	const struct pci_bridge_reg_behavior cocci_id/* drivers/pci/pci-bridge-emul.c 41 */[];
	void (*cocci_id/* drivers/pci/pci-bridge-emul.c 389 */)(struct pci_bridge_emul *bridge,
								int reg,
								u32 old,
								u32 new,
								u32 mask);
	u32 cocci_id/* drivers/pci/pci-bridge-emul.c 385 */;
	const struct pci_bridge_reg_behavior *cocci_id/* drivers/pci/pci-bridge-emul.c 332 */;
	__le32 *cocci_id/* drivers/pci/pci-bridge-emul.c 331 */;
	pci_bridge_emul_read_status_t (*cocci_id/* drivers/pci/pci-bridge-emul.c 329 */)(struct pci_bridge_emul *bridge,
											 int reg,
											 u32 *value);
	u32 *cocci_id/* drivers/pci/pci-bridge-emul.c 325 */;
	int cocci_id/* drivers/pci/pci-bridge-emul.c 324 */;
	struct pci_bridge_emul *cocci_id/* drivers/pci/pci-bridge-emul.c 312 */;
	void cocci_id/* drivers/pci/pci-bridge-emul.c 312 */;
	unsigned int cocci_id/* drivers/pci/pci-bridge-emul.c 271 */;
	struct pci_bridge_reg_behavior {
		u32 ro;
		u32 rw;
		u32 w1c;
		u32 rsvd;
	} cocci_id/* drivers/pci/pci-bridge-emul.c 27 */;
}
