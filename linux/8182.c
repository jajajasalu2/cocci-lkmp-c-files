cocci_test_suite() {
	struct hw_reg_map *cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/rvu_reg.c 45 */;
	u64 cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/rvu_reg.c 42 */;
	bool cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/rvu_reg.c 42 */;
	int cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/rvu_reg.c 42 */;
	struct hw_reg_map cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/rvu_reg.c 32 */[NIX_TXSCH_LVL_CNT];
	struct hw_reg_map {
		u8 regblk;
		u8 num_ranges;
		u64 mask;
#define MAX_REG_RANGES 8
		struct reg_range range[MAX_REG_RANGES];
	} cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/rvu_reg.c 24 */;
	struct reg_range {
		u64 start;
		u64 end;
	} cocci_id/* drivers/net/ethernet/marvell/octeontx2/af/rvu_reg.c 19 */;
}
