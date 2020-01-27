cocci_test_suite() {
	const struct file_operations cocci_id/* drivers/net/ppp/ppp_generic.c 977 */;
	struct ppp_option_data cocci_id/* drivers/net/ppp/ppp_generic.c 894 */;
	struct ppp_option_data32 cocci_id/* drivers/net/ppp/ppp_generic.c 890 */;
	struct bpf_prog **cocci_id/* drivers/net/ppp/ppp_generic.c 869 */;
	void __user *cocci_id/* drivers/net/ppp/ppp_generic.c 856 */;
	struct file *cocci_id/* drivers/net/ppp/ppp_generic.c 852 */;
	unsigned long cocci_id/* drivers/net/ppp/ppp_generic.c 852 */;
	unsigned int cocci_id/* drivers/net/ppp/ppp_generic.c 852 */;
	long cocci_id/* drivers/net/ppp/ppp_generic.c 852 */;
	struct ppp_option_data32 {
		compat_uptr_t ptr;
		u32 length;
		compat_int_t transmit;
	} cocci_id/* drivers/net/ppp/ppp_generic.c 845 */;
	struct ppp_file {
		enum{INTERFACE=1, CHANNEL,} kind;
		struct sk_buff_head xq;
		struct sk_buff_head rq;
		wait_queue_head_t rwait;
		refcount_t refcnt;
		int hdrlen;
		int index;
		int dead;
	} cocci_id/* drivers/net/ppp/ppp_generic.c 77 */;
	int __user *cocci_id/* drivers/net/ppp/ppp_generic.c 622 */;
	struct npioctl cocci_id/* drivers/net/ppp/ppp_generic.c 618 */;
	struct ppp_idle64 cocci_id/* drivers/net/ppp/ppp_generic.c 617 */;
	struct ppp_idle32 cocci_id/* drivers/net/ppp/ppp_generic.c 616 */;
	struct sock_fprog cocci_id/* drivers/net/ppp/ppp_generic.c 600 */;
	struct sock_fprog32 cocci_id/* drivers/net/ppp/ppp_generic.c 599 */;
	struct sock_fprog32 __user *cocci_id/* drivers/net/ppp/ppp_generic.c 597 */;
	struct bpf_prog *cocci_id/* drivers/net/ppp/ppp_generic.c 597 */;
	struct sock_fprog32 {
		unsigned short len;
		compat_caddr_t filter;
	} cocci_id/* drivers/net/ppp/ppp_generic.c 589 */;
	struct sock_fprog __user *cocci_id/* drivers/net/ppp/ppp_generic.c 579 */;
	struct sock_filter cocci_id/* drivers/net/ppp/ppp_generic.c 569 */;
	struct sock_fprog_kern cocci_id/* drivers/net/ppp/ppp_generic.c 559 */;
	struct sock_fprog *cocci_id/* drivers/net/ppp/ppp_generic.c 557 */;
	__poll_t cocci_id/* drivers/net/ppp/ppp_generic.c 529 */;
	poll_table *cocci_id/* drivers/net/ppp/ppp_generic.c 529 */;
	const char __user *cocci_id/* drivers/net/ppp/ppp_generic.c 492 */;
	struct iov_iter cocci_id/* drivers/net/ppp/ppp_generic.c 430 */;
	struct iovec cocci_id/* drivers/net/ppp/ppp_generic.c 429 */;
	loff_t *cocci_id/* drivers/net/ppp/ppp_generic.c 423 */;
	char __user *cocci_id/* drivers/net/ppp/ppp_generic.c 422 */;
	ssize_t cocci_id/* drivers/net/ppp/ppp_generic.c 422 */;
	struct inode *cocci_id/* drivers/net/ppp/ppp_generic.c 384 */;
	const int cocci_id/* drivers/net/ppp/ppp_generic.c 356 */[NUM_NP];
	struct idr *cocci_id/* drivers/net/ppp/ppp_generic.c 3393 */;
	void __exit cocci_id/* drivers/net/ppp/ppp_generic.c 3352 */;
	int cocci_id/* drivers/net/ppp/ppp_generic.c 335 */;
	struct ppp_net *cocci_id/* drivers/net/ppp/ppp_generic.c 3261 */;
	struct ppp_file *cocci_id/* drivers/net/ppp/ppp_generic.c 3162 */;
	struct ppp cocci_id/* drivers/net/ppp/ppp_generic.c 3131 */;
	struct net_device *cocci_id/* drivers/net/ppp/ppp_generic.c 3127 */;
	struct ppp_config cocci_id/* drivers/net/ppp/ppp_generic.c 3122 */;
	struct net *cocci_id/* drivers/net/ppp/ppp_generic.c 3120 */;
	int *cocci_id/* drivers/net/ppp/ppp_generic.c 3120 */;
	struct slcompress *cocci_id/* drivers/net/ppp/ppp_generic.c 3089 */;
	struct ppp_stats *cocci_id/* drivers/net/ppp/ppp_generic.c 3087 */;
	struct compressor *cocci_id/* drivers/net/ppp/ppp_generic.c 3065 */;
	struct compressor_entry cocci_id/* drivers/net/ppp/ppp_generic.c 3038 */;
	struct compressor_entry *cocci_id/* drivers/net/ppp/ppp_generic.c 3015 */;
	struct compressor_entry {
		struct list_head list;
		struct compressor *comp;
	} cocci_id/* drivers/net/ppp/ppp_generic.c 3010 */;
	void *cocci_id/* drivers/net/ppp/ppp_generic.c 2981 */;
	struct class *cocci_id/* drivers/net/ppp/ppp_generic.c 294 */;
	const struct net_device_ops cocci_id/* drivers/net/ppp/ppp_generic.c 292 */;
	void cocci_id/* drivers/net/ppp/ppp_generic.c 290 */(struct net_device *dev);
	unsigned char *cocci_id/* drivers/net/ppp/ppp_generic.c 2896 */;
	void *cocci_id/* drivers/net/ppp/ppp_generic.c 289 */(struct idr *p,
							      int n);
	void cocci_id/* drivers/net/ppp/ppp_generic.c 288 */(struct idr *p,
							     int n);
	int cocci_id/* drivers/net/ppp/ppp_generic.c 287 */(struct idr *p,
							    void *ptr, int n);
	int cocci_id/* drivers/net/ppp/ppp_generic.c 286 */(struct idr *p,
							    void *ptr);
	int cocci_id/* drivers/net/ppp/ppp_generic.c 284 */(struct channel *pch);
	unsigned char cocci_id/* drivers/net/ppp/ppp_generic.c 2830 */[CCP_MAX_OPTION_LENGTH];
	int cocci_id/* drivers/net/ppp/ppp_generic.c 283 */(struct channel *pch,
							    int unit);
	struct ppp_option_data *cocci_id/* drivers/net/ppp/ppp_generic.c 2825 */;
	struct channel *cocci_id/* drivers/net/ppp/ppp_generic.c 282 */(struct ppp_net *pn,
									int unit);
	struct ppp *cocci_id/* drivers/net/ppp/ppp_generic.c 281 */(struct ppp_net *pn,
								    int unit);
	void cocci_id/* drivers/net/ppp/ppp_generic.c 279 */(struct ppp_file *pf,
							     int kind);
	int cocci_id/* drivers/net/ppp/ppp_generic.c 278 */(struct net *net,
							    struct file *file,
							    int *unit);
	void cocci_id/* drivers/net/ppp/ppp_generic.c 277 */(struct ppp *ppp,
							     struct ppp_stats *st);
	struct compressor *cocci_id/* drivers/net/ppp/ppp_generic.c 276 */(int type);
	char *cocci_id/* drivers/net/ppp/ppp_generic.c 2753 */;
	void cocci_id/* drivers/net/ppp/ppp_generic.c 275 */(struct ppp *ppp);
	void cocci_id/* drivers/net/ppp/ppp_generic.c 274 */(struct ppp *ppp,
							     struct sk_buff *skb,
							     int inbound);
	int cocci_id/* drivers/net/ppp/ppp_generic.c 273 */(struct ppp *ppp,
							    struct ppp_option_data *data);
	struct ppp_channel *cocci_id/* drivers/net/ppp/ppp_generic.c 2724 */;
	int cocci_id/* drivers/net/ppp/ppp_generic.c 271 */(struct ppp *ppp,
							    struct sk_buff *skb);
	struct sk_buff *cocci_id/* drivers/net/ppp/ppp_generic.c 270 */(struct ppp *ppp);
	void cocci_id/* drivers/net/ppp/ppp_generic.c 269 */(struct ppp *ppp,
							     struct sk_buff *skb);
	struct sk_buff **cocci_id/* drivers/net/ppp/ppp_generic.c 2650 */;
	struct sk_buff *cocci_id/* drivers/net/ppp/ppp_generic.c 264 */(struct ppp *ppp,
									struct sk_buff *skb);
	void cocci_id/* drivers/net/ppp/ppp_generic.c 260 */(struct ppp *ppp,
							     struct sk_buff *skb,
							     struct channel *pch);
	void cocci_id/* drivers/net/ppp/ppp_generic.c 259 */(struct channel *pch);
	int cocci_id/* drivers/net/ppp/ppp_generic.c 254 */(struct net *net,
							    struct ppp_file *pf,
							    struct file *file,
							    unsigned int cmd,
							    unsigned long arg);
	u32 cocci_id/* drivers/net/ppp/ppp_generic.c 2505 */;
	struct sk_buff_head *cocci_id/* drivers/net/ppp/ppp_generic.c 2504 */;
	s32 cocci_id/* drivers/net/ppp/ppp_generic.c 250 */;
	struct ppp_net {
		struct idr units_idr;
		struct mutex all_ppp_mutex;
		struct list_head all_channels;
		struct list_head new_channels;
		int last_channel_index;
		spinlock_t all_channels_lock;
	} cocci_id/* drivers/net/ppp/ppp_generic.c 207 */;
	u8 *cocci_id/* drivers/net/ppp/ppp_generic.c 2065 */;
	struct ppp_mp_skb_parm *cocci_id/* drivers/net/ppp/ppp_generic.c 2039 */;
	struct ppp_mp_skb_parm {
		u32 sequence;
		u8 BEbits;
	} cocci_id/* drivers/net/ppp/ppp_generic.c 2035 */;
	atomic_t cocci_id/* drivers/net/ppp/ppp_generic.c 203 */;
	struct ppp *cocci_id/* drivers/net/ppp/ppp_generic.c 1993 */;
	struct sk_buff *cocci_id/* drivers/net/ppp/ppp_generic.c 1992 */;
	struct channel *cocci_id/* drivers/net/ppp/ppp_generic.c 1990 */;
	void cocci_id/* drivers/net/ppp/ppp_generic.c 1990 */;
	struct ppp_config {
		struct file *file;
		s32 unit;
		bool ifname_is_set;
	} cocci_id/* drivers/net/ppp/ppp_generic.c 186 */;
	struct channel cocci_id/* drivers/net/ppp/ppp_generic.c 1852 */;
	struct list_head *cocci_id/* drivers/net/ppp/ppp_generic.c 1774 */;
	bool cocci_id/* drivers/net/ppp/ppp_generic.c 1755 */;
	struct channel {
		struct ppp_file file;
		struct list_head list;
		struct ppp_channel *chan;
		struct rw_semaphore chan_sem;
		spinlock_t downl;
		struct ppp *ppp;
		struct net *chan_net;
		struct list_head clist;
		rwlock_t upl;
#ifdef CONFIG_PPP_MULTILINK
		u8 avail;
		u8 had_frag;
		u32 lastseq;
		int speed;
#endif
	} cocci_id/* drivers/net/ppp/ppp_generic.c 168 */;
	struct device_type cocci_id/* drivers/net/ppp/ppp_generic.c 1461 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ppp/ppp_generic.c 1390 */;
	struct ppp_comp_stats cocci_id/* drivers/net/ppp/ppp_generic.c 1353 */;
	struct ppp_stats cocci_id/* drivers/net/ppp/ppp_generic.c 1352 */;
	struct ifreq *cocci_id/* drivers/net/ppp/ppp_generic.c 1347 */;
	netdev_tx_t cocci_id/* drivers/net/ppp/ppp_generic.c 1302 */;
	int __init cocci_id/* drivers/net/ppp/ppp_generic.c 1254 */;
	struct rtnl_link_ops cocci_id/* drivers/net/ppp/ppp_generic.c 1236 */;
	const struct net_device *cocci_id/* drivers/net/ppp/ppp_generic.c 1224 */;
	size_t cocci_id/* drivers/net/ppp/ppp_generic.c 1219 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ppp/ppp_generic.c 1166 */;
	struct nlattr *cocci_id/* drivers/net/ppp/ppp_generic.c 1165 */[];
	const struct nla_policy cocci_id/* drivers/net/ppp/ppp_generic.c 1146 */[IFLA_PPP_MAX + 1];
	struct ppp {
		struct ppp_file file;
		struct file *owner;
		struct list_head channels;
		int n_channels;
		spinlock_t rlock;
		spinlock_t wlock;
		int __percpu *xmit_recursion;
		int mru;
		unsigned int flags;
		unsigned int xstate;
		unsigned int rstate;
		int debug;
		struct slcompress *vj;
		enum NPmode npmode[NUM_NP];
		struct sk_buff *xmit_pending;
		struct compressor *xcomp;
		void *xc_state;
		struct compressor *rcomp;
		void *rc_state;
		unsigned long last_xmit;
		unsigned long last_recv;
		struct net_device *dev;
		int closing;
#ifdef CONFIG_PPP_MULTILINK
		int nxchan;
		u32 nxseq;
		int mrru;
		u32 nextseq;
		u32 minseq;
		struct sk_buff_head mrq;
#endif
#ifdef CONFIG_PPP_FILTER
		struct bpf_prog *pass_filter;
		struct bpf_prog *active_filter;
#endif
		struct net *ppp_net;
		struct ppp_link_stats stats64;
	} cocci_id/* drivers/net/ppp/ppp_generic.c 113 */;
	const struct ppp_config *cocci_id/* drivers/net/ppp/ppp_generic.c 1095 */;
	struct ppp_net cocci_id/* drivers/net/ppp/ppp_generic.c 1039 */;
	struct pernet_operations cocci_id/* drivers/net/ppp/ppp_generic.c 1035 */;
	struct ppp_link_stats {
		u64 rx_packets;
		u64 tx_packets;
		u64 rx_bytes;
		u64 tx_bytes;
	} cocci_id/* drivers/net/ppp/ppp_generic.c 100 */;
}
