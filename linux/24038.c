cocci_test_suite() {
	struct kiocb *cocci_id/* net/socket.c 952 */;
	struct iov_iter *cocci_id/* net/socket.c 952 */;
	struct pipe_inode_info *cocci_id/* net/socket.c 941 */;
	loff_t *cocci_id/* net/socket.c 926 */;
	struct kvec *cocci_id/* net/socket.c 912 */;
	 cocci_id/* net/socket.c 868 */(int inet6_recvmsg(struct socket *, struct msghdr *, size_t, int));
	 cocci_id/* net/socket.c 866 */(int inet_recvmsg(struct socket *, struct msghdr *, size_t, int));
	struct __kernel_old_timespec cocci_id/* net/socket.c 798 */;
	struct __kernel_timespec cocci_id/* net/socket.c 792 */;
	struct __kernel_old_timeval cocci_id/* net/socket.c 784 */;
	struct __kernel_sock_timeval cocci_id/* net/socket.c 778 */;
	struct skb_shared_hwtstamps *cocci_id/* net/socket.c 765 */;
	struct scm_timestamping_internal cocci_id/* net/socket.c 762 */;
	struct sk_buff *cocci_id/* net/socket.c 758 */;
	struct sock *cocci_id/* net/socket.c 757 */;
	void cocci_id/* net/socket.c 757 */;
	struct net_device *cocci_id/* net/socket.c 736 */;
	struct scm_ts_pktinfo cocci_id/* net/socket.c 735 */;
	const struct sk_buff *cocci_id/* net/socket.c 710 */;
	 cocci_id/* net/socket.c 635 */(int inet6_sendmsg(struct socket *, struct msghdr *, size_t));
	 cocci_id/* net/socket.c 633 */(int inet_sendmsg(struct socket *, struct msghdr *, size_t));
	u8 cocci_id/* net/socket.c 618 */;
	__u16 cocci_id/* net/socket.c 616 */;
	__u8 *cocci_id/* net/socket.c 616 */;
	struct module *cocci_id/* net/socket.c 588 */;
	struct inode *cocci_id/* net/socket.c 585 */;
	const struct inode_operations cocci_id/* net/socket.c 542 */;
	struct iattr *cocci_id/* net/socket.c 526 */;
	const char *cocci_id/* net/socket.c 391 */;
	struct ipv6hdr cocci_id/* net/socket.c 3856 */;
	struct iphdr cocci_id/* net/socket.c 3847 */;
	struct ipv6_txoptions *cocci_id/* net/socket.c 3838 */;
	struct ipv6_pinfo *cocci_id/* net/socket.c 3837 */;
	struct ip_options_rcu *cocci_id/* net/socket.c 3834 */;
	struct inet_sock *cocci_id/* net/socket.c 3833 */;
	enum sock_shutdown_cmd cocci_id/* net/socket.c 3815 */;
	struct page *cocci_id/* net/socket.c 3772 */;
	int __user __force *cocci_id/* net/socket.c 3717 */;
	struct file_system_type cocci_id/* net/socket.c 356 */;
	struct vfsmount *cocci_id/* net/socket.c 354 */;
	struct pseudo_fs_context *cocci_id/* net/socket.c 345 */;
	compat_ulong_t cocci_id/* net/socket.c 3441 */;
	compat_ulong_t __user *cocci_id/* net/socket.c 3439 */;
	struct fs_context *cocci_id/* net/socket.c 343 */;
	struct sockaddr cocci_id/* net/socket.c 3405 */;
	struct rtentry32 __user *cocci_id/* net/socket.c 3403 */;
	struct in6_addr cocci_id/* net/socket.c 3392 */;
	struct in6_rtmsg32 __user *cocci_id/* net/socket.c 3390 */;
	char cocci_id/* net/socket.c 3385 */[16];
	struct rtentry cocci_id/* net/socket.c 3384 */;
	struct in6_rtmsg cocci_id/* net/socket.c 3383 */;
	const struct xattr_handler *cocci_id/* net/socket.c 337 */[];
	struct in6_rtmsg32 {
		struct in6_addr rtmsg_dst;
		struct in6_addr rtmsg_src;
		struct in6_addr rtmsg_gateway;
		u32 rtmsg_type;
		u16 rtmsg_dst_len;
		u16 rtmsg_src_len;
		u32 rtmsg_metric;
		u32 rtmsg_info;
		u32 rtmsg_flags;
		s32 rtmsg_ifindex;
	} cocci_id/* net/socket.c 3365 */;
	struct rtentry32 {
		u32 rt_pad1;
		struct sockaddr rt_dst;
		struct sockaddr rt_gateway;
		struct sockaddr rt_genmask;
		unsigned short rt_flags;
		short rt_pad2;
		u32 rt_pad3;
		unsigned char rt_tos;
		unsigned char rt_class;
		short rt_pad4;
		short rt_metric;
		u32 rt_dev;
		u32 rt_mtu;
		u32 rt_window;
		unsigned short rt_irtt;
	} cocci_id/* net/socket.c 3347 */;
	const struct xattr_handler cocci_id/* net/socket.c 332 */;
	struct compat_ifmap __user *cocci_id/* net/socket.c 3317 */;
	struct ifreq __user *cocci_id/* net/socket.c 3269 */;
	u32 cocci_id/* net/socket.c 3254 */;
	struct ifreq cocci_id/* net/socket.c 3253 */;
	struct compat_ifreq __user *cocci_id/* net/socket.c 3251 */;
	const void *cocci_id/* net/socket.c 325 */;
	const struct xattr_handler *cocci_id/* net/socket.c 323 */;
	compat_uptr_t cocci_id/* net/socket.c 3226 */;
	const void __user *cocci_id/* net/socket.c 3191 */;
	struct compat_ethtool_rxnfc cocci_id/* net/socket.c 3158 */;
	struct ethtool_rxnfc cocci_id/* net/socket.c 3143 */;
	struct ethtool_rxnfc __user *cocci_id/* net/socket.c 3107 */;
	struct compat_ethtool_rxnfc __user *cocci_id/* net/socket.c 3104 */;
	struct compat_ifreq cocci_id/* net/socket.c 3090 */;
	struct ifconf cocci_id/* net/socket.c 3080 */;
	struct compat_ifconf cocci_id/* net/socket.c 3079 */;
	struct compat_ifconf __user *cocci_id/* net/socket.c 3077 */;
	struct seq_file *cocci_id/* net/socket.c 3069 */;
	int __init cocci_id/* net/socket.c 3016 */;
	const struct dentry_operations cocci_id/* net/socket.c 298 */;
	struct dentry *cocci_id/* net/socket.c 292 */;
	unsigned long cocci_id/* net/socket.c 2832 */[AUDITSC_ARGS];
	unsigned long *cocci_id/* net/socket.c 2830 */;
	const struct super_operations cocci_id/* net/socket.c 283 */;
	const unsigned char cocci_id/* net/socket.c 2813 */[21];
	struct old_timespec32 *cocci_id/* net/socket.c 2801 */;
	struct __kernel_timespec *cocci_id/* net/socket.c 2790 */;
	struct mmsghdr *cocci_id/* net/socket.c 2788 */;
	struct timespec64 cocci_id/* net/socket.c 2763 */;
	struct old_timespec32 __user *cocci_id/* net/socket.c 2760 */;
	struct __kernel_timespec __user *cocci_id/* net/socket.c 2759 */;
	struct mmsghdr __user *cocci_id/* net/socket.c 2757 */;
	struct socket_alloc cocci_id/* net/socket.c 274 */;
	struct socket_alloc *cocci_id/* net/socket.c 266 */;
	struct timespec64 *cocci_id/* net/socket.c 2648 */;
	void *cocci_id/* net/socket.c 264 */;
	struct user_msghdr *cocci_id/* net/socket.c 2636 */;
	bool cocci_id/* net/socket.c 2616 */;
	long cocci_id/* net/socket.c 2615 */;
	struct iovec cocci_id/* net/socket.c 2586 */[UIO_FASTIOV];
	ssize_t cocci_id/* net/socket.c 2538 */;
	unsigned long cocci_id/* net/socket.c 2536 */;
	struct sockaddr_storage cocci_id/* net/socket.c 2535 */;
	int __user *cocci_id/* net/socket.c 2534 */;
	struct compat_msghdr __user *cocci_id/* net/socket.c 2532 */;
	unsigned int cocci_id/* net/socket.c 2530 */;
	struct sockaddr __user *cocci_id/* net/socket.c 2529 */;
	struct user_msghdr __user *cocci_id/* net/socket.c 2528 */;
	struct socket *cocci_id/* net/socket.c 2527 */;
	struct msghdr *cocci_id/* net/socket.c 2527 */;
	int cocci_id/* net/socket.c 2527 */;
	struct used_address cocci_id/* net/socket.c 2441 */;
	struct compat_mmsghdr __user *cocci_id/* net/socket.c 2439 */;
	struct super_block *cocci_id/* net/socket.c 236 */;
	struct kmem_cache *cocci_id/* net/socket.c 234 */;
	void __user __force *cocci_id/* net/socket.c 2308 */;
	struct cmsghdr cocci_id/* net/socket.c 2294 */;
	unsigned char *cocci_id/* net/socket.c 2275 */;
	unsigned char cocci_id/* net/socket.c 2272 */[sizeof(struct cmsghdr) + 20]
				__aligned(sizeof(__kernel_size_t));
	struct used_address *cocci_id/* net/socket.c 2269 */;
	void __force *cocci_id/* net/socket.c 2227 */;
	struct user_msghdr cocci_id/* net/socket.c 2221 */;
	struct iovec **cocci_id/* net/socket.c 2219 */;
	struct sockaddr __user **cocci_id/* net/socket.c 2218 */;
	struct used_address {
		struct sockaddr_storage name;
		unsigned int name_len;
	} cocci_id/* net/socket.c 2211 */;
	char __user *cocci_id/* net/socket.c 2142 */;
	char __user __force *cocci_id/* net/socket.c 2108 */;
	char *cocci_id/* net/socket.c 2082 */;
	mm_segment_t cocci_id/* net/socket.c 2081 */;
	struct msghdr cocci_id/* net/socket.c 2020 */;
	struct iovec cocci_id/* net/socket.c 2019 */;
	void __user *cocci_id/* net/socket.c 2015 */;
	size_t cocci_id/* net/socket.c 2015 */;
	struct sockaddr_storage *cocci_id/* net/socket.c 1829 */;
	int *cocci_id/* net/socket.c 1812 */;
	struct fd cocci_id/* net/socket.c 1792 */;
	struct sockaddr *cocci_id/* net/socket.c 1752 */;
	struct file *cocci_id/* net/socket.c 1695 */;
	unsigned cocci_id/* net/socket.c 1695 */;
	const struct net_proto_family __rcu *cocci_id/* net/socket.c 160 */[NPROTO]__read_mostly;
	const struct file_operations cocci_id/* net/socket.c 137 */;
	const struct net_proto_family *cocci_id/* net/socket.c 1354 */;
	struct socket **cocci_id/* net/socket.c 1350 */;
	struct net *cocci_id/* net/socket.c 1349 */;
	struct socket_wq *cocci_id/* net/socket.c 1289 */;
	ssize_t cocci_id/* net/socket.c 128 */(struct file *file,
					       loff_t *ppos,
					       struct pipe_inode_info *pipe,
					       size_t len, unsigned int flags);
	struct vm_area_struct *cocci_id/* net/socket.c 1261 */;
	ssize_t cocci_id/* net/socket.c 126 */(struct file *file,
					       struct page *page, int offset,
					       size_t size, loff_t *ppos,
					       int more);
	int cocci_id/* net/socket.c 125 */(int fd, struct file *filp, int on);
	__poll_t cocci_id/* net/socket.c 1241 */;
	poll_table *cocci_id/* net/socket.c 1241 */;
	long cocci_id/* net/socket.c 122 */(struct file *file,
					    unsigned int cmd,
					    unsigned long arg);
	__poll_t cocci_id/* net/socket.c 118 */(struct file *file,
						struct poll_table_struct *wait);
	int cocci_id/* net/socket.c 117 */(struct inode *inode,
					   struct file *file);
	int cocci_id/* net/socket.c 115 */(struct file *file,
					   struct vm_area_struct *vma);
	ssize_t cocci_id/* net/socket.c 114 */(struct kiocb *iocb,
					       struct iov_iter *from);
	ssize_t cocci_id/* net/socket.c 113 */(struct kiocb *iocb,
					       struct iov_iter *to);
	struct net cocci_id/* net/socket.c 1085 */;
	struct ns_common *cocci_id/* net/socket.c 1083 */;
	int (*cocci_id/* net/socket.c 1024 */)(unsigned int, void __user *);
	int (*cocci_id/* net/socket.c 1015 */)(struct net *, void __user *);
	int (*cocci_id/* net/socket.c 1013 */)(struct net *, void __user *arg);
	int (*cocci_id/* net/socket.c 1004 */)(struct net *, unsigned int,
					       void __user *);
	int (*cocci_id/* net/socket.c 1002 */)(struct net *, unsigned int cmd,
					       void __user *arg);
}
