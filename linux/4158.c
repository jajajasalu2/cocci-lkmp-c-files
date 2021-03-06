cocci_test_suite() {
	struct qmp_phy_cfg {
		unsigned int type;
		int nlanes;
		const struct qmp_phy_init_tbl *serdes_tbl;
		int serdes_tbl_num;
		const struct qmp_phy_init_tbl *tx_tbl;
		int tx_tbl_num;
		const struct qmp_phy_init_tbl *rx_tbl;
		int rx_tbl_num;
		const struct qmp_phy_init_tbl *pcs_tbl;
		int pcs_tbl_num;
		const char *const*clk_list;
		int num_clks;
		const char *const*reset_list;
		int num_resets;
		const char *const*vreg_list;
		int num_vregs;
		const unsigned int *regs;
		unsigned int start_ctrl;
		unsigned int pwrdn_ctrl;
		unsigned int mask_com_pcs_ready;
		bool has_phy_com_ctrl;
		bool has_lane_rst;
		bool has_pwrdn_delay;
		int pwrdn_delay_min;
		int pwrdn_delay_max;
		bool has_phy_dp_com_ctrl;
		bool is_dual_lane_phy;
		bool no_pcs_sw_reset;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 976 */;
	struct qmp_phy_init_tbl {
		unsigned int offset;
		unsigned int val;
		int in_layout;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 78 */;
	const struct qmp_phy_init_tbl cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 467 */[];
	struct platform_driver cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 2245 */;
	struct phy_provider *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 2137 */;
	struct resource *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 2135 */;
	struct platform_device *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 2131 */;
	const struct dev_pm_ops cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 2126 */;
	const struct of_device_id cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 2090 */[];
	char cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1985 */[MAX_PROP_NAME];
	const struct phy_ops *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1984 */;
	struct phy *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1982 */;
	const struct phy_ops cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1964 */;
	struct clk_init_data cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1920 */;
	struct clk_fixed_rate *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1919 */;
	struct qcom_qmp *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1917 */;
	struct device_node *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1917 */;
	int cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1917 */;
	void *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1894 */;
	void cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1894 */;
	struct device *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1878 */;
	const char *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1865 */;
	struct reset_control *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1864 */;
	int __maybe_unused cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1801 */;
	u32 cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1733 */;
	enum phy_mode cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1717 */;
	void __iomem *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1528 */;
	const struct qmp_phy_cfg *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1527 */;
	unsigned int cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1490 */;
	struct qmp_phy *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1415 */;
	const struct qmp_phy_init_tbl *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1402 */;
	const unsigned int *cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1397 */;
	const unsigned int cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 124 */[];
	const struct qmp_phy_cfg cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1207 */;
	const char *constcocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1203 */[];
	struct qcom_qmp {
		struct device *dev;
		void __iomem *serdes;
		void __iomem *dp_com;
		struct clk_bulk_data *clks;
		struct reset_control **resets;
		struct regulator_bulk_data *vregs;
		const struct qmp_phy_cfg *cfg;
		struct qmp_phy **phys;
		struct mutex phy_mutex;
		int init_count;
		bool phy_initialized;
		enum phy_mode mode;
		struct reset_control *ufs_reset;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1076 */;
	struct qmp_phy {
		struct phy *phy;
		void __iomem *tx;
		void __iomem *rx;
		void __iomem *pcs;
		void __iomem *tx2;
		void __iomem *rx2;
		void __iomem *pcs_misc;
		struct clk *pipe_clk;
		unsigned int index;
		struct qcom_qmp *qmp;
		struct reset_control *lane_rst;
	} cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 1043 */;
	enum qphy_reg_layout{QPHY_COM_SW_RESET, QPHY_COM_POWER_DOWN_CONTROL, QPHY_COM_START_CONTROL, QPHY_COM_PCS_READY_STATUS, QPHY_PLL_LOCK_CHK_DLY_TIME, QPHY_FLL_CNTRL1, QPHY_FLL_CNTRL2, QPHY_FLL_CNT_VAL_L, QPHY_FLL_CNT_VAL_H_TOL, QPHY_FLL_MAN_CODE, QPHY_SW_RESET, QPHY_START_CTRL, QPHY_PCS_READY_STATUS, QPHY_PCS_STATUS, QPHY_PCS_AUTONOMOUS_MODE_CTRL, QPHY_PCS_LFPS_RXTERM_IRQ_CLEAR, QPHY_PCS_LFPS_RXTERM_IRQ_STATUS,} cocci_id/* drivers/phy/qualcomm/phy-qcom-qmp.c 102 */;
}
