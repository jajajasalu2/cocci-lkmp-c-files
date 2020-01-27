cocci_test_suite() {
	u8 cocci_id/* net/can/gw.c 996 */;
	struct can_can_gw cocci_id/* net/can/gw.c 995 */;
	struct cf_mod cocci_id/* net/can/gw.c 994 */;
	struct netlink_ext_ack *cocci_id/* net/can/gw.c 989 */;
	struct nlmsghdr *cocci_id/* net/can/gw.c 988 */;
	struct can_filter cocci_id/* net/can/gw.c 963 */;
	struct can_can_gw *cocci_id/* net/can/gw.c 956 */;
	u32 cocci_id/* net/can/gw.c 951 */;
	struct cf_mod {
		struct {
			struct canfd_frame and;
			struct canfd_frame or;
			struct canfd_frame xor;
			struct canfd_frame set;
		} modframe;
		struct {
			u8 and;
			u8 or;
			u8 xor;
			u8 set;
		} modtype;
		void (*modfunc[MAX_MODFUNCTIONS])(struct canfd_frame *cf,
						  struct cf_mod *mod);
		struct {
			struct cgw_csum_xor xor;
			struct cgw_csum_crc8 crc8;
		} csum;
		struct {
			void (*xor)(struct canfd_frame *cf,
				    struct cgw_csum_xor *xor);
			void (*crc8)(struct canfd_frame *cf,
				     struct cgw_csum_crc8 *crc8);
		} csumfunc;
		u32 uid;
	} cocci_id/* net/can/gw.c 86 */;
	struct cgw_frame_mod cocci_id/* net/can/gw.c 835 */;
	struct kmem_cache *cocci_id/* net/can/gw.c 83 */;
	struct notifier_block cocci_id/* net/can/gw.c 82 */;
	struct cgw_fdframe_mod cocci_id/* net/can/gw.c 757 */;
	struct rtcanmsg cocci_id/* net/can/gw.c 743 */;
	struct nlattr *cocci_id/* net/can/gw.c 735 */[CGW_MAX + 1];
	u8 *cocci_id/* net/can/gw.c 733 */;
	struct cf_mod *cocci_id/* net/can/gw.c 732 */;
	struct cgw_csum_crc8 cocci_id/* net/can/gw.c 719 */;
	struct cgw_csum_xor cocci_id/* net/can/gw.c 718 */;
	const struct nla_policy cocci_id/* net/can/gw.c 713 */[CGW_MAX + 1];
	struct netlink_callback *cocci_id/* net/can/gw.c 687 */;
	struct hlist_node *cocci_id/* net/can/gw.c 530 */;
	struct net_device *cocci_id/* net/can/gw.c 522 */;
	unsigned long cocci_id/* net/can/gw.c 520 */;
	struct notifier_block *cocci_id/* net/can/gw.c 519 */;
	struct canfd_frame cocci_id/* net/can/gw.c 477 */;
	struct canfd_frame *cocci_id/* net/can/gw.c 399 */;
	struct cgw_job *cocci_id/* net/can/gw.c 398 */;
	struct sk_buff *cocci_id/* net/can/gw.c 396 */;
	void *cocci_id/* net/can/gw.c 396 */;
	void cocci_id/* net/can/gw.c 396 */;
	struct cgw_csum_crc8 *cocci_id/* net/can/gw.c 369 */;
	struct cgw_csum_xor *cocci_id/* net/can/gw.c 292 */;
	int cocci_id/* net/can/gw.c 251 */;
	s8 cocci_id/* net/can/gw.c 228 */;
	struct rtcanmsg *cocci_id/* net/can/gw.c 228 */;
	u64 *cocci_id/* net/can/gw.c 212 */;
	struct can_frame *cocci_id/* net/can/gw.c 203 */;
	struct cgw_job {
		struct hlist_node list;
		struct rcu_head rcu;
		u32 handled_frames;
		u32 dropped_frames;
		u32 deleted_frames;
		struct cf_mod mod;
		union {
			struct net_device *dev;
		} src;
		union {
			struct net_device *dev;
		} dst;
		union {
			struct can_can_gw ccgw;
		};
		u8 gwtype;
		u8 limit_hops;
		u16 flags;
	} cocci_id/* net/can/gw.c 128 */;
	struct can_can_gw {
		struct can_filter filter;
		int src_idx;
		int dst_idx;
	} cocci_id/* net/can/gw.c 121 */;
	struct cgw_job cocci_id/* net/can/gw.c 1205 */;
	unsigned int cocci_id/* net/can/gw.c 1195 */;
	struct pernet_operations cocci_id/* net/can/gw.c 1185 */;
	struct net *cocci_id/* net/can/gw.c 1178 */;
	void __net_exit cocci_id/* net/can/gw.c 1178 */;
	int __net_init cocci_id/* net/can/gw.c 1172 */;
}
