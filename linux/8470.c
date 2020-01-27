cocci_test_suite() {
	char cocci_id/* drivers/net/ethernet/amd/ni65.c 944 */[256];
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/ni65.c 871 */;
	struct rmd *cocci_id/* drivers/net/ethernet/amd/ni65.c 832 */;
	struct tmd *cocci_id/* drivers/net/ethernet/amd/ni65.c 818 */;
	short cocci_id/* drivers/net/ethernet/amd/ni65.c 734 */[TMDNUM];
	unsigned long cocci_id/* drivers/net/ethernet/amd/ni65.c 733 */[TMDNUM];
	struct sk_buff *cocci_id/* drivers/net/ethernet/amd/ni65.c 731 */[TMDNUM];
	char *cocci_id/* drivers/net/ethernet/amd/ni65.c 652 */;
	unsigned long cocci_id/* drivers/net/ethernet/amd/ni65.c 651 */;
	struct priv cocci_id/* drivers/net/ethernet/amd/ni65.c 647 */;
	unsigned char *cocci_id/* drivers/net/ethernet/amd/ni65.c 640 */;
	u32 cocci_id/* drivers/net/ethernet/amd/ni65.c 624 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/amd/ni65.c 605 */;
	void *cocci_id/* drivers/net/ethernet/amd/ni65.c 603 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/amd/ni65.c 404 */;
	const int *cocci_id/* drivers/net/ethernet/amd/ni65.c 365 */;
	const int cocci_id/* drivers/net/ethernet/amd/ni65.c 364 */[];
	struct net_device *__init cocci_id/* drivers/net/ethernet/amd/ni65.c 361 */;
	struct priv *cocci_id/* drivers/net/ethernet/amd/ni65.c 346 */;
	struct net_device *cocci_id/* drivers/net/ethernet/amd/ni65.c 344 */;
	void cocci_id/* drivers/net/ethernet/amd/ni65.c 344 */;
	int cocci_id/* drivers/net/ethernet/amd/ni65.c 266 */;
	int cocci_id/* drivers/net/ethernet/amd/ni65.c 264 */[]__initdata;
	void cocci_id/* drivers/net/ethernet/amd/ni65.c 260 */(struct priv *p);
	int cocci_id/* drivers/net/ethernet/amd/ni65.c 259 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/amd/ni65.c 257 */(struct net_device *dev);
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/ni65.c 255 */(struct sk_buff *skb,
								      struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/amd/ni65.c 254 */(struct priv *p,
							       unsigned char *,
							       int, int);
	void cocci_id/* drivers/net/ethernet/amd/ni65.c 250 */(struct net_device *dev,
							       int);
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/ni65.c 249 */(int irq,
								      void *dev_id);
	int cocci_id/* drivers/net/ethernet/amd/ni65.c 248 */(struct net_device *dev,
							      int);
	struct priv {
		struct rmd rmdhead[RMDNUM];
		struct tmd tmdhead[TMDNUM];
		struct init_block ib;
		int rmdnum;
		int tmdnum,tmdlast;
#ifdef RCV_VIA_SKB
		struct sk_buff *recv_skb[RMDNUM];
#else
		void *recvbounce[RMDNUM];
#endif
#ifdef XMT_VIA_SKB
		struct sk_buff *tmd_skb[TMDNUM];
#endif
		void *tmdbounce[TMDNUM];
		int tmdbouncenum;
		int lock,xmit_queued;
		void *self;
		int cmdr_addr;
		int cardno;
		int features;
		spinlock_t ring_lock;
	} cocci_id/* drivers/net/ethernet/amd/ni65.c 222 */;
	struct card {
		unsigned char id0,id1;
		short id_offset;
		short total_size;
		short cmd_offset;
		short addr_offset;
		unsigned char *vendor_id;
		char *cardname;
		unsigned long config;
	} cocci_id/* drivers/net/ethernet/amd/ni65.c 176 */[];
	unsigned char cocci_id/* drivers/net/ethernet/amd/ni65.c 174 */[];
	void __exit cocci_id/* drivers/net/ethernet/amd/ni65.c 1239 */;
	int __init cocci_id/* drivers/net/ethernet/amd/ni65.c 1233 */;
	short cocci_id/* drivers/net/ethernet/amd/ni65.c 1167 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/ni65.c 1154 */;
}
