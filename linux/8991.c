cocci_test_suite() {
	u32 *cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 94 */;
	struct _cmac_instance {
		u8 enabled;
		u8 fc;
		u8 mac_addr[6];
	} cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 88 */;
	const struct gmac cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 785 */;
	enum{RxOctetsReceivedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_1_LOW, RxUnicastFramesReceivedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_4_LOW, RxMulticastFramesReceivedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_5_LOW, RxBroadcastFramesReceivedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_6_LOW, RxPAUSEMACCtrlFramesReceived=SUNI1x10GEXP_REG_MSTAT_COUNTER_8_LOW, RxFrameCheckSequenceErrors=SUNI1x10GEXP_REG_MSTAT_COUNTER_10_LOW, RxFramesLostDueToInternalMACErrors=SUNI1x10GEXP_REG_MSTAT_COUNTER_11_LOW, RxSymbolErrors=SUNI1x10GEXP_REG_MSTAT_COUNTER_12_LOW, RxInRangeLengthErrors=SUNI1x10GEXP_REG_MSTAT_COUNTER_13_LOW, RxFramesTooLongErrors=SUNI1x10GEXP_REG_MSTAT_COUNTER_15_LOW, RxJabbers=SUNI1x10GEXP_REG_MSTAT_COUNTER_16_LOW, RxFragments=SUNI1x10GEXP_REG_MSTAT_COUNTER_17_LOW, RxUndersizedFrames=SUNI1x10GEXP_REG_MSTAT_COUNTER_18_LOW, RxJumboFramesReceivedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_25_LOW, RxJumboOctetsReceivedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_26_LOW, TxOctetsTransmittedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_33_LOW, TxFramesLostDueToInternalMACTransmissionError=SUNI1x10GEXP_REG_MSTAT_COUNTER_35_LOW, TxTransmitSystemError=SUNI1x10GEXP_REG_MSTAT_COUNTER_36_LOW, TxUnicastFramesTransmittedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_38_LOW, TxMulticastFramesTransmittedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_40_LOW, TxBroadcastFramesTransmittedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_42_LOW, TxPAUSEMACCtrlFramesTransmitted=SUNI1x10GEXP_REG_MSTAT_COUNTER_43_LOW, TxJumboFramesReceivedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_51_LOW, TxJumboOctetsReceivedOK=SUNI1x10GEXP_REG_MSTAT_COUNTER_52_LOW,} cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 60 */;
	cmac_instance *cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 596 */;
	cmac_instance cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 591 */;
	adapter_t *cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 587 */;
	const struct cmac_ops cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 567 */;
	struct cmac *cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 562 */;
	void cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 562 */;
	u8 cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 493 */[6];
	u64 cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 445 */;
	const struct cmac_statistics *cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 442 */;
	u8 cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 420 */;
	int *cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 397 */;
	u16 cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 375 */[4];
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 373 */;
	u16 cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 358 */;
	struct t1_rx_mode *cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 345 */;
	int cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 300 */;
	struct cmac_statistics cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 287 */;
	u32 cocci_id/* drivers/net/ethernet/chelsio/cxgb/pm3393.c 268 */;
}
