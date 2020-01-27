cocci_test_suite() {
	int cocci_id/* net/caif/caif_dev.c 99 */;
	struct net_device *cocci_id/* net/caif/caif_dev.c 92 */;
	struct caif_device_entry *cocci_id/* net/caif/caif_dev.c 92 */;
	struct caif_net *cocci_id/* net/caif/caif_dev.c 68 */;
	struct net *cocci_id/* net/caif/caif_dev.c 66 */;
	struct caif_device_entry_list *cocci_id/* net/caif/caif_dev.c 66 */;
	void __exit cocci_id/* net/caif/caif_dev.c 571 */;
	void cocci_id/* net/caif/caif_dev.c 571 */;
	int __init cocci_id/* net/caif/caif_dev.c 556 */;
	struct caif_net cocci_id/* net/caif/caif_dev.c 552 */;
	unsigned int cocci_id/* net/caif/caif_dev.c 55 */;
	struct pernet_operations cocci_id/* net/caif/caif_dev.c 548 */;
	struct caif_net {
		struct cfcnfg *cfg;
		struct caif_device_entry_list caifdevs;
	} cocci_id/* net/caif/caif_dev.c 50 */;
	struct notifier_block cocci_id/* net/caif/caif_dev.c 495 */;
	struct caif_device_entry_list {
		struct list_head list;
		struct mutex lock;
	} cocci_id/* net/caif/caif_dev.c 44 */;
	struct cflayer *cocci_id/* net/caif/caif_dev.c 367 */;
	struct cfcnfg *cocci_id/* net/caif/caif_dev.c 366 */;
	struct caif_dev_common *cocci_id/* net/caif/caif_dev.c 365 */;
	void *cocci_id/* net/caif/caif_dev.c 361 */;
	struct notifier_block *cocci_id/* net/caif/caif_dev.c 360 */;
	unsigned long cocci_id/* net/caif/caif_dev.c 360 */;
	struct caif_device_entry {
		struct cflayer layer;
		struct list_head list;
		struct net_device *netdev;
		int __percpu *pcpu_refcnt;
		spinlock_t flow_lock;
		struct sk_buff *xoff_skb;
		void (*xoff_skb_dtor)(struct sk_buff *skb);
		bool xoff;
	} cocci_id/* net/caif/caif_dev.c 33 */;
	enum cfcnfg_phy_preference cocci_id/* net/caif/caif_dev.c 318 */;
	int **cocci_id/* net/caif/caif_dev.c 313 */(struct sk_buff *,
						    struct net_device *,
						    struct packet_type *,
						    struct net_device *);
	struct cflayer **cocci_id/* net/caif/caif_dev.c 312 */;
	struct packet_type cocci_id/* net/caif/caif_dev.c 282 */;
	struct cfpkt *cocci_id/* net/caif/caif_dev.c 248 */;
	struct packet_type *cocci_id/* net/caif/caif_dev.c 246 */;
	struct Qdisc *cocci_id/* net/caif/caif_dev.c 189 */;
	struct netdev_queue *cocci_id/* net/caif/caif_dev.c 172 */;
	struct caif_device_entry cocci_id/* net/caif/caif_dev.c 170 */;
	bool cocci_id/* net/caif/caif_dev.c 126 */;
	void (*cocci_id/* net/caif/caif_dev.c 125 */)(struct sk_buff *skb);
	struct sk_buff *cocci_id/* net/caif/caif_dev.c 122 */;
}
