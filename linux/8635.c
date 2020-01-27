cocci_test_suite() {
	const struct ixgb_opt_list cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 300 */[];
	unsigned int cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 291 */;
	struct ixgb_desc_ring *cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 253 */;
	const struct ixgb_option cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 245 */;
	int cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 238 */;
	struct ixgb_adapter *cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 236 */;
	void cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 235 */;
	const struct ixgb_opt_list *cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 204 */;
	const struct ixgb_option *cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 178 */;
	unsigned int *cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 178 */;
	struct ixgb_option {
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
				const struct ixgb_opt_list {
					int i;
					const char *str;
				} *p;
			} l;
		} arg;
	} cocci_id/* drivers/net/ethernet/intel/ixgb/ixgb_param.c 157 */;
}
