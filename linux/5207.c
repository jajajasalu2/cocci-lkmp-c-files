cocci_test_suite() {
	struct ecx_plat_data {
		u32 n_ports;
		u32 pre_clocks;
		u32 post_clocks;
		struct gpio_desc *sgpio_gpiod[SGPIO_PINS];
		u32 sgpio_pattern;
		u32 port_to_sgpio[SGPIO_PORTS];
	} cocci_id/* drivers/ata/sata_highbank.c 71 */;
	struct platform_driver cocci_id/* drivers/ata/sata_highbank.c 620 */;
	struct phy_lane_info cocci_id/* drivers/ata/sata_highbank.c 62 */[CPHY_PORT_COUNT];
	void __iomem *cocci_id/* drivers/ata/sata_highbank.c 572 */;
	struct phy_lane_info {
		void __iomem *phy_base;
		u8 lane_mapping;
		u8 phy_devs;
		u8 tx_atten;
	} cocci_id/* drivers/ata/sata_highbank.c 56 */;
	const struct ata_port_info *cocci_id/* drivers/ata/sata_highbank.c 463 */[];
	struct ata_port_info cocci_id/* drivers/ata/sata_highbank.c 462 */;
	struct resource *cocci_id/* drivers/ata/sata_highbank.c 457 */;
	struct ata_host *cocci_id/* drivers/ata/sata_highbank.c 456 */;
	struct ecx_plat_data *cocci_id/* drivers/ata/sata_highbank.c 455 */;
	struct device *cocci_id/* drivers/ata/sata_highbank.c 453 */;
	struct platform_device *cocci_id/* drivers/ata/sata_highbank.c 451 */;
	const struct of_device_id cocci_id/* drivers/ata/sata_highbank.c 445 */[];
	struct scsi_host_template cocci_id/* drivers/ata/sata_highbank.c 441 */;
	const struct ata_port_info cocci_id/* drivers/ata/sata_highbank.c 434 */;
	struct ata_port_operations cocci_id/* drivers/ata/sata_highbank.c 428 */;
	bool cocci_id/* drivers/ata/sata_highbank.c 394 */;
	struct ata_taskfile cocci_id/* drivers/ata/sata_highbank.c 393 */;
	u8 *cocci_id/* drivers/ata/sata_highbank.c 392 */;
	struct ahci_host_priv *cocci_id/* drivers/ata/sata_highbank.c 391 */;
	struct ahci_port_priv *cocci_id/* drivers/ata/sata_highbank.c 390 */;
	struct ata_port *cocci_id/* drivers/ata/sata_highbank.c 389 */;
	const unsigned long cocci_id/* drivers/ata/sata_highbank.c 388 */[];
	unsigned long cocci_id/* drivers/ata/sata_highbank.c 386 */;
	struct ata_link *cocci_id/* drivers/ata/sata_highbank.c 385 */;
	unsigned int *cocci_id/* drivers/ata/sata_highbank.c 385 */;
	int cocci_id/* drivers/ata/sata_highbank.c 385 */;
	struct of_phandle_args cocci_id/* drivers/ata/sata_highbank.c 338 */;
	struct phy_lane_info cocci_id/* drivers/ata/sata_highbank.c 334 */;
	u32 cocci_id/* drivers/ata/sata_highbank.c 332 */[CPHY_PORT_COUNT];
	struct device_node *cocci_id/* drivers/ata/sata_highbank.c 331 */[CPHY_PHY_COUNT];
	void __iomem *cocci_id/* drivers/ata/sata_highbank.c 330 */[CPHY_PHY_COUNT];
	struct device_node *cocci_id/* drivers/ata/sata_highbank.c 328 */;
	void cocci_id/* drivers/ata/sata_highbank.c 225 */;
	u8 cocci_id/* drivers/ata/sata_highbank.c 214 */;
	u32 cocci_id/* drivers/ata/sata_highbank.c 214 */;
	struct gpio_desc *cocci_id/* drivers/ata/sata_highbank.c 186 */;
	struct ata_port_info *cocci_id/* drivers/ata/sata_highbank.c 179 */;
	struct ahci_em_priv *cocci_id/* drivers/ata/sata_highbank.c 136 */;
	ssize_t cocci_id/* drivers/ata/sata_highbank.c 128 */;
}