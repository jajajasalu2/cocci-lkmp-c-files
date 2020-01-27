cocci_test_suite() {
	const struct fw_info *cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 98 */;
	bool cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 84 */;
	u16 cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 59 */;
	struct orinoco_fw_header {
		char hdr_vers[6];
		__le16 headersize;
		__le32 entry_point;
		__le32 blocks;
		__le32 block_offset;
		__le32 pdr_offset;
		__le32 pri_offset;
		__le32 compat_offset;
		char signature[0];
	}__packed cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 43 */;
	const char *cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 360 */;
	const struct firmware *cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 359 */;
	struct orinoco_private *cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 357 */;
	int cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 357 */;
	void cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 357 */;
	const struct fw_info cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 28 */[];
	size_t cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 247 */;
	struct fw_info {
		char *pri_fw;
		char *sta_fw;
		char *ap_fw;
		u32 pda_addr;
		u16 pda_size;
	} cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 20 */;
	struct device *cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 111 */;
	const void *cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 108 */;
	const unsigned char *cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 107 */;
	const struct orinoco_fw_header *cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 106 */;
	struct hermes *cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 104 */;
	__le16 *cocci_id/* drivers/net/wireless/intersil/orinoco/fw.c 102 */;
}
