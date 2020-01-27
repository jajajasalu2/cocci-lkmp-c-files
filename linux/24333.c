cocci_test_suite() {
	int __user *cocci_id/* net/qrtr/qrtr.c 944 */;
	long cocci_id/* net/qrtr/qrtr.c 934 */;
	struct ifreq cocci_id/* net/qrtr/qrtr.c 933 */;
	void __user *cocci_id/* net/qrtr/qrtr.c 928 */;
	unsigned long cocci_id/* net/qrtr/qrtr.c 926 */;
	struct qrtr_sock {
		struct sock sk;
		struct sockaddr_qrtr us;
		struct sockaddr_qrtr peer;
	} cocci_id/* net/qrtr/qrtr.c 84 */;
	struct qrtr_hdr_v2 cocci_id/* net/qrtr/qrtr.c 82 */;
	struct msghdr *cocci_id/* net/qrtr/qrtr.c 819 */;
	struct qrtr_hdr_v1 cocci_id/* net/qrtr/qrtr.c 81 */;
	u32 cocci_id/* net/qrtr/qrtr.c 730 */;
	__le32 cocci_id/* net/qrtr/qrtr.c 724 */;
	int (*cocci_id/* net/qrtr/qrtr.c 722 */)(struct qrtr_node *,
						 struct sk_buff *, int,
						 struct sockaddr_qrtr *,
						 struct sockaddr_qrtr *);
	struct qrtr_cb {
		u32 src_node;
		u32 src_port;
		u32 dst_node;
		u32 dst_port;
		u8 type;
		u8 confirm_rx;
	} cocci_id/* net/qrtr/qrtr.c 71 */;
	struct sockaddr_qrtr *cocci_id/* net/qrtr/qrtr.c 699 */;
	struct sockaddr *cocci_id/* net/qrtr/qrtr.c 648 */;
	struct sockaddr_qrtr cocci_id/* net/qrtr/qrtr.c 635 */;
	struct sock *cocci_id/* net/qrtr/qrtr.c 604 */;
	struct qrtr_sock *cocci_id/* net/qrtr/qrtr.c 603 */;
	const struct sockaddr_qrtr *cocci_id/* net/qrtr/qrtr.c 601 */;
	struct socket *cocci_id/* net/qrtr/qrtr.c 600 */;
	int cocci_id/* net/qrtr/qrtr.c 600 */;
	struct qrtr_hdr_v2 {
		u8 version;
		u8 type;
		u8 flags;
		u8 optlen;
		__le32 size;
		__le16 src_node_id;
		__le16 src_port_id;
		__le16 dst_node_id;
		__le16 dst_port_id;
	} cocci_id/* net/qrtr/qrtr.c 57 */;
	int *cocci_id/* net/qrtr/qrtr.c 544 */;
	struct qrtr_ctrl_pkt *cocci_id/* net/qrtr/qrtr.c 456 */;
	struct work_struct *cocci_id/* net/qrtr/qrtr.c 362 */;
	void cocci_id/* net/qrtr/qrtr.c 356 */(struct qrtr_sock *ipc);
	struct qrtr_sock *cocci_id/* net/qrtr/qrtr.c 355 */(int port);
	const int cocci_id/* net/qrtr/qrtr.c 342 */;
	struct qrtr_ctrl_pkt cocci_id/* net/qrtr/qrtr.c 342 */;
	struct qrtr_ctrl_pkt **cocci_id/* net/qrtr/qrtr.c 340 */;
	struct qrtr_hdr_v1 {
		__le32 version;
		__le32 type;
		__le32 src_node_id;
		__le32 src_port_id;
		__le32 confirm_rx;
		__le32 size;
		__le32 dst_node_id;
		__le32 dst_port_id;
	}__packed cocci_id/* net/qrtr/qrtr.c 34 */;
	u16 cocci_id/* net/qrtr/qrtr.c 299 */;
	u8 *cocci_id/* net/qrtr/qrtr.c 272 */;
	unsigned int cocci_id/* net/qrtr/qrtr.c 258 */;
	struct qrtr_cb *cocci_id/* net/qrtr/qrtr.c 257 */;
	const struct qrtr_hdr_v2 *cocci_id/* net/qrtr/qrtr.c 255 */;
	const struct qrtr_hdr_v1 *cocci_id/* net/qrtr/qrtr.c 254 */;
	const void *cocci_id/* net/qrtr/qrtr.c 251 */;
	struct qrtr_endpoint *cocci_id/* net/qrtr/qrtr.c 251 */;
	size_t cocci_id/* net/qrtr/qrtr.c 251 */;
	struct qrtr_hdr_v1 *cocci_id/* net/qrtr/qrtr.c 179 */;
	struct qrtr_node cocci_id/* net/qrtr/qrtr.c 145 */;
	struct qrtr_node *cocci_id/* net/qrtr/qrtr.c 145 */;
	struct kref *cocci_id/* net/qrtr/qrtr.c 143 */;
	void cocci_id/* net/qrtr/qrtr.c 143 */;
	int cocci_id/* net/qrtr/qrtr.c 134 */(struct qrtr_node *node,
					      struct sk_buff *skb, int type,
					      struct sockaddr_qrtr *from,
					      struct sockaddr_qrtr *to);
	struct qrtr_node {
		struct mutex ep_lock;
		struct qrtr_endpoint *ep;
		struct kref ref;
		unsigned int nid;
		struct sk_buff_head rx_queue;
		struct work_struct work;
		struct list_head item;
	} cocci_id/* net/qrtr/qrtr.c 120 */;
	void __exit cocci_id/* net/qrtr/qrtr.c 1131 */;
	int __init cocci_id/* net/qrtr/qrtr.c 1107 */;
	const struct net_proto_family cocci_id/* net/qrtr/qrtr.c 1101 */;
	struct ifaddrmsg *cocci_id/* net/qrtr/qrtr.c 1077 */;
	struct nlattr *cocci_id/* net/qrtr/qrtr.c 1076 */[IFA_MAX + 1];
	struct netlink_ext_ack *cocci_id/* net/qrtr/qrtr.c 1074 */;
	struct sk_buff *cocci_id/* net/qrtr/qrtr.c 1073 */;
	struct nlmsghdr *cocci_id/* net/qrtr/qrtr.c 1073 */;
	const struct nla_policy cocci_id/* net/qrtr/qrtr.c 1069 */[IFA_MAX + 1];
	struct net *cocci_id/* net/qrtr/qrtr.c 1043 */;
	struct qrtr_sock cocci_id/* net/qrtr/qrtr.c 1040 */;
	struct proto cocci_id/* net/qrtr/qrtr.c 1037 */;
	const struct proto_ops cocci_id/* net/qrtr/qrtr.c 1015 */;
}
