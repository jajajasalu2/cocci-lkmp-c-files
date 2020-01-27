cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/ata/ahci_tegra.c 574 */;
	struct resource *cocci_id/* drivers/ata/ahci_tegra.c 484 */;
	struct platform_device *cocci_id/* drivers/ata/ahci_tegra.c 480 */;
	struct scsi_host_template cocci_id/* drivers/ata/ahci_tegra.c 476 */;
	const struct of_device_id cocci_id/* drivers/ata/ahci_tegra.c 463 */[];
	const struct tegra_ahci_soc cocci_id/* drivers/ata/ahci_tegra.c 452 */;
	const struct tegra_ahci_ops cocci_id/* drivers/ata/ahci_tegra.c 448 */;
	const char *constcocci_id/* drivers/ata/ahci_tegra.c 444 */[];
	const struct ata_port_info cocci_id/* drivers/ata/ahci_tegra.c 437 */;
	struct ata_port_operations cocci_id/* drivers/ata/ahci_tegra.c 432 */;
	struct ata_host *cocci_id/* drivers/ata/ahci_tegra.c 425 */;
	void cocci_id/* drivers/ata/ahci_tegra.c 420 */;
	u32 cocci_id/* drivers/ata/ahci_tegra.c 194 */;
	struct sata_pad_calibration cocci_id/* drivers/ata/ahci_tegra.c 192 */;
	struct tegra_ahci_priv *cocci_id/* drivers/ata/ahci_tegra.c 191 */;
	struct ahci_host_priv *cocci_id/* drivers/ata/ahci_tegra.c 189 */;
	int cocci_id/* drivers/ata/ahci_tegra.c 189 */;
	struct tegra_ahci_priv {
		struct platform_device *pdev;
		void __iomem *sata_regs;
		void __iomem *sata_aux_regs;
		struct reset_control *sata_rst;
		struct reset_control *sata_oob_rst;
		struct reset_control *sata_cold_rst;
		struct clk *sata_clk;
		struct regulator_bulk_data *supplies;
		const struct tegra_ahci_soc *soc;
	} cocci_id/* drivers/ata/ahci_tegra.c 164 */;
	struct tegra_ahci_soc {
		const char *const*supply_names;
		u32 num_supplies;
		bool supports_devslp;
		const struct tegra_ahci_ops *ops;
	} cocci_id/* drivers/ata/ahci_tegra.c 157 */;
	struct tegra_ahci_ops {
		int (*init)(struct ahci_host_priv *hpriv);
	} cocci_id/* drivers/ata/ahci_tegra.c 153 */;
	const struct sata_pad_calibration cocci_id/* drivers/ata/ahci_tegra.c 146 */[];
	struct sata_pad_calibration {
		u8 gen1_tx_amp;
		u8 gen1_tx_peak;
		u8 gen2_tx_amp;
		u8 gen2_tx_peak;
	} cocci_id/* drivers/ata/ahci_tegra.c 139 */;
}
