cocci_test_suite() {
	int __init cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 825 */;
	struct platform_driver cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 818 */;
	struct brcmstb_pm_control {
		void __iomem *aon_ctrl_base;
		void __iomem *aon_sram;
		struct brcmstb_memc memcs[MAX_NUM_MEMC];
		void __iomem *boot_sram;
		size_t boot_sram_len;
		bool support_warm_boot;
		size_t pll_status_offset;
		int num_memc;
		struct brcmstb_s3_params *s3_params;
		dma_addr_t s3_params_pa;
		int s3entry_method;
		u32 warm_boot_offset;
		u32 phy_a_standby_ctrl_offs;
		u32 phy_b_standby_ctrl_offs;
		bool needs_ddr_pad;
		struct platform_device *pdev;
	} cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 79 */;
	struct brcmstb_memc {
		void __iomem *ddr_phy_base;
		void __iomem *ddr_shimphy_base;
		void __iomem *ddr_ctrl;
	} cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 73 */;
	const struct ddr_seq_ofdata *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 680 */;
	const struct ddr_phy_ofdata *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 679 */;
	struct platform_device *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 677 */;
	struct notifier_block cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 673 */;
	struct notifier_block *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 665 */;
	const void **cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 650 */;
	const struct of_device_id *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 649 */;
	const struct ddr_seq_ofdata cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 612 */;
	struct ddr_seq_ofdata {
		bool needs_ddr_pad;
		u32 warm_boot_offset;
	} cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 602 */;
	struct ddr_phy_ofdata cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 565 */;
	struct ddr_phy_ofdata {
		bool supports_warm_boot;
		size_t pll_status_offset;
		int s3entry_method;
		u32 warm_boot_offset;
		u32 phy_a_standby_ctrl_offs;
		u32 phy_b_standby_ctrl_offs;
	} cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 538 */;
	const struct of_device_id cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 533 */[];
	const struct platform_suspend_ops cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 528 */;
	suspend_state_t cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 500 */;
	enum bsp_initiate_command cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 400 */;
	phys_addr_t cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 399 */;
	dma_addr_t cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 398 */;
	struct brcmstb_s3_params *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 397 */;
	unsigned int cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 356 */;
	void *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 354 */;
	size_t cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 354 */;
	void __iomem *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 312 */;
	bool cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 310 */;
	unsigned long cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 310 */;
	void cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 310 */;
	u32 cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 183 */;
	struct resource cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 120 */;
	struct device_node *cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 117 */;
	int cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 117 */;
	int (*cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 114 */)(void __iomem *aon_ctrl_base,
								     void __iomem *ddr_phy_pll_status);
	struct brcmstb_pm_control cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 112 */;
	enum bsp_initiate_command{BSP_CLOCK_STOP=0x00, BSP_GEN_RANDOM_KEY=0x4A, BSP_RESTORE_RANDOM_KEY=0x55, BSP_GEN_FIXED_KEY=0x63,} cocci_id/* drivers/soc/bcm/brcmstb/pm/pm-arm.c 101 */;
}
