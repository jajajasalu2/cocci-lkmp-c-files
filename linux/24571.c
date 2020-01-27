cocci_test_suite() {
	u8 cocci_id/* net/caif/chnl_net.c 76 */;
	const u8 *cocci_id/* net/caif/chnl_net.c 75 */;
	struct chnl_net cocci_id/* net/caif/chnl_net.c 543 */;
	struct list_head *cocci_id/* net/caif/chnl_net.c 538 */;
	struct chnl_net *cocci_id/* net/caif/chnl_net.c 537 */;
	void __exit cocci_id/* net/caif/chnl_net.c 535 */;
	int __init cocci_id/* net/caif/chnl_net.c 530 */;
	struct rtnl_link_ops cocci_id/* net/caif/chnl_net.c 517 */;
	const struct nla_policy cocci_id/* net/caif/chnl_net.c 510 */[IFLA_CAIF_MAX + 1];
	size_t cocci_id/* net/caif/chnl_net.c 498 */;
	struct netlink_ext_ack *cocci_id/* net/caif/chnl_net.c 488 */;
	struct net *cocci_id/* net/caif/chnl_net.c 462 */;
	struct caif_connect_request *cocci_id/* net/caif/chnl_net.c 442 */;
	struct nlattr *cocci_id/* net/caif/chnl_net.c 441 */[];
	void cocci_id/* net/caif/chnl_net.c 441 */;
	struct chnl_net {
		struct cflayer chnl;
		struct caif_connect_request conn_req;
		struct list_head list_field;
		struct net_device *netdev;
		char name[256];
		wait_queue_head_t netmgmt_wq;
		bool flowenabled;
		enum caif_states state;
	} cocci_id/* net/caif/chnl_net.c 44 */;
	const struct net_device *cocci_id/* net/caif/chnl_net.c 422 */;
	struct net_device *cocci_id/* net/caif/chnl_net.c 390 */;
	const struct net_device_ops cocci_id/* net/caif/chnl_net.c 382 */;
	enum caif_states{CAIF_CONNECTED=1, CAIF_CONNECTING, CAIF_DISCONNECTED, CAIF_SHUTDOWN,} cocci_id/* net/caif/chnl_net.c 37 */;
	void *cocci_id/* net/caif/chnl_net.c 243 */;
	struct cfpkt *cocci_id/* net/caif/chnl_net.c 217 */;
	struct sk_buff *cocci_id/* net/caif/chnl_net.c 214 */;
	int cocci_id/* net/caif/chnl_net.c 167 */;
	enum caif_ctrlcmd cocci_id/* net/caif/chnl_net.c 166 */;
	struct cflayer *cocci_id/* net/caif/chnl_net.c 166 */;
	struct work_struct *cocci_id/* net/caif/chnl_net.c 138 */;
}
