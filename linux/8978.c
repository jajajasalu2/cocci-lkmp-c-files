cocci_test_suite() {
	enum{VSC_CTRL_CLAUSE37_VIEW=1 << 4, VSC_CTRL_MEDIA_MODE_HI=0xf000,} cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 63 */;
	enum{VSC_INTR_RX_ERR=1 << 0, VSC_INTR_MS_ERR=1 << 1, VSC_INTR_CABLE=1 << 2, VSC_INTR_FALSE_CARR=1 << 3, VSC_INTR_MEDIA_CHG=1 << 4, VSC_INTR_RX_FIFO=1 << 5, VSC_INTR_TX_FIFO=1 << 6, VSC_INTR_DESCRAMBL=1 << 7, VSC_INTR_SYMBOL_ERR=1 << 8, VSC_INTR_NEG_DONE=1 << 10, VSC_INTR_NEG_ERR=1 << 11, VSC_INTR_DPLX_CHG=1 << 12, VSC_INTR_LINK_CHG=1 << 13, VSC_INTR_SPD_CHG=1 << 14, VSC_INTR_ENABLE=1 << 15,} cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 45 */;
	unsigned int cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 371 */;
	const struct mdio_ops *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 368 */;
	struct cphy *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 367 */;
	struct adapter *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 367 */;
	int cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 367 */;
	const struct cphy_ops cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 353 */;
	enum{VSC8211_SIGDET_CTRL=19, VSC8211_EXT_CTRL=23, VSC8211_INTR_ENABLE=25, VSC8211_INTR_STATUS=26, VSC8211_LED_CTRL=27, VSC8211_AUX_CTRL_STAT=28, VSC8211_EXT_PAGE_AXS=31,} cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 35 */;
	int *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 130 */;
	u32 cocci_id/* drivers/net/ethernet/chelsio/cxgb3/vsc8211.c 110 */;
}
