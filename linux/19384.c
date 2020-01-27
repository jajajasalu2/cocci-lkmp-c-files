cocci_test_suite() {
	struct iss_net_init cocci_id/* arch/xtensa/platforms/iss/network.c 672 */;
	struct iss_net_init *cocci_id/* arch/xtensa/platforms/iss/network.c 671 */;
	struct list_head *cocci_id/* arch/xtensa/platforms/iss/network.c 666 */;
	void cocci_id/* arch/xtensa/platforms/iss/network.c 664 */;
	struct iss_net_private {
		struct list_head device_list;
		struct list_head opened_list;
		spinlock_t lock;
		struct net_device *dev;
		struct platform_device pdev;
		struct timer_list tl;
		struct net_device_stats stats;
		struct timer_list timer;
		unsigned int timer_val;
		int index;
		int mtu;
		struct {
			union {
				struct tuntap_info tuntap;
			} info;
			int (*open)(struct iss_net_private *lp);
			void (*close)(struct iss_net_private *lp);
			int (*read)(struct iss_net_private *lp,
				    struct sk_buff **skb);
			int (*write)(struct iss_net_private *lp,
				     struct sk_buff **skb);
			unsigned short (*protocol)(struct sk_buff *skb);
			int (*poll)(struct iss_net_private *lp);
		} tp;
	} cocci_id/* arch/xtensa/platforms/iss/network.c 64 */;
	unsigned cocci_id/* arch/xtensa/platforms/iss/network.c 613 */;
	int __init cocci_id/* arch/xtensa/platforms/iss/network.c 606 */;
	struct iss_net_init {
		struct list_head list;
		char *init;
		int index;
	} cocci_id/* arch/xtensa/platforms/iss/network.c 595 */;
	struct list_head cocci_id/* arch/xtensa/platforms/iss/network.c 593 */;
	struct tuntap_info {
		char dev_name[IFNAMSIZ];
		int fd;
	} cocci_id/* arch/xtensa/platforms/iss/network.c 54 */;
	struct iss_net_private cocci_id/* arch/xtensa/platforms/iss/network.c 520 */;
	char *cocci_id/* arch/xtensa/platforms/iss/network.c 505 */;
	const struct net_device_ops cocci_id/* arch/xtensa/platforms/iss/network.c 493 */;
	int cocci_id/* arch/xtensa/platforms/iss/network.c 491 */;
	struct platform_driver cocci_id/* arch/xtensa/platforms/iss/network.c 485 */;
	struct net_device *cocci_id/* arch/xtensa/platforms/iss/network.c 475 */;
	struct sockaddr *cocci_id/* arch/xtensa/platforms/iss/network.c 465 */;
	void *cocci_id/* arch/xtensa/platforms/iss/network.c 462 */;
	struct net_device_stats *cocci_id/* arch/xtensa/platforms/iss/network.c 448 */;
	struct iss_net_private *cocci_id/* arch/xtensa/platforms/iss/network.c 397 */;
	struct timer_list *cocci_id/* arch/xtensa/platforms/iss/network.c 349 */;
	struct sk_buff *cocci_id/* arch/xtensa/platforms/iss/network.c 276 */;
	unsigned short cocci_id/* arch/xtensa/platforms/iss/network.c 207 */;
	struct sk_buff **cocci_id/* arch/xtensa/platforms/iss/network.c 196 */;
	struct ifreq cocci_id/* arch/xtensa/platforms/iss/network.c 162 */;
	unsigned char *cocci_id/* arch/xtensa/platforms/iss/network.c 127 */;
	va_list cocci_id/* arch/xtensa/platforms/iss/network.c 101 */;
	char **cocci_id/* arch/xtensa/platforms/iss/network.c 100 */;
}
