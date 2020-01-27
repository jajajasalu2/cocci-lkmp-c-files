cocci_test_suite() {
	const char *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 88 */;
	struct mvpp2_dbgfs_flow_entry *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 73 */;
	void cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 694 */;
	struct mvpp2_dbgfs_flow_tbl_entry *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 60 */;
	char cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 588 */[10];
	struct mvpp2_dbgfs_c2_entry *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 586 */;
	struct mvpp2 *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 584 */;
	struct dentry *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 583 */;
	int cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 583 */;
	struct mvpp2_dbgfs_port_flow_entry *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 451 */;
	struct mvpp2_dbgfs_entries {
		struct mvpp2_dbgfs_prs_entry prs_entries[MVPP2_PRS_TCAM_SRAM_SIZE];
		struct mvpp2_dbgfs_c2_entry c2_entries[MVPP22_CLS_C2_N_ENTRIES];
		struct mvpp2_dbgfs_flow_tbl_entry flt_entries[MVPP2_CLS_FLOWS_TBL_SIZE];
		struct mvpp2_dbgfs_flow_entry flow_entries[MVPP2_N_PRS_FLOWS];
		struct mvpp2_dbgfs_port_flow_entry port_flow_entries[MVPP2_MAX_PORTS];
	} cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 41 */;
	unsigned char cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 389 */[8];
	unsigned char cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 371 */;
	struct mvpp2_dbgfs_prs_entry *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 369 */;
	struct mvpp2_dbgfs_port_flow_entry {
		struct mvpp2_port *port;
		struct mvpp2_dbgfs_flow_entry *dbg_fe;
	} cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 36 */;
	unsigned int cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 353 */;
	struct mvpp2_dbgfs_flow_tbl_entry {
		int id;
		struct mvpp2 *priv;
	} cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 31 */;
	unsigned char cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 309 */[ETH_ALEN];
	unsigned long cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 304 */;
	struct mvpp2_prs_entry cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 303 */;
	struct mvpp2_port *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 301 */;
	struct seq_file *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 299 */;
	void *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 299 */;
	struct mvpp2_dbgfs_flow_entry {
		int flow;
		struct mvpp2 *priv;
	} cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 26 */;
	unsigned char cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 246 */[2];
	struct mvpp2_cls_c2_entry cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 229 */;
	struct mvpp2_dbgfs_c2_entry {
		int id;
		struct mvpp2 *priv;
	} cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 21 */;
	u8 cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 209 */;
	u32 cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 194 */;
	struct mvpp2_cls_flow_entry cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 170 */;
	struct mvpp2_dbgfs_prs_entry {
		int tid;
		struct mvpp2 *priv;
	} cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 16 */;
	u16 cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 147 */;
	const struct mvpp2_cls_flow *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 127 */;
	const struct mvpp2_dbgfs_flow_entry *cocci_id/* drivers/net/ethernet/marvell/mvpp2/mvpp2_debugfs.c 126 */;
}
