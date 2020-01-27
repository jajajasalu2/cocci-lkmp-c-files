cocci_test_suite() {
	struct nfcsim_link cocci_id/* drivers/nfc/nfcsim.c 69 */;
	struct nfcsim_link {
		struct mutex lock;
		u8 rf_tech;
		u8 mode;
		u8 shutdown;
		struct sk_buff *skb;
		wait_queue_head_t recv_wait;
		u8 cond;
	} cocci_id/* drivers/nfc/nfcsim.c 52 */;
	void __exit cocci_id/* drivers/nfc/nfcsim.c 484 */;
	int __init cocci_id/* drivers/nfc/nfcsim.c 441 */;
	struct nfcsim *cocci_id/* drivers/nfc/nfcsim.c 438 */;
	struct nfcsim cocci_id/* drivers/nfc/nfcsim.c 386 */;
	struct nfcsim_link *cocci_id/* drivers/nfc/nfcsim.c 380 */;
	int cocci_id/* drivers/nfc/nfcsim.c 356 */;
	u32 cocci_id/* drivers/nfc/nfcsim.c 355 */;
	char cocci_id/* drivers/nfc/nfcsim.c 354 */[5];
	struct dentry *cocci_id/* drivers/nfc/nfcsim.c 353 */;
	struct nfc_digital_ops cocci_id/* drivers/nfc/nfcsim.c 323 */;
	struct nfcsim {
		struct nfc_digital_dev *nfc_digital_dev;
		struct work_struct recv_work;
		struct delayed_work send_work;
		struct nfcsim_link *link_in;
		struct nfcsim_link *link_out;
		bool up;
		u8 mode;
		u8 rf_tech;
		u16 recv_timeout;
		nfc_digital_cmd_complete_t cb;
		void *arg;
		u8 dropframe;
	} cocci_id/* drivers/nfc/nfcsim.c 31 */;
	nfc_digital_cmd_complete_t cocci_id/* drivers/nfc/nfcsim.c 282 */;
	void *cocci_id/* drivers/nfc/nfcsim.c 282 */;
	u16 cocci_id/* drivers/nfc/nfcsim.c 281 */;
	struct sk_buff *cocci_id/* drivers/nfc/nfcsim.c 281 */;
	bool cocci_id/* drivers/nfc/nfcsim.c 248 */;
	struct nfc_digital_dev *cocci_id/* drivers/nfc/nfcsim.c 241 */;
	void cocci_id/* drivers/nfc/nfcsim.c 241 */;
	struct work_struct *cocci_id/* drivers/nfc/nfcsim.c 182 */;
	u8 cocci_id/* drivers/nfc/nfcsim.c 128 */;
}
