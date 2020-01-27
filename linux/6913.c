cocci_test_suite() {
	struct matrox_device {
		void __iomem *base_addr;
		void __iomem *port_index;
		void __iomem *port_data;
		u8 data_mask;
		unsigned long phys_addr;
		void __iomem *virt_addr;
		unsigned long found;
		struct w1_bus_master *bus_master;
	} cocci_id/* drivers/w1/masters/matrox_w1.c 42 */;
	struct pci_driver cocci_id/* drivers/w1/masters/matrox_w1.c 198 */;
	struct pci_device_id cocci_id/* drivers/w1/masters/matrox_w1.c 192 */[];
	struct w1_bus_master *cocci_id/* drivers/w1/masters/matrox_w1.c 134 */;
	struct w1_bus_master cocci_id/* drivers/w1/masters/matrox_w1.c 125 */;
	struct matrox_device cocci_id/* drivers/w1/masters/matrox_w1.c 124 */;
	const struct pci_device_id *cocci_id/* drivers/w1/masters/matrox_w1.c 116 */;
	struct pci_dev *cocci_id/* drivers/w1/masters/matrox_w1.c 116 */;
	int cocci_id/* drivers/w1/masters/matrox_w1.c 116 */;
	struct matrox_device *cocci_id/* drivers/w1/masters/matrox_w1.c 110 */;
	void cocci_id/* drivers/w1/masters/matrox_w1.c 110 */;
	u8 cocci_id/* drivers/w1/masters/matrox_w1.c 100 */;
	void *cocci_id/* drivers/w1/masters/matrox_w1.c 100 */;
}
