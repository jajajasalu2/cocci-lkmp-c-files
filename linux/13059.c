cocci_test_suite() {
	const u8 *cocci_id/* drivers/soc/qcom/cmd-db.c 97 */;
	bool cocci_id/* drivers/soc/qcom/cmd-db.c 95 */;
	const struct cmd_db_header *cocci_id/* drivers/soc/qcom/cmd-db.c 95 */;
	const u8 cocci_id/* drivers/soc/qcom/cmd-db.c 93 */[];
	struct cmd_db_header {
		__le32 version;
		u8 magic[4];
		struct rsc_hdr header[MAX_SLV_ID];
		__le32 checksum;
		__le32 reserved;
		u8 data[];
	} cocci_id/* drivers/soc/qcom/cmd-db.c 65 */;
	struct rsc_hdr {
		__le16 slv_id;
		__le16 header_offset;
		__le16 data_offset;
		__le16 cnt;
		__le16 version;
		__le16 reserved[3];
	} cocci_id/* drivers/soc/qcom/cmd-db.c 46 */;
	struct entry_header {
		u8 id[8];
		__le32 priority[NUM_PRIORITY];
		__le32 addr;
		__le16 len;
		__le16 offset;
	} cocci_id/* drivers/soc/qcom/cmd-db.c 28 */;
	int __init cocci_id/* drivers/soc/qcom/cmd-db.c 278 */;
	void cocci_id/* drivers/soc/qcom/cmd-db.c 278 */;
	struct platform_driver cocci_id/* drivers/soc/qcom/cmd-db.c 270 */;
	const struct of_device_id cocci_id/* drivers/soc/qcom/cmd-db.c 265 */[];
	struct reserved_mem *cocci_id/* drivers/soc/qcom/cmd-db.c 241 */;
	struct platform_device *cocci_id/* drivers/soc/qcom/cmd-db.c 239 */;
	int cocci_id/* drivers/soc/qcom/cmd-db.c 239 */;
	enum cmd_db_hw_type cocci_id/* drivers/soc/qcom/cmd-db.c 224 */;
	const void *cocci_id/* drivers/soc/qcom/cmd-db.c 200 */;
	size_t *cocci_id/* drivers/soc/qcom/cmd-db.c 200 */;
	u32 cocci_id/* drivers/soc/qcom/cmd-db.c 181 */;
	u8 cocci_id/* drivers/soc/qcom/cmd-db.c 142 */[8];
	const struct entry_header *cocci_id/* drivers/soc/qcom/cmd-db.c 140 */;
	const struct rsc_hdr *cocci_id/* drivers/soc/qcom/cmd-db.c 139 */;
	const struct rsc_hdr **cocci_id/* drivers/soc/qcom/cmd-db.c 137 */;
	const char *cocci_id/* drivers/soc/qcom/cmd-db.c 136 */;
	const struct entry_header **cocci_id/* drivers/soc/qcom/cmd-db.c 136 */;
	u16 cocci_id/* drivers/soc/qcom/cmd-db.c 114 */;
	void *cocci_id/* drivers/soc/qcom/cmd-db.c 111 */;
	struct cmd_db_header *cocci_id/* drivers/soc/qcom/cmd-db.c 102 */;
}
