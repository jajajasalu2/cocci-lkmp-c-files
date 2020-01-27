cocci_test_suite() {
	struct peespi {
		adapter_t *adapter;
		struct espi_intr_counts intr_cnt;
		u32 misc_ctrl;
		spinlock_t lock;
	} cocci_id/* drivers/net/ethernet/chelsio/cxgb/espi.c 43 */;
	u32 *cocci_id/* drivers/net/ethernet/chelsio/cxgb/espi.c 345 */;
	u8 cocci_id/* drivers/net/ethernet/chelsio/cxgb/espi.c 314 */;
	struct peespi *cocci_id/* drivers/net/ethernet/chelsio/cxgb/espi.c 290 */;
	adapter_t *cocci_id/* drivers/net/ethernet/chelsio/cxgb/espi.c 218 */;
	int cocci_id/* drivers/net/ethernet/chelsio/cxgb/espi.c 218 */;
	void cocci_id/* drivers/net/ethernet/chelsio/cxgb/espi.c 218 */;
	u32 cocci_id/* drivers/net/ethernet/chelsio/cxgb/espi.c 189 */;
	const struct espi_intr_counts *cocci_id/* drivers/net/ethernet/chelsio/cxgb/espi.c 182 */;
}
