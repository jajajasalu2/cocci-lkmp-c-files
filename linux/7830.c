cocci_test_suite() {
	struct sockaddr cocci_id/* drivers/net/tap.c 986 */;
	unsigned short cocci_id/* drivers/net/tap.c 984 */;
	unsigned int __user *cocci_id/* drivers/net/tap.c 983 */;
	struct ifreq __user *cocci_id/* drivers/net/tap.c 982 */;
	void __user *cocci_id/* drivers/net/tap.c 981 */;
	unsigned int cocci_id/* drivers/net/tap.c 976 */;
	struct proto cocci_id/* drivers/net/tap.c 96 */;
	netdev_features_t cocci_id/* drivers/net/tap.c 928 */;
	unsigned long cocci_id/* drivers/net/tap.c 925 */;
	u16 cocci_id/* drivers/net/tap.c 91 */;
	__virtio16 cocci_id/* drivers/net/tap.c 91 */;
	struct tap_queue *cocci_id/* drivers/net/tap.c 91 */;
	struct kiocb *cocci_id/* drivers/net/tap.c 874 */;
	struct iov_iter *cocci_id/* drivers/net/tap.c 826 */;
	ssize_t cocci_id/* drivers/net/tap.c 825 */;
	struct vlan_ethhdr cocci_id/* drivers/net/tap.c 806 */;
	struct {
		__be16 h_vlan_proto;
		__be16 h_vlan_TCI;
	} cocci_id/* drivers/net/tap.c 799 */;
	const struct sk_buff *cocci_id/* drivers/net/tap.c 768 */;
	struct ubuf_info *cocci_id/* drivers/net/tap.c 731 */;
	struct iov_iter cocci_id/* drivers/net/tap.c 667 */;
	bool cocci_id/* drivers/net/tap.c 635 */;
	struct virtio_net_hdr cocci_id/* drivers/net/tap.c 631 */;
	void *cocci_id/* drivers/net/tap.c 622 */;
	int *cocci_id/* drivers/net/tap.c 597 */;
	struct sock *cocci_id/* drivers/net/tap.c 595 */;
	struct sk_buff *cocci_id/* drivers/net/tap.c 595 */;
	size_t cocci_id/* drivers/net/tap.c 595 */;
	__poll_t cocci_id/* drivers/net/tap.c 572 */;
	poll_table *cocci_id/* drivers/net/tap.c 572 */;
	struct net *cocci_id/* drivers/net/tap.c 503 */;
	struct inode *cocci_id/* drivers/net/tap.c 501 */;
	wait_queue_head_t *cocci_id/* drivers/net/tap.c 483 */;
	struct major_info *cocci_id/* drivers/net/tap.c 459 */;
	struct net_device *cocci_id/* drivers/net/tap.c 457 */;
	struct tap_dev *cocci_id/* drivers/net/tap.c 455 */;
	int cocci_id/* drivers/net/tap.c 455 */;
	int __user *cocci_id/* drivers/net/tap.c 39 */;
	long cocci_id/* drivers/net/tap.c 39 */;
	rx_handler_result_t cocci_id/* drivers/net/tap.c 318 */;
	struct sk_buff **cocci_id/* drivers/net/tap.c 318 */;
	void cocci_id/* drivers/net/tap.c 298 */;
	__u32 cocci_id/* drivers/net/tap.c 262 */;
	struct file *cocci_id/* drivers/net/tap.c 144 */;
	dev_t cocci_id/* drivers/net/tap.c 1354 */;
	const char *cocci_id/* drivers/net/tap.c 1325 */;
	struct module *cocci_id/* drivers/net/tap.c 1325 */;
	dev_t *cocci_id/* drivers/net/tap.c 1324 */;
	struct cdev *cocci_id/* drivers/net/tap.c 1324 */;
	struct ptr_ring **cocci_id/* drivers/net/tap.c 1285 */;
	struct ptr_ring *cocci_id/* drivers/net/tap.c 1268 */;
	struct socket *cocci_id/* drivers/net/tap.c 1256 */;
	struct tap_queue cocci_id/* drivers/net/tap.c 1240 */;
	struct msghdr *cocci_id/* drivers/net/tap.c 1220 */;
	const struct net_device *cocci_id/* drivers/net/tap.c 122 */;
	struct tun_msg_ctl *cocci_id/* drivers/net/tap.c 1204 */;
	const struct proto_ops cocci_id/* drivers/net/tap.c 117 */;
	struct virtio_net_hdr *cocci_id/* drivers/net/tap.c 1141 */;
	struct tun_xdp_hdr *cocci_id/* drivers/net/tap.c 1140 */;
	struct xdp_buff *cocci_id/* drivers/net/tap.c 1138 */;
	const struct file_operations cocci_id/* drivers/net/tap.c 1126 */;
	struct major_info {
		struct rcu_head rcu;
		dev_t major;
		struct idr minor_idr;
		spinlock_t minor_lock;
		const char *device_name;
		struct list_head next;
	} cocci_id/* drivers/net/tap.c 106 */;
}