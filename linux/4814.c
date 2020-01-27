cocci_test_suite() {
	void cocci_id/* drivers/infiniband/core/addr.c 880 */;
	struct notifier_block cocci_id/* drivers/infiniband/core/addr.c 865 */;
	struct notifier_block *cocci_id/* drivers/infiniband/core/addr.c 847 */;
	unsigned long cocci_id/* drivers/infiniband/core/addr.c 847 */;
	struct nlattr *cocci_id/* drivers/infiniband/core/addr.c 84 */[LS_NLA_TYPE_MAX];
	const struct nlmsghdr *cocci_id/* drivers/infiniband/core/addr.c 82 */;
	union {
		struct sockaddr_in _sockaddr_in;
		struct sockaddr_in6 _sockaddr_in6;
	} cocci_id/* drivers/infiniband/core/addr.c 816 */;
	struct resolve_cb_context cocci_id/* drivers/infiniband/core/addr.c 815 */;
	struct rdma_dev_addr cocci_id/* drivers/infiniband/core/addr.c 814 */;
	int *cocci_id/* drivers/infiniband/core/addr.c 812 */;
	const struct ib_gid_attr *cocci_id/* drivers/infiniband/core/addr.c 811 */;
	u8 *cocci_id/* drivers/infiniband/core/addr.c 811 */;
	const union ib_gid *cocci_id/* drivers/infiniband/core/addr.c 809 */;
	struct resolve_cb_context *cocci_id/* drivers/infiniband/core/addr.c 805 */;
	struct resolve_cb_context {
		struct completion comp;
		int status;
	} cocci_id/* drivers/infiniband/core/addr.c 797 */;
	struct rdma_nla_ls_gid cocci_id/* drivers/infiniband/core/addr.c 79 */;
	const struct nla_policy cocci_id/* drivers/infiniband/core/addr.c 77 */[LS_NLA_TYPE_MAX];
	struct workqueue_struct *cocci_id/* drivers/infiniband/core/addr.c 75 */;
	union {
		struct sockaddr _sockaddr;
		struct sockaddr_in _sockaddr_in;
		struct sockaddr_in6 _sockaddr_in6;
	} cocci_id/* drivers/infiniband/core/addr.c 722 */;
	struct sa_path_rec *cocci_id/* drivers/infiniband/core/addr.c 719 */;
	atomic_t cocci_id/* drivers/infiniband/core/addr.c 71 */;
	void (*cocci_id/* drivers/infiniband/core/addr.c 663 */)(int status,
								 struct sockaddr *src_addr,
								 struct rdma_dev_addr *addr,
								 void *context);
	struct addr_req cocci_id/* drivers/infiniband/core/addr.c 623 */;
	struct work_struct *cocci_id/* drivers/infiniband/core/addr.c 618 */;
	struct addr_req {
		struct list_head list;
		struct sockaddr_storage src_addr;
		struct sockaddr_storage dst_addr;
		struct rdma_dev_addr *addr;
		void *context;
		void (*callback)(int status, struct sockaddr *src_addr,
				 struct rdma_dev_addr *addr, void *context);
		unsigned long timeout;
		struct delayed_work work;
		bool resolve_by_gid_attr;
		int status;
		u32 seq;
	} cocci_id/* drivers/infiniband/core/addr.c 56 */;
	unsigned int cocci_id/* drivers/infiniband/core/addr.c 557 */;
	u32 cocci_id/* drivers/infiniband/core/addr.c 554 */;
	bool cocci_id/* drivers/infiniband/core/addr.c 552 */;
	unsigned int *cocci_id/* drivers/infiniband/core/addr.c 500 */;
	const struct net_device *cocci_id/* drivers/infiniband/core/addr.c 474 */;
	const struct dst_entry *cocci_id/* drivers/infiniband/core/addr.c 452 */;
	struct dst_entry *cocci_id/* drivers/infiniband/core/addr.c 423 */;
	struct flowi6 cocci_id/* drivers/infiniband/core/addr.c 422 */;
	const struct sockaddr_in6 *cocci_id/* drivers/infiniband/core/addr.c 420 */;
	struct sockaddr_in6 *cocci_id/* drivers/infiniband/core/addr.c 419 */;
	struct dst_entry **cocci_id/* drivers/infiniband/core/addr.c 417 */;
	struct flowi4 cocci_id/* drivers/infiniband/core/addr.c 393 */;
	struct rtable *cocci_id/* drivers/infiniband/core/addr.c 392 */;
	__be32 cocci_id/* drivers/infiniband/core/addr.c 390 */;
	const struct sockaddr_in *cocci_id/* drivers/infiniband/core/addr.c 387 */;
	struct sockaddr_in *cocci_id/* drivers/infiniband/core/addr.c 386 */;
	struct rtable **cocci_id/* drivers/infiniband/core/addr.c 384 */;
	struct rdma_dev_addr *cocci_id/* drivers/infiniband/core/addr.c 383 */;
	const struct sockaddr *cocci_id/* drivers/infiniband/core/addr.c 382 */;
	struct sockaddr *cocci_id/* drivers/infiniband/core/addr.c 381 */;
	int cocci_id/* drivers/infiniband/core/addr.c 381 */;
	sa_family_t cocci_id/* drivers/infiniband/core/addr.c 372 */;
	struct rt6_info cocci_id/* drivers/infiniband/core/addr.c 358 */;
	struct rtable cocci_id/* drivers/infiniband/core/addr.c 354 */;
	struct rt6_info *cocci_id/* drivers/infiniband/core/addr.c 351 */;
	struct neighbour *cocci_id/* drivers/infiniband/core/addr.c 329 */;
	const void *cocci_id/* drivers/infiniband/core/addr.c 327 */;
	u16 cocci_id/* drivers/infiniband/core/addr.c 317 */;
	long cocci_id/* drivers/infiniband/core/addr.c 302 */;
	struct net *cocci_id/* drivers/infiniband/core/addr.c 245 */;
	struct net_device *cocci_id/* drivers/infiniband/core/addr.c 244 */;
	struct __kernel_sockaddr_storage *cocci_id/* drivers/infiniband/core/addr.c 217 */;
	struct sockaddr_ib cocci_id/* drivers/infiniband/core/addr.c 202 */;
	struct sockaddr_in6 cocci_id/* drivers/infiniband/core/addr.c 200 */;
	struct sockaddr_in cocci_id/* drivers/infiniband/core/addr.c 198 */;
	struct in6_addr cocci_id/* drivers/infiniband/core/addr.c 161 */;
	struct in_addr cocci_id/* drivers/infiniband/core/addr.c 158 */;
	size_t cocci_id/* drivers/infiniband/core/addr.c 153 */;
	void *cocci_id/* drivers/infiniband/core/addr.c 152 */;
	struct rdma_ls_ip_resolve_header *cocci_id/* drivers/infiniband/core/addr.c 151 */;
	struct netlink_ext_ack *cocci_id/* drivers/infiniband/core/addr.c 133 */;
	struct nlmsghdr *cocci_id/* drivers/infiniband/core/addr.c 132 */;
	struct sk_buff *cocci_id/* drivers/infiniband/core/addr.c 131 */;
	struct addr_req *cocci_id/* drivers/infiniband/core/addr.c 102 */;
	union ib_gid cocci_id/* drivers/infiniband/core/addr.c 101 */;
	const struct nlattr *cocci_id/* drivers/infiniband/core/addr.c 100 */;
}
