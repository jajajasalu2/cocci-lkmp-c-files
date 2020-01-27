cocci_test_suite() {
	struct resource cocci_id/* drivers/phy/st/phy-miphy28lp.c 871 */;
	void __iomem **cocci_id/* drivers/phy/st/phy-miphy28lp.c 869 */;
	char *cocci_id/* drivers/phy/st/phy-miphy28lp.c 868 */;
	struct device *cocci_id/* drivers/phy/st/phy-miphy28lp.c 867 */;
	struct resource *cocci_id/* drivers/phy/st/phy-miphy28lp.c 856 */;
	u8 cocci_id/* drivers/phy/st/phy-miphy28lp.c 535 */;
	void __iomem *cocci_id/* drivers/phy/st/phy-miphy28lp.c 534 */;
	struct miphy28lp_phy *cocci_id/* drivers/phy/st/phy-miphy28lp.c 532 */;
	void cocci_id/* drivers/phy/st/phy-miphy28lp.c 532 */;
	struct pll_ratio *cocci_id/* drivers/phy/st/phy-miphy28lp.c 504 */;
	int cocci_id/* drivers/phy/st/phy-miphy28lp.c 503 */;
	unsigned long cocci_id/* drivers/phy/st/phy-miphy28lp.c 487 */;
	struct miphy28lp_pll_gen *cocci_id/* drivers/phy/st/phy-miphy28lp.c 462 */;
	struct miphy28lp_pll_gen cocci_id/* drivers/phy/st/phy-miphy28lp.c 333 */[];
	struct miphy28lp_pll_gen {
		int bank;
		int speed;
		int bias_boost_1;
		int bias_boost_2;
		int tx_ctrl_1;
		int tx_ctrl_2;
		int tx_ctrl_3;
		int rx_k_gain;
		int rx_vga_gain;
		int rx_equ_gain_1;
		int rx_equ_gain_2;
		int rx_equ_gain_3;
		int rx_buff_ctrl;
	} cocci_id/* drivers/phy/st/phy-miphy28lp.c 275 */;
	struct pll_ratio cocci_id/* drivers/phy/st/phy-miphy28lp.c 257 */;
	struct pll_ratio {
		int clk_ref;
		int calset_1;
		int calset_2;
		int calset_3;
		int calset_4;
		int cal_ctrl;
	} cocci_id/* drivers/phy/st/phy-miphy28lp.c 239 */;
	char *cocci_id/* drivers/phy/st/phy-miphy28lp.c 237 */[];
	enum miphy_sata_gen{SATA_GEN1, SATA_GEN2, SATA_GEN3,} cocci_id/* drivers/phy/st/phy-miphy28lp.c 235 */;
	struct miphy_initval {
		u16 reg;
		u16 val;
	} cocci_id/* drivers/phy/st/phy-miphy28lp.c 230 */;
	struct miphy28lp_dev {
		struct device *dev;
		struct regmap *regmap;
		struct mutex miphy_mutex;
		struct miphy28lp_phy **phys;
		int nphys;
	} cocci_id/* drivers/phy/st/phy-miphy28lp.c 222 */;
	struct miphy28lp_phy {
		struct phy *phy;
		struct miphy28lp_dev *phydev;
		void __iomem *base;
		void __iomem *pipebase;
		bool osc_force_ext;
		bool osc_rdy;
		bool px_rx_pol_inv;
		bool ssc;
		bool tx_impedance;
		struct reset_control *miphy_rst;
		u32 sata_gen;
		u32 syscfg_reg[SYSCFG_REG_MAX];
		u8 type;
	} cocci_id/* drivers/phy/st/phy-miphy28lp.c 201 */;
	enum{SYSCFG_CTRL, SYSCFG_STATUS, SYSCFG_PCI, SYSCFG_SATA, SYSCFG_REG_MAX,} cocci_id/* drivers/phy/st/phy-miphy28lp.c 193 */;
	struct platform_driver cocci_id/* drivers/phy/st/phy-miphy28lp.c 1270 */;
	const struct of_device_id cocci_id/* drivers/phy/st/phy-miphy28lp.c 1263 */[];
	struct phy_provider *cocci_id/* drivers/phy/st/phy-miphy28lp.c 1195 */;
	struct platform_device *cocci_id/* drivers/phy/st/phy-miphy28lp.c 1191 */;
	u32 cocci_id/* drivers/phy/st/phy-miphy28lp.c 1164 */;
	const struct phy_ops cocci_id/* drivers/phy/st/phy-miphy28lp.c 1131 */;
	struct of_phandle_args *cocci_id/* drivers/phy/st/phy-miphy28lp.c 1099 */;
	struct device_node *cocci_id/* drivers/phy/st/phy-miphy28lp.c 1072 */;
	struct miphy28lp_dev *cocci_id/* drivers/phy/st/phy-miphy28lp.c 1071 */;
	struct phy *cocci_id/* drivers/phy/st/phy-miphy28lp.c 1040 */;
}
