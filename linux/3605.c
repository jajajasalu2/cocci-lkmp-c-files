cocci_test_suite() {
	struct kobj_type cocci_id/* drivers/firmware/turris-mox-rwtm.c 94 */;
	struct kobject *cocci_id/* drivers/firmware/turris-mox-rwtm.c 89 */;
	void cocci_id/* drivers/firmware/turris-mox-rwtm.c 89 */;
	struct mox_kobject {
		struct kobject kobj;
		struct mox_rwtm *rwtm;
	} cocci_id/* drivers/firmware/turris-mox-rwtm.c 74 */;
	struct mox_rwtm {
		struct device *dev;
		struct mbox_client mbox_client;
		struct mbox_chan *mbox;
		struct mox_kobject *kobj;
		struct hwrng hwrng;
		struct armada_37xx_rwtm_rx_msg reply;
		void *buf;
		dma_addr_t buf_phys;
		struct mutex busy;
		struct completion cmd_done;
		int has_board_info;
		u64 serial_number;
		int board_version,ram_size;
		u8 mac_address1[6],mac_address2[6];
		int has_pubkey;
		u8 pubkey[135];
	} cocci_id/* drivers/firmware/turris-mox-rwtm.c 48 */;
	struct mox_kobject cocci_id/* drivers/firmware/turris-mox-rwtm.c 46 */;
	struct platform_driver cocci_id/* drivers/firmware/turris-mox-rwtm.c 372 */;
	const struct of_device_id cocci_id/* drivers/firmware/turris-mox-rwtm.c 365 */[];
	enum mbox_cmd{MBOX_CMD_GET_RANDOM=1, MBOX_CMD_BOARD_INFO=2, MBOX_CMD_ECDSA_PUB_KEY=3, MBOX_CMD_HASH=4, MBOX_CMD_SIGN=5, MBOX_CMD_VERIFY=6, MBOX_CMD_OTP_READ=7, MBOX_CMD_OTP_WRITE=8,} cocci_id/* drivers/firmware/turris-mox-rwtm.c 34 */;
	unsigned long cocci_id/* drivers/firmware/turris-mox-rwtm.c 334 */;
	struct device *cocci_id/* drivers/firmware/turris-mox-rwtm.c 285 */;
	struct platform_device *cocci_id/* drivers/firmware/turris-mox-rwtm.c 282 */;
	bool cocci_id/* drivers/firmware/turris-mox-rwtm.c 241 */;
	struct hwrng *cocci_id/* drivers/firmware/turris-mox-rwtm.c 241 */;
	void *cocci_id/* drivers/firmware/turris-mox-rwtm.c 241 */;
	size_t cocci_id/* drivers/firmware/turris-mox-rwtm.c 241 */;
	u32 *cocci_id/* drivers/firmware/turris-mox-rwtm.c 229 */;
	struct armada_37xx_rwtm_rx_msg *cocci_id/* drivers/firmware/turris-mox-rwtm.c 178 */;
	struct armada_37xx_rwtm_tx_msg cocci_id/* drivers/firmware/turris-mox-rwtm.c 177 */;
	struct mox_rwtm *cocci_id/* drivers/firmware/turris-mox-rwtm.c 175 */;
	int cocci_id/* drivers/firmware/turris-mox-rwtm.c 175 */;
	u8 *cocci_id/* drivers/firmware/turris-mox-rwtm.c 165 */;
	struct mbox_client *cocci_id/* drivers/firmware/turris-mox-rwtm.c 156 */;
	const struct attribute *cocci_id/* drivers/firmware/turris-mox-rwtm.c 146 */[];
	u32 cocci_id/* drivers/firmware/turris-mox-rwtm.c 135 */;
	enum mbox_cmd cocci_id/* drivers/firmware/turris-mox-rwtm.c 135 */;
}
