cocci_test_suite() {
	struct cb_id cocci_id/* drivers/w1/w1_netlink.c 722 */;
	size_t cocci_id/* drivers/w1/w1_netlink.c 682 */;
	struct w1_reg_num *cocci_id/* drivers/w1/w1_netlink.c 660 */;
	struct w1_cb_node cocci_id/* drivers/w1/w1_netlink.c 600 */;
	struct w1_cb_block cocci_id/* drivers/w1/w1_netlink.c 598 */;
	struct w1_netlink_cmd cocci_id/* drivers/w1/w1_netlink.c 587 */;
	struct cn_msg cocci_id/* drivers/w1/w1_netlink.c 585 */;
	u8 *cocci_id/* drivers/w1/w1_netlink.c 576 */;
	struct w1_netlink_msg cocci_id/* drivers/w1/w1_netlink.c 562 */;
	struct w1_cb_node *cocci_id/* drivers/w1/w1_netlink.c 544 */;
	struct w1_cb_block *cocci_id/* drivers/w1/w1_netlink.c 543 */;
	int cocci_id/* drivers/w1/w1_netlink.c 542 */;
	u16 cocci_id/* drivers/w1/w1_netlink.c 540 */;
	struct w1_master *cocci_id/* drivers/w1/w1_netlink.c 539 */;
	struct w1_slave *cocci_id/* drivers/w1/w1_netlink.c 538 */;
	struct w1_netlink_msg *cocci_id/* drivers/w1/w1_netlink.c 537 */;
	struct netlink_skb_parms *cocci_id/* drivers/w1/w1_netlink.c 535 */;
	struct cn_msg *cocci_id/* drivers/w1/w1_netlink.c 535 */;
	void cocci_id/* drivers/w1/w1_netlink.c 535 */;
	struct w1_reg_num cocci_id/* drivers/w1/w1_netlink.c 527 */;
	u16 *cocci_id/* drivers/w1/w1_netlink.c 499 */;
	int *cocci_id/* drivers/w1/w1_netlink.c 498 */;
	struct w1_async_cmd *cocci_id/* drivers/w1/w1_netlink.c 442 */;
	u32 *cocci_id/* drivers/w1/w1_netlink.c 402 */;
	unsigned long long cocci_id/* drivers/w1/w1_netlink.c 391 */;
	struct w1_cb_node {
		struct w1_async_cmd async;
		struct w1_cb_block *block;
		struct w1_netlink_msg *msg;
		struct w1_slave *sl;
		struct w1_master *dev;
	} cocci_id/* drivers/w1/w1_netlink.c 38 */;
	struct w1_netlink_cmd *cocci_id/* drivers/w1/w1_netlink.c 265 */;
	u64 cocci_id/* drivers/w1/w1_netlink.c 256 */;
	u64 *cocci_id/* drivers/w1/w1_netlink.c 238 */;
	struct {
		struct cn_msg cn;
		struct w1_netlink_msg msg;
	} cocci_id/* drivers/w1/w1_netlink.c 216 */;
	struct w1_cb_block {
		atomic_t refcnt;
		u32 portid;
		u16 maxlen;
		struct cn_msg *first_cn;
		struct cn_msg *cn;
		struct w1_netlink_msg *msg;
		struct w1_netlink_cmd *cmd;
		struct w1_netlink_msg *cur_msg;
		struct cn_msg request_cn;
	} cocci_id/* drivers/w1/w1_netlink.c 19 */;
	u8 cocci_id/* drivers/w1/w1_netlink.c 171 */;
	u32 cocci_id/* drivers/w1/w1_netlink.c 136 */;
}
