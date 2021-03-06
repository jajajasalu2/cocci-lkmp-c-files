cocci_test_suite() {
	u64 cocci_id/* drivers/pci/controller/pci-tegra.c 891 */;
	const char *cocci_id/* drivers/pci/controller/pci-tegra.c 848 */[];
	irqreturn_t cocci_id/* drivers/pci/controller/pci-tegra.c 846 */;
	void *cocci_id/* drivers/pci/controller/pci-tegra.c 846 */;
	const struct pci_dev *cocci_id/* drivers/pci/controller/pci-tegra.c 832 */;
	struct list_head *cocci_id/* drivers/pci/controller/pci-tegra.c 826 */;
	struct pci_host_bridge *cocci_id/* drivers/pci/controller/pci-tegra.c 825 */;
	struct tegra_pcie_port *cocci_id/* drivers/pci/controller/pci-tegra.c 655 */;
	struct pci_ops cocci_id/* drivers/pci/controller/pci-tegra.c 516 */;
	u32 *cocci_id/* drivers/pci/controller/pci-tegra.c 497 */;
	struct pci_bus *cocci_id/* drivers/pci/controller/pci-tegra.c 496 */;
	void __iomem *cocci_id/* drivers/pci/controller/pci-tegra.c 462 */;
	u8 cocci_id/* drivers/pci/controller/pci-tegra.c 455 */;
	u32 cocci_id/* drivers/pci/controller/pci-tegra.c 418 */;
	struct tegra_pcie *cocci_id/* drivers/pci/controller/pci-tegra.c 418 */;
	unsigned long cocci_id/* drivers/pci/controller/pci-tegra.c 418 */;
	void cocci_id/* drivers/pci/controller/pci-tegra.c 412 */;
	struct tegra_pcie_bus {
		struct list_head list;
		unsigned int nr;
	} cocci_id/* drivers/pci/controller/pci-tegra.c 407 */;
	struct tegra_pcie_port {
		struct tegra_pcie *pcie;
		struct device_node *np;
		struct list_head list;
		struct resource regs;
		void __iomem *base;
		unsigned int index;
		unsigned int lanes;
		struct phy **phys;
		struct gpio_desc *reset_gpio;
	} cocci_id/* drivers/pci/controller/pci-tegra.c 393 */;
	struct tegra_pcie {
		struct device *dev;
		void __iomem *pads;
		void __iomem *afi;
		void __iomem *cfg;
		int irq;
		struct resource cs;
		struct resource io;
		struct resource pio;
		struct resource mem;
		struct resource prefetch;
		struct resource busn;
		struct {
			resource_size_t mem;
			resource_size_t io;
		} offset;
		struct clk *pex_clk;
		struct clk *afi_clk;
		struct clk *pll_e;
		struct clk *cml_clk;
		struct reset_control *pex_rst;
		struct reset_control *afi_rst;
		struct reset_control *pcie_xrst;
		bool legacy_phy;
		struct phy *phy;
		struct tegra_msi msi;
		struct list_head ports;
		u32 xbar_config;
		struct regulator_bulk_data *supplies;
		unsigned int num_supplies;
		const struct tegra_pcie_soc *soc;
		struct dentry *debugfs;
	} cocci_id/* drivers/pci/controller/pci-tegra.c 349 */;
	struct tegra_msi cocci_id/* drivers/pci/controller/pci-tegra.c 346 */;
	struct tegra_pcie_soc {
		unsigned int num_ports;
		const struct tegra_pcie_port_soc *ports;
		unsigned int msi_base_shift;
		unsigned long afi_pex2_ctrl;
		u32 pads_pll_ctl;
		u32 tx_ref_sel;
		u32 pads_refclk_cfg0;
		u32 pads_refclk_cfg1;
		u32 update_fc_threshold;
		bool has_pex_clkreq_en;
		bool has_pex_bias_ctrl;
		bool has_intr_prsnt_sense;
		bool has_cml_clk;
		bool has_gen2;
		bool force_pca_enable;
		bool program_uphy;
		bool update_clamp_threshold;
		bool program_deskew_time;
		bool raw_violation_fixup;
		bool update_fc_timer;
		bool has_cache_bars;
		struct {
			struct {
				u32 rp_ectl_2_r1;
				u32 rp_ectl_4_r1;
				u32 rp_ectl_5_r1;
				u32 rp_ectl_6_r1;
				u32 rp_ectl_2_r2;
				u32 rp_ectl_4_r2;
				u32 rp_ectl_5_r2;
				u32 rp_ectl_6_r2;
			} regs;
			bool enable;
		} ectl;
	} cocci_id/* drivers/pci/controller/pci-tegra.c 307 */;
	struct tegra_pcie_port_soc {
		struct {
			u8 turnoff_bit;
			u8 ack_bit;
		} pme;
	} cocci_id/* drivers/pci/controller/pci-tegra.c 300 */;
	struct platform_driver cocci_id/* drivers/pci/controller/pci-tegra.c 2972 */;
	int __maybe_unused cocci_id/* drivers/pci/controller/pci-tegra.c 2911 */;
	struct tegra_msi {
		struct msi_controller chip;
	DECLARE_BITMAP(used,INT_PCI_MSI_NR)
		;
		struct irq_domain *domain;
		struct mutex lock;
		void *virt;
		dma_addr_t phys;
		int irq;
	} cocci_id/* drivers/pci/controller/pci-tegra.c 289 */;
	struct dentry *cocci_id/* drivers/pci/controller/pci-tegra.c 2745 */;
	const struct file_operations cocci_id/* drivers/pci/controller/pci-tegra.c 2729 */;
	struct seq_file *cocci_id/* drivers/pci/controller/pci-tegra.c 2716 */;
	struct inode *cocci_id/* drivers/pci/controller/pci-tegra.c 2713 */;
	struct file *cocci_id/* drivers/pci/controller/pci-tegra.c 2713 */;
	const struct seq_operations cocci_id/* drivers/pci/controller/pci-tegra.c 2706 */;
	struct tegra_pcie_port cocci_id/* drivers/pci/controller/pci-tegra.c 2678 */;
	loff_t *cocci_id/* drivers/pci/controller/pci-tegra.c 2661 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/pci-tegra.c 2640 */[];
	const struct tegra_pcie_port_soc cocci_id/* drivers/pci/controller/pci-tegra.c 2610 */[];
	const struct tegra_pcie_soc cocci_id/* drivers/pci/controller/pci-tegra.c 2550 */;
	ktime_t cocci_id/* drivers/pci/controller/pci-tegra.c 2400 */;
	struct resource cocci_id/* drivers/pci/controller/pci-tegra.c 2164 */;
	struct of_pci_range cocci_id/* drivers/pci/controller/pci-tegra.c 2161 */;
	struct of_pci_range_parser cocci_id/* drivers/pci/controller/pci-tegra.c 2160 */;
	char cocci_id/* drivers/pci/controller/pci-tegra.c 1978 */[32];
	struct regulator_bulk_data *cocci_id/* drivers/pci/controller/pci-tegra.c 1975 */;
	bool cocci_id/* drivers/pci/controller/pci-tegra.c 1974 */;
	const struct irq_domain_ops cocci_id/* drivers/pci/controller/pci-tegra.c 1744 */;
	irq_hw_number_t cocci_id/* drivers/pci/controller/pci-tegra.c 1734 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/pci-tegra.c 1733 */;
	struct irq_chip cocci_id/* drivers/pci/controller/pci-tegra.c 1725 */;
	struct irq_data *cocci_id/* drivers/pci/controller/pci-tegra.c 1718 */;
	struct msi_msg cocci_id/* drivers/pci/controller/pci-tegra.c 1689 */;
	struct pci_dev *cocci_id/* drivers/pci/controller/pci-tegra.c 1686 */;
	struct msi_desc *cocci_id/* drivers/pci/controller/pci-tegra.c 1686 */;
	struct msi_controller *cocci_id/* drivers/pci/controller/pci-tegra.c 1685 */;
	struct tegra_msi *cocci_id/* drivers/pci/controller/pci-tegra.c 1612 */;
	int cocci_id/* drivers/pci/controller/pci-tegra.c 1612 */;
	struct resource *cocci_id/* drivers/pci/controller/pci-tegra.c 1494 */;
	struct platform_device *cocci_id/* drivers/pci/controller/pci-tegra.c 1493 */;
	char *cocci_id/* drivers/pci/controller/pci-tegra.c 1400 */;
	unsigned int cocci_id/* drivers/pci/controller/pci-tegra.c 1397 */;
	const char *cocci_id/* drivers/pci/controller/pci-tegra.c 1396 */;
	struct device_node *cocci_id/* drivers/pci/controller/pci-tegra.c 1395 */;
	struct phy *cocci_id/* drivers/pci/controller/pci-tegra.c 1394 */;
	struct device *cocci_id/* drivers/pci/controller/pci-tegra.c 1394 */;
	const struct tegra_pcie_soc *cocci_id/* drivers/pci/controller/pci-tegra.c 1317 */;
}
