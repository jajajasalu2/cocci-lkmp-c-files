cocci_test_suite() {
	int cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 76 */;
	struct pch_gbe_rx_ring *cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 464 */;
	struct pch_gbe_tx_ring *cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 448 */;
	struct net_device *cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 435 */;
	const struct pch_gbe_option cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 277 */;
	struct pch_gbe_hw *cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 273 */;
	struct pch_gbe_adapter *cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 271 */;
	void cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 271 */;
	const struct pch_gbe_opt_list *cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 244 */;
	const struct pch_gbe_option *cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 216 */;
	int *cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 215 */;
	const struct pch_gbe_opt_list cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 164 */[];
	struct pch_gbe_option {
		enum{enable_option, range_option, list_option,} type;
		char *name;
		char *err;
		int def;
		union {
			struct {
				int min;
				int max;
			} r;
			struct {
				int nr;
				const struct pch_gbe_opt_list {
					int i;
					char *str;
				} *p;
			} l;
		} arg;
	} cocci_id/* drivers/net/ethernet/oki-semi/pch_gbe/pch_gbe_param.c 134 */;
}
