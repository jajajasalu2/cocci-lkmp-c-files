cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 610 */;
	struct plat_stmmacenet_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 61 */;
	void cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 61 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 597 */[];
	struct device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 563 */;
	int __maybe_unused cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 563 */;
	struct stmmac_priv *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 527 */;
	struct net_device *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 526 */;
	struct stmmac_resources cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 464 */;
	struct stmmac_pci_info *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 462 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 460 */;
	size_t cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 45 */;
	const struct stmmac_pci_dmi_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 42 */;
	const struct stmmac_pci_func_data *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 41 */;
	const struct dmi_system_id *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 39 */;
	const struct stmmac_pci_info cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 374 */;
	struct stmmac_pci_info {
		int (*setup)(struct pci_dev *pdev,
			     struct plat_stmmacenet_data *plat);
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 34 */;
	void *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 305 */;
	const struct dmi_system_id cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 300 */[];
	struct stmmac_pci_dmi_data {
		const struct stmmac_pci_func_data *func;
		size_t nfuncs;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 29 */;
	const struct stmmac_pci_dmi_data cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 279 */;
	const struct stmmac_pci_func_data cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 272 */[];
	struct stmmac_pci_info cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 240 */;
	struct stmmac_pci_func_data {
		unsigned int func;
		int phy_addr;
	} cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 24 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 203 */;
	int cocci_id/* drivers/net/ethernet/stmicro/stmmac/stmmac_pci.c 203 */;
}
