cocci_test_suite() {
	u32 cocci_id/* drivers/net/can/c_can/c_can_pci.c 86 */;
	enum reg cocci_id/* drivers/net/can/c_can/c_can_pci.c 86 */;
	const struct c_can_priv *cocci_id/* drivers/net/can/c_can/c_can_pci.c 86 */;
	u16 cocci_id/* drivers/net/can/c_can/c_can_pci.c 74 */;
	struct c_can_pci_data {
		enum c_can_dev_id type;
		enum c_can_pci_reg_align reg_align;
		unsigned int freq;
		int bar;
		void (*init)(const struct c_can_priv *priv, bool enable);
	} cocci_id/* drivers/net/can/c_can/c_can_pci.c 31 */;
	struct pci_driver cocci_id/* drivers/net/can/c_can/c_can_pci.c 281 */;
	const struct pci_device_id cocci_id/* drivers/net/can/c_can/c_can_pci.c 274 */[];
	const struct c_can_pci_data cocci_id/* drivers/net/can/c_can/c_can_pci.c 261 */;
	enum c_can_pci_reg_align{C_CAN_REG_ALIGN_16, C_CAN_REG_ALIGN_32, C_CAN_REG_32,} cocci_id/* drivers/net/can/c_can/c_can_pci.c 25 */;
	void cocci_id/* drivers/net/can/c_can/c_can_pci.c 238 */;
	void __iomem *cocci_id/* drivers/net/can/c_can/c_can_pci.c 120 */;
	struct net_device *cocci_id/* drivers/net/can/c_can/c_can_pci.c 119 */;
	struct c_can_priv *cocci_id/* drivers/net/can/c_can/c_can_pci.c 118 */;
	struct c_can_pci_data *cocci_id/* drivers/net/can/c_can/c_can_pci.c 117 */;
	void *cocci_id/* drivers/net/can/c_can/c_can_pci.c 117 */;
	const struct pci_device_id *cocci_id/* drivers/net/can/c_can/c_can_pci.c 115 */;
	struct pci_dev *cocci_id/* drivers/net/can/c_can/c_can_pci.c 114 */;
	int cocci_id/* drivers/net/can/c_can/c_can_pci.c 114 */;
	u32 __iomem *cocci_id/* drivers/net/can/c_can/c_can_pci.c 106 */;
	bool cocci_id/* drivers/net/can/c_can/c_can_pci.c 103 */;
}
