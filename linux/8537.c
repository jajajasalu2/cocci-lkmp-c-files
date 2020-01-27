cocci_test_suite() {
	struct atl1e_option {
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
				struct atl1e_opt_list {
					int i;
					char *str;
				} *p;
			} l;
		} arg;
	} cocci_id/* drivers/net/ethernet/atheros/atl1e/atl1e_param.c 89 */;
	u32 cocci_id/* drivers/net/ethernet/atheros/atl1e/atl1e_param.c 212 */;
	u16 cocci_id/* drivers/net/ethernet/atheros/atl1e/atl1e_param.c 193 */;
	struct atl1e_option cocci_id/* drivers/net/ethernet/atheros/atl1e/atl1e_param.c 180 */;
	int cocci_id/* drivers/net/ethernet/atheros/atl1e/atl1e_param.c 170 */;
	struct atl1e_adapter *cocci_id/* drivers/net/ethernet/atheros/atl1e/atl1e_param.c 168 */;
	void cocci_id/* drivers/net/ethernet/atheros/atl1e/atl1e_param.c 168 */;
	struct atl1e_opt_list *cocci_id/* drivers/net/ethernet/atheros/atl1e/atl1e_param.c 136 */;
	struct atl1e_option *cocci_id/* drivers/net/ethernet/atheros/atl1e/atl1e_param.c 106 */;
	int *cocci_id/* drivers/net/ethernet/atheros/atl1e/atl1e_param.c 106 */;
}
