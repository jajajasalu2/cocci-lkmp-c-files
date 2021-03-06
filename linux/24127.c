cocci_test_suite() {
	const struct can_proto cocci_id/* net/can/raw.c 873 */;
	struct proto cocci_id/* net/can/raw.c 866 */;
	const struct proto_ops cocci_id/* net/can/raw.c 845 */;
	struct raw_sock {
		struct sock sk;
		int bound;
		int ifindex;
		struct notifier_block notifier;
		int loopback;
		int recv_own_msgs;
		int fd_frames;
		int join_filters;
		int count;
		struct can_filter dfilter;
		struct can_filter *filter;
		can_err_mask_t err_mask;
		struct uniqframe __percpu *uniq;
	} cocci_id/* net/can/raw.c 82 */;
	struct msghdr *cocci_id/* net/can/raw.c 796 */;
	size_t cocci_id/* net/can/raw.c 796 */;
	struct can_skb_priv cocci_id/* net/can/raw.c 760 */;
	struct uniqframe {
		int skbcnt;
		const struct sk_buff *skb;
		unsigned int join_rx_count;
	} cocci_id/* net/can/raw.c 76 */;
	struct can_filter cocci_id/* net/can/raw.c 668 */;
	void *cocci_id/* net/can/raw.c 654 */;
	int __user *cocci_id/* net/can/raw.c 649 */;
	char __user *cocci_id/* net/can/raw.c 649 */;
	struct net_device *cocci_id/* net/can/raw.c 410 */;
	struct raw_sock *cocci_id/* net/can/raw.c 394 */;
	struct sock *cocci_id/* net/can/raw.c 393 */;
	struct sockaddr_can *cocci_id/* net/can/raw.c 392 */;
	struct socket *cocci_id/* net/can/raw.c 390 */;
	struct sockaddr *cocci_id/* net/can/raw.c 390 */;
	int cocci_id/* net/can/raw.c 390 */;
	struct uniqframe cocci_id/* net/can/raw.c 332 */;
	struct raw_sock cocci_id/* net/can/raw.c 270 */;
	unsigned long cocci_id/* net/can/raw.c 267 */;
	struct notifier_block *cocci_id/* net/can/raw.c 266 */;
	struct net *cocci_id/* net/can/raw.c 239 */;
	void cocci_id/* net/can/raw.c 239 */;
	can_err_mask_t cocci_id/* net/can/raw.c 231 */;
	struct can_filter *cocci_id/* net/can/raw.c 218 */;
	const struct sock *cocci_id/* net/can/raw.c 111 */;
	unsigned int cocci_id/* net/can/raw.c 105 */;
	struct sockaddr_can cocci_id/* net/can/raw.c 104 */;
	struct sk_buff *cocci_id/* net/can/raw.c 102 */;
	unsigned int *cocci_id/* net/can/raw.c 102 */;
}
