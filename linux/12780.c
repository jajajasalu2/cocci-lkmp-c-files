cocci_test_suite() {
	void cocci_id/* drivers/hv/hv_kvp.c 96 */(int);
	void cocci_id/* drivers/hv/hv_kvp.c 95 */(struct work_struct *dummy);
	void cocci_id/* drivers/hv/hv_kvp.c 93 */(struct hv_kvp_msg *msg,
						  int error);
	int cocci_id/* drivers/hv/hv_kvp.c 88 */;
	struct {
		int state;
		int recv_len;
		struct hv_kvp_msg *kvp_msg;
		struct vmbus_channel *recv_channel;
		u64 recv_req_id;
	} cocci_id/* drivers/hv/hv_kvp.c 77 */;
	void cocci_id/* drivers/hv/hv_kvp.c 761 */;
	struct hv_util_service *cocci_id/* drivers/hv/hv_kvp.c 740 */;
	struct icmsg_hdr cocci_id/* drivers/hv/hv_kvp.c 684 */;
	struct vmbuspipe_hdr cocci_id/* drivers/hv/hv_kvp.c 670 */;
	enum{NEGO_NOT_STARTED, NEGO_IN_PROGRESS, NEGO_FINISHED,} cocci_id/* drivers/hv/hv_kvp.c 645 */;
	struct icmsg_hdr *cocci_id/* drivers/hv/hv_kvp.c 643 */;
	struct hv_kvp_msg *cocci_id/* drivers/hv/hv_kvp.c 641 */;
	u64 cocci_id/* drivers/hv/hv_kvp.c 639 */;
	u32 cocci_id/* drivers/hv/hv_kvp.c 638 */;
	struct vmbus_channel *cocci_id/* drivers/hv/hv_kvp.c 637 */;
	void *cocci_id/* drivers/hv/hv_kvp.c 635 */;
	wchar_t *cocci_id/* drivers/hv/hv_kvp.c 598 */;
	const int cocci_id/* drivers/hv/hv_kvp.c 58 */[];
	struct hv_kvp_ip_msg *cocci_id/* drivers/hv/hv_kvp.c 568 */;
	struct hv_kvp_exchg_msg_value *cocci_id/* drivers/hv/hv_kvp.c 517 */;
	__u64 cocci_id/* drivers/hv/hv_kvp.c 381 */;
	__u32 cocci_id/* drivers/hv/hv_kvp.c 380 */;
	__u8 cocci_id/* drivers/hv/hv_kvp.c 378 */;
	__u8 *cocci_id/* drivers/hv/hv_kvp.c 334 */;
	struct hv_kvp_msg_enumerate *cocci_id/* drivers/hv/hv_kvp.c 202 */;
	struct work_struct *cocci_id/* drivers/hv/hv_kvp.c 161 */;
	char *cocci_id/* drivers/hv/hv_kvp.c 135 */;
	struct hvutil_transport *cocci_id/* drivers/hv/hv_kvp.c 104 */;
	u8 *cocci_id/* drivers/hv/hv_kvp.c 103 */;
	const char cocci_id/* drivers/hv/hv_kvp.c 102 */[];
}
