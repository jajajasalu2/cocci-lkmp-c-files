cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 918 */;
	struct qusb2_phy_init_tbl {
		unsigned int offset;
		unsigned int val;
		int in_layout;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 88 */;
	u8 cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 867 */;
	struct resource *cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 795 */;
	struct phy_provider *cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 793 */;
	struct device *cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 791 */;
	struct platform_device *cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 789 */;
	const struct dev_pm_ops cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 784 */;
	const struct of_device_id cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 769 */[];
	const struct phy_ops cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 762 */;
	struct qusb2_phy *cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 741 */;
	struct phy *cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 739 */;
	unsigned int cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 597 */;
	const struct qusb2_phy_cfg *cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 596 */;
	int __maybe_unused cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 541 */;
	enum phy_mode cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 466 */;
	u8 *cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 435 */;
	int cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 378 */;
	const unsigned int *cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 377 */;
	void __iomem *cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 376 */;
	void cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 376 */;
	u32 cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 363 */;
	struct qusb2_phy {
		struct phy *phy;
		void __iomem *base;
		struct clk *cfg_ahb_clk;
		struct clk *ref_clk;
		struct clk *iface_clk;
		struct reset_control *phy_reset;
		struct regulator_bulk_data vregs[QUSB2_NUM_VREGS];
		struct regmap *tcsr;
		struct nvmem_cell *cell;
		bool override_imp_res_offset;
		u8 imp_res_offset_value;
		bool override_hstx_trim;
		u8 hstx_trim_value;
		bool override_preemphasis;
		u8 preemphasis_level;
		bool override_preemphasis_width;
		u8 preemphasis_width;
		const struct qusb2_phy_cfg *cfg;
		bool has_se_clk_scheme;
		bool phy_initialized;
		enum phy_mode mode;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 309 */;
	const char *constcocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 274 */[];
	const struct qusb2_phy_cfg cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 238 */;
	struct qusb2_phy_cfg {
		const struct qusb2_phy_init_tbl *tbl;
		unsigned int tbl_num;
		unsigned int clk_scheme_offset;
		const unsigned int *regs;
		unsigned int mask_core_ready;
		unsigned int disable_ctrl;
		unsigned int autoresume_en;
		bool has_pll_test;
		bool update_tune1_with_efuse;
		bool has_pll_override;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 215 */;
	const struct qusb2_phy_init_tbl cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 139 */[];
	const unsigned int cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 126 */[];
	enum qusb2phy_reg_layout{QUSB2PHY_PLL_CORE_INPUT_OVERRIDE, QUSB2PHY_PLL_STATUS, QUSB2PHY_PORT_TUNE1, QUSB2PHY_PORT_TUNE2, QUSB2PHY_PORT_TUNE3, QUSB2PHY_PORT_TUNE4, QUSB2PHY_PORT_TUNE5, QUSB2PHY_PORT_TEST1, QUSB2PHY_PORT_TEST2, QUSB2PHY_PORT_POWERDOWN, QUSB2PHY_INTR_CTRL,} cocci_id/* drivers/phy/qualcomm/phy-qcom-qusb2.c 112 */;
}
