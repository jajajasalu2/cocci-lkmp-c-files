cocci_test_suite() {
	const struct reg_val *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 84 */;
	u8 cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 780 */;
	struct reg_val {
		unsigned short mmd_addr;
		unsigned short reg_addr;
		unsigned short clear_bits;
		unsigned short set_bits;
	} cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 77 */;
	enum{phy_transtype_unknown=0, phy_transtype_sfp=3, phy_transtype_xfp=6,} cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 69 */;
	enum{MODULE_DEV_ADDR=0xa0, SFF_DEV_ADDR=0xa2,} cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 63 */;
	enum{edc_none, edc_sr, edc_twinax,} cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 60 */;
	const struct reg_val cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 396 */[];
	unsigned int cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 364 */;
	enum{AEL100X_TX_CONFIG1=0xc002, AEL1002_PWR_DOWN_HI=0xc011, AEL1002_PWR_DOWN_LO=0xc012, AEL1002_XFI_EQL=0xc015, AEL1002_LB_EN=0xc017, AEL_OPT_SETTINGS=0xc017, AEL_I2C_CTRL=0xc30a, AEL_I2C_DATA=0xc30b, AEL_I2C_STAT=0xc30c, AEL2005_GPIO_CTRL=0xc214, AEL2005_GPIO_STAT=0xc215, AEL2020_GPIO_INTR=0xc103, AEL2020_GPIO_CTRL=0xc108, AEL2020_GPIO_STAT=0xc10c, AEL2020_GPIO_CFG=0xc110, AEL2020_GPIO_SDA=0, AEL2020_GPIO_MODDET=1, AEL2020_GPIO_0=3, AEL2020_GPIO_1=2, AEL2020_GPIO_LSTAT=AEL2020_GPIO_1,} cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 35 */;
	const struct mdio_ops *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 213 */;
	struct adapter *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 212 */;
	const struct cphy_ops cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 201 */;
	int *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 176 */;
	struct cphy *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 168 */;
	int cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 168 */;
	void cocci_id/* drivers/net/ethernet/chelsio/cxgb3/ael1002.c 100 */;
}
