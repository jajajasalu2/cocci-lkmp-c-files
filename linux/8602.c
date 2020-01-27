cocci_test_suite() {
	const struct e1000_opt_list cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 544 */[];
	int cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 541 */;
	unsigned int cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 540 */;
	struct e1000_option cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 539 */;
	struct e1000_adapter *cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 537 */;
	void cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 537 */;
	struct e1000_rx_ring *cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 284 */;
	e1000_mac_type cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 258 */;
	struct e1000_tx_ring *cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 256 */;
	void cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 234 */(struct e1000_adapter *adapter);
	const struct e1000_opt_list *cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 211 */;
	const struct e1000_option *cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 184 */;
	unsigned int *cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 183 */;
	struct e1000_option {
		enum{enable_option, range_option, list_option,} type;
		const char *name;
		const char *err;
		int def;
		union {
			struct {
				int min;
				int max;
			} r;
			struct {
				int nr;
				const struct e1000_opt_list {
					int i;
					char *str;
				} *p;
			} l;
		} arg;
	} cocci_id/* drivers/net/ethernet/intel/e1000/e1000_param.c 166 */;
}
