cocci_test_suite() {
	u8 *cocci_id/* drivers/fpga/altera-cvp.c 97 */;
	struct cvp_priv {
		void (*switch_clk)(struct altera_cvp_conf *conf);
		int (*clear_state)(struct altera_cvp_conf *conf);
		int (*wait_credit)(struct fpga_manager *mgr, u32 blocks);
		size_t block_size;
		int poll_time_us;
		int user_time_us;
	} cocci_id/* drivers/fpga/altera-cvp.c 87 */;
	struct altera_cvp_conf {
		struct fpga_manager *mgr;
		struct pci_dev *pci_dev;
		void __iomem *map;
		void (*write_data)(struct altera_cvp_conf *conf, u32 data);
		char mgr_name[64];
		u8 numclks;
		u32 sent_packets;
		u32 vsec_offset;
		const struct cvp_priv *priv;
	} cocci_id/* drivers/fpga/altera-cvp.c 74 */;
	struct cvp_priv cocci_id/* drivers/fpga/altera-cvp.c 72 */;
	void __exit cocci_id/* drivers/fpga/altera-cvp.c 711 */;
	bool cocci_id/* drivers/fpga/altera-cvp.c 70 */;
	int __init cocci_id/* drivers/fpga/altera-cvp.c 695 */;
	u16 cocci_id/* drivers/fpga/altera-cvp.c 582 */;
	const struct pci_device_id *cocci_id/* drivers/fpga/altera-cvp.c 577 */;
	struct pci_dev *cocci_id/* drivers/fpga/altera-cvp.c 576 */;
	struct pci_driver cocci_id/* drivers/fpga/altera-cvp.c 569 */;
	struct pci_device_id cocci_id/* drivers/fpga/altera-cvp.c 563 */[];
	void cocci_id/* drivers/fpga/altera-cvp.c 561 */(struct pci_dev *pdev);
	int cocci_id/* drivers/fpga/altera-cvp.c 559 */(struct pci_dev *pdev,
							const struct pci_device_id *dev_id);
	struct device_driver *cocci_id/* drivers/fpga/altera-cvp.c 540 */;
	char *cocci_id/* drivers/fpga/altera-cvp.c 540 */;
	ssize_t cocci_id/* drivers/fpga/altera-cvp.c 540 */;
	const struct cvp_priv cocci_id/* drivers/fpga/altera-cvp.c 525 */;
	const struct fpga_manager_ops cocci_id/* drivers/fpga/altera-cvp.c 518 */;
	u32 *cocci_id/* drivers/fpga/altera-cvp.c 440 */;
	const char *cocci_id/* drivers/fpga/altera-cvp.c 431 */;
	struct fpga_image_info *cocci_id/* drivers/fpga/altera-cvp.c 286 */;
	const u32 *cocci_id/* drivers/fpga/altera-cvp.c 266 */;
	u8 cocci_id/* drivers/fpga/altera-cvp.c 235 */;
	u32 cocci_id/* drivers/fpga/altera-cvp.c 185 */;
	struct altera_cvp_conf *cocci_id/* drivers/fpga/altera-cvp.c 184 */;
	struct fpga_manager *cocci_id/* drivers/fpga/altera-cvp.c 182 */;
	int cocci_id/* drivers/fpga/altera-cvp.c 182 */;
	size_t cocci_id/* drivers/fpga/altera-cvp.c 182 */;
	unsigned int cocci_id/* drivers/fpga/altera-cvp.c 147 */;
	void cocci_id/* drivers/fpga/altera-cvp.c 145 */;
	enum fpga_mgr_states cocci_id/* drivers/fpga/altera-cvp.c 117 */;
}
