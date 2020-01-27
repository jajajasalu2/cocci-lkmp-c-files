cocci_test_suite() {
	bool cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 37 */;
	struct aq_ring_stats_tx_s cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 367 */;
	struct aq_ring_stats_rx_s cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 366 */;
	u64 *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 364 */;
	unsigned int *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 364 */;
	unsigned int cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 341 */;
	struct aq_ring_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 340 */;
	struct aq_vec_s cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 34 */;
	struct aq_ring_stats_tx_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 338 */;
	struct aq_ring_stats_rx_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 337 */;
	struct aq_vec_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 336 */;
	void cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 336 */;
	cpumask_t *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 331 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 32 */;
	u64 cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 310 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 292 */;
	void *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 292 */;
	struct aq_vec_s {
		const struct aq_hw_ops *aq_hw_ops;
		struct aq_hw_s *aq_hw;
		struct aq_nic_s *aq_nic;
		unsigned int tx_rings;
		unsigned int rx_rings;
		struct aq_ring_param_s aq_ring_param;
		struct napi_struct napi;
		struct aq_ring_s ring[AQ_CFG_TCS_MAX][2];
	} cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 18 */;
	struct aq_hw_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 167 */;
	const struct aq_hw_ops *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 166 */;
	int cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 109 */;
	struct aq_nic_cfg_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 104 */;
	struct aq_nic_s *cocci_id/* drivers/net/ethernet/aquantia/atlantic/aq_vec.c 103 */;
}
