cocci_test_suite() {
	struct sja1105_cgu_idiv *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 90 */;
	struct sja1105_cgu_mii_ctrl {
		u64 clksrc;
		u64 autoblock;
		u64 pd;
	} cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 84 */;
	sja1105_phy_interface_t cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 642 */;
	struct sja1105_xmii_params_entry *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 640 */;
	enum{CLKSRC_MII0_TX_CLK=0x00, CLKSRC_MII0_RX_CLK=0x01, CLKSRC_MII1_TX_CLK=0x02, CLKSRC_MII1_RX_CLK=0x03, CLKSRC_MII2_TX_CLK=0x04, CLKSRC_MII2_RX_CLK=0x05, CLKSRC_MII3_TX_CLK=0x06, CLKSRC_MII3_RX_CLK=0x07, CLKSRC_MII4_TX_CLK=0x08, CLKSRC_MII4_RX_CLK=0x09, CLKSRC_PLL0=0x0B, CLKSRC_PLL1=0x0E, CLKSRC_IDIV0=0x11, CLKSRC_IDIV1=0x12, CLKSRC_IDIV2=0x13, CLKSRC_IDIV3=0x14, CLKSRC_IDIV4=0x15,} cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 60 */;
	struct sja1105_cgu_pll_ctrl cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 566 */;
	struct sja1105_cgu_pll_ctrl {
		u64 pllclksrc;
		u64 msel;
		u64 autoblock;
		u64 psel;
		u64 direct;
		u64 fbsel;
		u64 bypass;
		u64 pd;
	} cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 49 */;
	struct sja1105_mac_config_entry *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 462 */;
	struct sja1105_cfg_pad_mii_id cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 422 */;
	const struct sja1105_private *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 420 */;
	const void *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 418 */;
	u64 cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 401 */;
	const int cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 388 */;
	enum packing_op cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 386 */;
	struct sja1105_cfg_pad_mii_id *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 385 */;
	void *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 385 */;
	void cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 384 */;
	struct sja1105_cgu_idiv {
		u64 clksrc;
		u64 autoblock;
		u64 idiv;
		u64 pd;
	} cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 37 */;
	struct sja1105_cfg_pad_mii_tx cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 361 */;
	struct sja1105_cfg_pad_mii_tx *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 341 */;
	int cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 322 */[];
	sja1105_speed_t cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 312 */;
	struct sja1105_cgu_pll_ctrl *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 296 */;
	const int cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 227 */[];
	struct sja1105_cgu_mii_ctrl cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 225 */;
	struct sja1105_cfg_pad_mii_id {
		u64 rxc_stable_ovr;
		u64 rxc_delay;
		u64 rxc_bypass;
		u64 rxc_pd;
		u64 txc_stable_ovr;
		u64 txc_delay;
		u64 txc_bypass;
		u64 txc_pd;
	} cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 22 */;
	sja1105_mii_role_t cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 137 */;
	struct sja1105_cgu_mii_ctrl *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 126 */;
	u8 cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 107 */[SJA1105_SIZE_CGU_CMD];
	struct sja1105_cgu_idiv cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 106 */;
	struct device *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 105 */;
	const struct sja1105_regs *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 104 */;
	bool cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 102 */;
	struct sja1105_private *cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 101 */;
	int cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 101 */;
	struct sja1105_cfg_pad_mii_tx {
		u64 d32_os;
		u64 d32_ipud;
		u64 d10_os;
		u64 d10_ipud;
		u64 ctrl_os;
		u64 ctrl_ipud;
		u64 clk_os;
		u64 clk_ih;
		u64 clk_ipud;
	} cocci_id/* drivers/net/dsa/sja1105/sja1105_clocking.c 10 */;
}
