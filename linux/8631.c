cocci_test_suite() {
	bool cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 493 */;
	struct e1000_option cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 280 */;
	const struct e1000_option cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 240 */;
	struct e1000_hw *cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 228 */;
	void cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 226 */;
	unsigned int cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 20 */;
	struct e1000_opt_list *cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 194 */;
	struct e1000_adapter *cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 165 */;
	const struct e1000_option *cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 164 */;
	unsigned int *cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 163 */;
	int cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 163 */;
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
				struct e1000_opt_list {
					int i;
					char *str;
				} *p;
			} l;
		} arg;
	} cocci_id/* drivers/net/ethernet/intel/e1000e/param.c 141 */;
}
