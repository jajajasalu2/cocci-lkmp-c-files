cocci_test_suite() {
	enum{IMASK_PMA=1 << 2, IMASK_GLOBAL=1 << 15, ADV_1G_FULL=1 << 15, ADV_1G_HALF=1 << 14, ADV_10G_FULL=1 << 12, AQ_RESET=(1 << 14) | (1 << 15), AQ_LOWPOWER=1 << 12,} cocci_id/* drivers/net/ethernet/chelsio/cxgb3/aq100x.c 55 */;
	enum{AQ_LINK_STAT=0xe800, AQ_IMASK_PMA=0xf000, AQ_XAUI_RX_CFG=0xc400, AQ_XAUI_TX_CFG=0xe400, AQ_1G_CTRL=0xc400, AQ_ANEG_STAT=0xc800, AQ_FW_VERSION=0x0020, AQ_IFLAG_GLOBAL=0xfc00, AQ_IMASK_GLOBAL=0xff00,} cocci_id/* drivers/net/ethernet/chelsio/cxgb3/aq100x.c 36 */;
	const struct mdio_ops *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/aq100x.c 267 */;
	struct adapter *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/aq100x.c 266 */;
	const struct cphy_ops cocci_id/* drivers/net/ethernet/chelsio/cxgb3/aq100x.c 250 */;
	int *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/aq100x.c 207 */;
	struct cphy *cocci_id/* drivers/net/ethernet/chelsio/cxgb3/aq100x.c 153 */;
	unsigned int cocci_id/* drivers/net/ethernet/chelsio/cxgb3/aq100x.c 153 */;
	int cocci_id/* drivers/net/ethernet/chelsio/cxgb3/aq100x.c 153 */;
}
