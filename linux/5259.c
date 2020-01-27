cocci_test_suite() {
	struct brcm_ahci_priv {
		struct device *dev;
		void __iomem *top_ctrl;
		u32 port_mask;
		u32 quirks;
		enum brcm_ahci_version version;
		struct reset_control *rcdev;
	} cocci_id/* drivers/ata/ahci_brcm.c 82 */;
	enum brcm_ahci_quirks{BRCM_AHCI_QUIRK_SKIP_PHY_ENABLE=BIT(0),} cocci_id/* drivers/ata/ahci_brcm.c 78 */;
	enum brcm_ahci_version{BRCM_SATA_BCM7425=1, BRCM_SATA_BCM7445, BRCM_SATA_NSP,} cocci_id/* drivers/ata/ahci_brcm.c 72 */;
	struct platform_driver cocci_id/* drivers/ata/ahci_brcm.c 526 */;
	enum brcm_ahci_version cocci_id/* drivers/ata/ahci_brcm.c 428 */;
	struct resource *cocci_id/* drivers/ata/ahci_brcm.c 417 */;
	struct device *cocci_id/* drivers/ata/ahci_brcm.c 414 */;
	const struct of_device_id *cocci_id/* drivers/ata/ahci_brcm.c 413 */;
	struct platform_device *cocci_id/* drivers/ata/ahci_brcm.c 411 */;
	int cocci_id/* drivers/ata/ahci_brcm.c 411 */;
	void *cocci_id/* drivers/ata/ahci_brcm.c 403 */;
	const struct of_device_id cocci_id/* drivers/ata/ahci_brcm.c 402 */[];
	struct scsi_host_template cocci_id/* drivers/ata/ahci_brcm.c 398 */;
	const struct ata_port_info cocci_id/* drivers/ata/ahci_brcm.c 332 */;
	struct ata_port_operations cocci_id/* drivers/ata/ahci_brcm.c 326 */;
	struct ata_host *cocci_id/* drivers/ata/ahci_brcm.c 319 */;
	void cocci_id/* drivers/ata/ahci_brcm.c 319 */;
	unsigned long cocci_id/* drivers/ata/ahci_brcm.c 255 */;
	void __iomem *cocci_id/* drivers/ata/ahci_brcm.c 253 */;
	struct ata_port *cocci_id/* drivers/ata/ahci_brcm.c 249 */;
	u16 *cocci_id/* drivers/ata/ahci_brcm.c 247 */;
	struct ata_taskfile *cocci_id/* drivers/ata/ahci_brcm.c 247 */;
	struct ata_device *cocci_id/* drivers/ata/ahci_brcm.c 246 */;
	unsigned int cocci_id/* drivers/ata/ahci_brcm.c 246 */;
	struct brcm_ahci_priv *cocci_id/* drivers/ata/ahci_brcm.c 216 */;
	u32 cocci_id/* drivers/ata/ahci_brcm.c 215 */;
	struct ahci_host_priv *cocci_id/* drivers/ata/ahci_brcm.c 215 */;
}
