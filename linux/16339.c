cocci_test_suite() {
	struct dim_ch_state_t *cocci_id/* drivers/staging/most/dim2/hal.c 946 */;
	struct dim_channel *const*cocci_id/* drivers/staging/most/dim2/hal.c 904 */;
	struct lld_global_vars_t cocci_id/* drivers/staging/most/dim2/hal.c 84 */;
	struct lld_global_vars_t {
		bool dim_is_initialized;
		bool mcm_is_initialized;
		struct dim2_regs __iomem *dim2;
		struct async_tx_dbr atx_dbr;
		u32 fcnt;
		u32 dbr_map[DBR_MAP_SIZE];
	} cocci_id/* drivers/staging/most/dim2/hal.c 75 */;
	struct dim2_regs __iomem *cocci_id/* drivers/staging/most/dim2/hal.c 713 */;
	bool cocci_id/* drivers/staging/most/dim2/hal.c 701 */;
	struct dim_channel *cocci_id/* drivers/staging/most/dim2/hal.c 701 */;
	struct int_ch_state *constcocci_id/* drivers/staging/most/dim2/hal.c 687 */;
	struct async_tx_dbr {
		u8 ch_addr;
		u16 rpc;
		u16 wpc;
		u16 rest_size;
		u16 sz_queue[CDT0_RPC_MASK + 1];
	} cocci_id/* drivers/staging/most/dim2/hal.c 67 */;
	void cocci_id/* drivers/staging/most/dim2/hal.c 621 */;
	const char *cocci_id/* drivers/staging/most/dim2/hal.c 58 */;
	u8 cocci_id/* drivers/staging/most/dim2/hal.c 53 */;
	const u16 cocci_id/* drivers/staging/most/dim2/hal.c 461 */;
	struct int_ch_state *cocci_id/* drivers/staging/most/dim2/hal.c 424 */;
	struct async_tx_dbr *cocci_id/* drivers/staging/most/dim2/hal.c 403 */;
	u32 cocci_id/* drivers/staging/most/dim2/hal.c 292 */[4];
	const u8 cocci_id/* drivers/staging/most/dim2/hal.c 240 */;
	const u32 cocci_id/* drivers/staging/most/dim2/hal.c 209 */[4];
	const u32 *cocci_id/* drivers/staging/most/dim2/hal.c 200 */;
	enum{MADR_WNR_BIT=31,} cocci_id/* drivers/staging/most/dim2/hal.c 179 */;
	enum{MADR_TB_BIT=30, MADR_WNR_BIT=31,} cocci_id/* drivers/staging/most/dim2/hal.c 158 */;
	u32 cocci_id/* drivers/staging/most/dim2/hal.c 117 */;
	const u32 cocci_id/* drivers/staging/most/dim2/hal.c 116 */;
	u16 cocci_id/* drivers/staging/most/dim2/hal.c 103 */;
	int cocci_id/* drivers/staging/most/dim2/hal.c 103 */;
}
