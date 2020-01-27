cocci_test_suite() {
	struct {
		uint8_t page;
		uint8_t subpage;
		int (*emulate)(struct se_cmd *, u8, unsigned char *);
	} cocci_id/* drivers/target/target_core_spc.c 920 */[];
	u8 *cocci_id/* drivers/target/target_core_spc.c 888 */;
	int cocci_id/* drivers/target/target_core_spc.c 684 */;
	struct se_cmd *cocci_id/* drivers/target/target_core_spc.c 682 */;
	unsigned char *cocci_id/* drivers/target/target_core_spc.c 682 */;
	sense_reason_t cocci_id/* drivers/target/target_core_spc.c 681 */;
	struct {
		uint8_t page;
		sense_reason_t (*emulate)(struct se_cmd *, unsigned char *);
	} cocci_id/* drivers/target/target_core_spc.c 666 */[];
	sense_reason_t cocci_id/* drivers/target/target_core_spc.c 663 */(struct se_cmd *cmd,
									  unsigned char *buf);
	struct se_session *cocci_id/* drivers/target/target_core_spc.c 441 */;
	void cocci_id/* drivers/target/target_core_spc.c 28 */;
	struct t10_alua_lu_gp *cocci_id/* drivers/target/target_core_spc.c 261 */;
	u32 cocci_id/* drivers/target/target_core_spc.c 176 */;
	struct t10_alua_tg_pt_gp *cocci_id/* drivers/target/target_core_spc.c 174 */;
	struct t10_alua_lu_gp_member *cocci_id/* drivers/target/target_core_spc.c 173 */;
	struct se_portal_group *cocci_id/* drivers/target/target_core_spc.c 172 */;
	struct se_lun *cocci_id/* drivers/target/target_core_spc.c 171 */;
	unsigned int *cocci_id/* drivers/target/target_core_spc.c 1276 */;
	u16 cocci_id/* drivers/target/target_core_spc.c 122 */;
	struct se_device *cocci_id/* drivers/target/target_core_spc.c 121 */;
	__be32 cocci_id/* drivers/target/target_core_spc.c 1208 */;
	struct scsi_lun cocci_id/* drivers/target/target_core_spc.c 1205 */;
	struct se_node_acl *cocci_id/* drivers/target/target_core_spc.c 1204 */;
	struct se_dev_entry *cocci_id/* drivers/target/target_core_spc.c 1202 */;
	unsigned char cocci_id/* drivers/target/target_core_spc.c 1172 */[SE_SENSE_BUF];
	unsigned char cocci_id/* drivers/target/target_core_spc.c 1114 */[SE_MODE_PAGE_BUF];
	u8 cocci_id/* drivers/target/target_core_spc.c 1112 */;
	bool cocci_id/* drivers/target/target_core_spc.c 1109 */;
	char *cocci_id/* drivers/target/target_core_spc.c 1108 */;
	u64 cocci_id/* drivers/target/target_core_spc.c 1026 */;
}
