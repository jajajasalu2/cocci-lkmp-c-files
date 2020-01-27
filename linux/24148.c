cocci_test_suite() {
	struct ncsi_cmd_arg cocci_id/* net/ncsi/ncsi-manage.c 93 */;
	struct net_device *cocci_id/* net/ncsi/ncsi-manage.c 913 */;
	struct ncsi_dev *cocci_id/* net/ncsi/ncsi-manage.c 912 */;
	struct timer_list *cocci_id/* net/ncsi/ncsi-manage.c 87 */;
	void cocci_id/* net/ncsi/ncsi-manage.c 87 */;
	struct ncsi_channel_mode *cocci_id/* net/ncsi/ncsi-manage.c 780 */;
	struct ncsi_oem_gma_handler *cocci_id/* net/ncsi/ncsi-manage.c 744 */;
	struct ncsi_oem_gma_handler {
		unsigned int mfr_id;
		int (*handler)(struct ncsi_cmd_arg *nca);
	} cocci_id/* net/ncsi/ncsi-manage.c 734 */[];
	union {
		u8 data_u8[NCSI_OEM_MLX_CMD_GMA_LEN];
		u32 data_u32[NCSI_OEM_MLX_CMD_GMA_LEN / sizeof(u32)];
	} cocci_id/* net/ncsi/ncsi-manage.c 710 */;
	unsigned int *cocci_id/* net/ncsi/ncsi-manage.c 695 */;
	unsigned char cocci_id/* net/ncsi/ncsi-manage.c 689 */[NCSI_OEM_BCM_CMD_GMA_LEN];
	u16 cocci_id/* net/ncsi/ncsi-manage.c 597 */;
	void *cocci_id/* net/ncsi/ncsi-manage.c 595 */;
	unsigned long cocci_id/* net/ncsi/ncsi-manage.c 594 */;
	struct ncsi_channel_vlan_filter *cocci_id/* net/ncsi/ncsi-manage.c 593 */;
	struct ncsi_cmd_arg *cocci_id/* net/ncsi/ncsi-manage.c 591 */;
	struct ncsi_dev_priv *cocci_id/* net/ncsi/ncsi-manage.c 590 */;
	struct ncsi_channel *cocci_id/* net/ncsi/ncsi-manage.c 590 */;
	int cocci_id/* net/ncsi/ncsi-manage.c 590 */;
	struct ncsi_cmd_pkt *cocci_id/* net/ncsi/ncsi-manage.c 427 */;
	struct sk_buff *cocci_id/* net/ncsi/ncsi-manage.c 385 */;
	unsigned int cocci_id/* net/ncsi/ncsi-manage.c 346 */;
	struct ncsi_request *cocci_id/* net/ncsi/ncsi-manage.c 345 */;
	struct ncsi_channel **cocci_id/* net/ncsi/ncsi-manage.c 327 */;
	struct ncsi_package **cocci_id/* net/ncsi/ncsi-manage.c 326 */;
	bool cocci_id/* net/ncsi/ncsi-manage.c 26 */;
	struct ncsi_package *cocci_id/* net/ncsi/ncsi-manage.c 200 */;
	unsigned char cocci_id/* net/ncsi/ncsi-manage.c 200 */;
	void (*cocci_id/* net/ncsi/ncsi-manage.c 1623 */)(struct ncsi_dev *ndev);
	struct vlan_vid *cocci_id/* net/ncsi/ncsi-manage.c 1537 */;
	__be16 cocci_id/* net/ncsi/ncsi-manage.c 1533 */;
	struct ncsi_channel cocci_id/* net/ncsi/ncsi-manage.c 1432 */;
	struct ncsi_dev_priv cocci_id/* net/ncsi/ncsi-manage.c 1405 */;
	struct work_struct *cocci_id/* net/ncsi/ncsi-manage.c 1402 */;
}
