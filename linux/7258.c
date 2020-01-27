cocci_test_suite() {
	u8 cocci_id/* drivers/bluetooth/btintel.c 81 */[];
	bool cocci_id/* drivers/bluetooth/btintel.c 79 */;
	struct intel_reset cocci_id/* drivers/bluetooth/btintel.c 714 */;
	struct hci_command_hdr *cocci_id/* drivers/bluetooth/btintel.c 667 */;
	void *cocci_id/* drivers/bluetooth/btintel.c 667 */;
	const u8 cocci_id/* drivers/bluetooth/btintel.c 64 */[];
	u32 cocci_id/* drivers/bluetooth/btintel.c 634 */;
	const u8 *cocci_id/* drivers/bluetooth/btintel.c 633 */;
	u32 *cocci_id/* drivers/bluetooth/btintel.c 630 */;
	const struct firmware *cocci_id/* drivers/bluetooth/btintel.c 629 */;
	struct intel_boot_params *cocci_id/* drivers/bluetooth/btintel.c 579 */;
	struct regmap_ibt_context *cocci_id/* drivers/bluetooth/btintel.c 541 */;
	u16 cocci_id/* drivers/bluetooth/btintel.c 538 */;
	struct regmap *cocci_id/* drivers/bluetooth/btintel.c 538 */;
	const struct regmap_config cocci_id/* drivers/bluetooth/btintel.c 532 */;
	struct regmap_bus cocci_id/* drivers/bluetooth/btintel.c 522 */;
	__le32 *cocci_id/* drivers/bluetooth/btintel.c 485 */;
	__le32 cocci_id/* drivers/bluetooth/btintel.c 463 */;
	struct ibt_cp_reg_access *cocci_id/* drivers/bluetooth/btintel.c 457 */;
	size_t cocci_id/* drivers/bluetooth/btintel.c 453 */;
	struct ibt_rp_reg_access *cocci_id/* drivers/bluetooth/btintel.c 393 */;
	struct ibt_cp_reg_access cocci_id/* drivers/bluetooth/btintel.c 392 */;
	struct ibt_rp_reg_access {
		__u8 status;
		__le32 addr;
		__u8 data[0];
	}__packed cocci_id/* drivers/bluetooth/btintel.c 382 */;
	struct ibt_cp_reg_access {
		__le32 addr;
		__u8 mode;
		__u8 len;
		__u8 data[0];
	}__packed cocci_id/* drivers/bluetooth/btintel.c 375 */;
	struct regmap_ibt_context {
		struct hci_dev *hdev;
		__u16 op_write;
		__u16 op_read;
	} cocci_id/* drivers/bluetooth/btintel.c 369 */;
	struct intel_version *cocci_id/* drivers/bluetooth/btintel.c 338 */;
	u8 cocci_id/* drivers/bluetooth/btintel.c 301 */[8];
	struct sk_buff *cocci_id/* drivers/bluetooth/btintel.c 26 */;
	const char *cocci_id/* drivers/bluetooth/btintel.c 254 */;
	struct hci_rp_read_bd_addr *cocci_id/* drivers/bluetooth/btintel.c 25 */;
	u8 cocci_id/* drivers/bluetooth/btintel.c 234 */[253];
	const void *cocci_id/* drivers/bluetooth/btintel.c 230 */;
	struct hci_dev *cocci_id/* drivers/bluetooth/btintel.c 23 */;
	int cocci_id/* drivers/bluetooth/btintel.c 23 */;
	bdaddr_t cocci_id/* drivers/bluetooth/btintel.c 21 */;
	char *cocci_id/* drivers/bluetooth/btintel.c 201 */;
	u8 cocci_id/* drivers/bluetooth/btintel.c 173 */;
	void cocci_id/* drivers/bluetooth/btintel.c 173 */;
	u8 cocci_id/* drivers/bluetooth/btintel.c 125 */[3];
	const bdaddr_t *cocci_id/* drivers/bluetooth/btintel.c 104 */;
}
