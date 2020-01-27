cocci_test_suite() {
	struct ipoib_mcast_iter *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 997 */;
	struct netdev_hw_addr *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 887 */;
	const u8 *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 871 */;
	unsigned long cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 846 */;
	struct ipoib_neigh *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 812 */;
	struct ipoib_pseudo_header cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 802 */;
	bool cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 75 */;
	void cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 73 */;
	struct list_head *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 728 */;
	u8 *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 727 */;
	struct ipoib_mcast_iter {
		struct net_device *dev;
		union ib_gid mgid;
		unsigned long created;
		unsigned int queuelen;
		unsigned int complete;
		unsigned int send_only;
	} cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 58 */;
	ib_sa_comp_mask cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 479 */;
	struct ib_sa_mcmember_rec cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 476 */;
	struct ib_sa_multicast *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 475 */;
	struct ib_port_attr cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 330 */;
	struct ipoib_dev_priv cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 328 */;
	struct work_struct *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 326 */;
	struct sk_buff *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 309 */;
	struct rdma_ah_attr cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 218 */;
	struct ipoib_ah *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 217 */;
	struct rdma_netdev *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 216 */;
	struct ib_sa_mcmember_rec *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 212 */;
	union ib_gid cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 196 */;
	struct ipoib_mcast cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 193 */;
	struct rb_node **cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 186 */;
	struct ipoib_dev_priv *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 185 */;
	struct net_device *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 183 */;
	struct ipoib_mcast *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 183 */;
	int cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 183 */;
	struct rb_node *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 162 */;
	void *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 159 */;
	unsigned int *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 1054 */;
	unsigned long *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 1053 */;
	union ib_gid *cocci_id/* drivers/infiniband/ulp/ipoib/ipoib_multicast.c 1052 */;
}