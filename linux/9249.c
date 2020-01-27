cocci_test_suite() {
	unsigned long cocci_id/* drivers/net/plip/plip.c 917 */;
	void *cocci_id/* drivers/net/plip/plip.c 911 */;
	unsigned short *cocci_id/* drivers/net/plip/plip.c 570 */;
	const char cocci_id/* drivers/net/plip/plip.c 53 */[];
	unsigned int cocci_id/* drivers/net/plip/plip.c 482 */;
	enum plip_nibble_state *cocci_id/* drivers/net/plip/plip.c 479 */;
	unsigned char *cocci_id/* drivers/net/plip/plip.c 479 */;
	unsigned char cocci_id/* drivers/net/plip/plip.c 398 */;
	plip_func cocci_id/* drivers/net/plip/plip.c 365 */;
	struct plip_local *cocci_id/* drivers/net/plip/plip.c 363 */;
	struct work_struct *cocci_id/* drivers/net/plip/plip.c 360 */;
	const plip_func cocci_id/* drivers/net/plip/plip.c 349 */[];
	int (*cocci_id/* drivers/net/plip/plip.c 346 */)(struct net_device *dev,
							 struct net_local *nl,
							 struct plip_local *snd,
							 struct plip_local *rcv);
	int cocci_id/* drivers/net/plip/plip.c 336 */(struct net_device *dev,
						      struct net_local *nl,
						      struct plip_local *snd,
						      struct plip_local *rcv,
						      int error);
	int cocci_id/* drivers/net/plip/plip.c 332 */(struct net_device *,
						      struct net_local *,
						      struct plip_local *,
						      struct plip_local *);
	const struct net_device_ops cocci_id/* drivers/net/plip/plip.c 264 */;
	const struct header_ops cocci_id/* drivers/net/plip/plip.c 259 */;
	struct net_local *cocci_id/* drivers/net/plip/plip.c 238 */;
	struct parport *cocci_id/* drivers/net/plip/plip.c 237 */;
	struct net_device *cocci_id/* drivers/net/plip/plip.c 233 */;
	void cocci_id/* drivers/net/plip/plip.c 233 */;
	struct net_local {
		struct net_device *dev;
		struct work_struct immediate;
		struct delayed_work deferred;
		struct delayed_work timer;
		struct plip_local snd_data;
		struct plip_local rcv_data;
		struct pardevice *pardev;
		unsigned long trigger;
		unsigned long nibble;
		enum plip_connection_state connection;
		unsigned short timeout_count;
		int is_deferred;
		int port_owner;
		int should_relinquish;
		spinlock_t lock;
		atomic_t kill_timer;
		struct completion killed_timer_cmp;
	} cocci_id/* drivers/net/plip/plip.c 203 */;
	enum plip_nibble_state{PLIP_NB_BEGIN, PLIP_NB_1, PLIP_NB_2,} cocci_id/* drivers/net/plip/plip.c 174 */;
	enum plip_packet_state{PLIP_PK_DONE=0, PLIP_PK_TRIGGER, PLIP_PK_LENGTH_LSB, PLIP_PK_LENGTH_MSB, PLIP_PK_DATA, PLIP_PK_CHECKSUM,} cocci_id/* drivers/net/plip/plip.c 165 */;
	enum plip_connection_state{PLIP_CN_NONE=0, PLIP_CN_RECEIVE, PLIP_CN_SEND, PLIP_CN_CLOSING, PLIP_CN_ERROR,} cocci_id/* drivers/net/plip/plip.c 157 */;
	void cocci_id/* drivers/net/plip/plip.c 155 */(void *handle);
	int cocci_id/* drivers/net/plip/plip.c 154 */(void *handle);
	int cocci_id/* drivers/net/plip/plip.c 153 */(struct net_device *dev,
						      struct ifreq *ifr,
						      int cmd);
	int cocci_id/* drivers/net/plip/plip.c 152 */(struct net_device *dev);
	int cocci_id/* drivers/net/plip/plip.c 149 */(const struct neighbour *neigh,
						      struct hh_cache *hh,
						      __be16 type);
	int cocci_id/* drivers/net/plip/plip.c 146 */(struct sk_buff *skb,
						      struct net_device *dev,
						      unsigned short type,
						      const void *daddr,
						      const void *saddr,
						      unsigned len);
	int cocci_id/* drivers/net/plip/plip.c 145 */(struct sk_buff *skb,
						      struct net_device *dev);
	void cocci_id/* drivers/net/plip/plip.c 142 */(void *dev_id);
	int __init cocci_id/* drivers/net/plip/plip.c 1408 */;
	void cocci_id/* drivers/net/plip/plip.c 138 */(struct work_struct *work);
	int cocci_id/* drivers/net/plip/plip.c 1378 */[4];
	char *cocci_id/* drivers/net/plip/plip.c 1376 */;
	int cocci_id/* drivers/net/plip/plip.c 1374 */;
	void __exit cocci_id/* drivers/net/plip/plip.c 1352 */;
	struct parport_driver cocci_id/* drivers/net/plip/plip.c 1344 */;
	struct device_driver *cocci_id/* drivers/net/plip/plip.c 1335 */;
	struct pardevice *cocci_id/* drivers/net/plip/plip.c 1333 */;
	struct net_local cocci_id/* drivers/net/plip/plip.c 1270 */;
	struct pardev_cb cocci_id/* drivers/net/plip/plip.c 1260 */;
	char cocci_id/* drivers/net/plip/plip.c 1259 */[IFNAMSIZ];
	int cocci_id/* drivers/net/plip/plip.c 1243 */[];
	struct net_device *cocci_id/* drivers/net/plip/plip.c 1240 */[PLIP_MAX];
	int cocci_id/* drivers/net/plip/plip.c 1233 */[PLIP_MAX];
	const unsigned int cocci_id/* drivers/net/plip/plip.c 122 */;
	struct plipconf *cocci_id/* drivers/net/plip/plip.c 1211 */;
	struct ifreq *cocci_id/* drivers/net/plip/plip.c 1208 */;
	const struct in_ifaddr *cocci_id/* drivers/net/plip/plip.c 1106 */;
	struct in_device *cocci_id/* drivers/net/plip/plip.c 1062 */;
	u8 *cocci_id/* drivers/net/plip/plip.c 1044 */;
	__be16 cocci_id/* drivers/net/plip/plip.c 1036 */;
	struct hh_cache *cocci_id/* drivers/net/plip/plip.c 1036 */;
	const struct neighbour *cocci_id/* drivers/net/plip/plip.c 1035 */;
	struct ethhdr *cocci_id/* drivers/net/plip/plip.c 1030 */;
	unsigned cocci_id/* drivers/net/plip/plip.c 1024 */;
	const void *cocci_id/* drivers/net/plip/plip.c 1023 */;
	unsigned short cocci_id/* drivers/net/plip/plip.c 1023 */;
	struct sk_buff *cocci_id/* drivers/net/plip/plip.c 1022 */;
	const struct in_device *cocci_id/* drivers/net/plip/plip.c 1005 */;
	const struct net_device *cocci_id/* drivers/net/plip/plip.c 1003 */;
	struct plip_local {
		enum plip_packet_state state;
		enum plip_nibble_state nibble;
		union {
			struct {
#if defined(__LITTLE_ENDIAN)
				unsigned char lsb;
				unsigned char msb;
#elif defined(__BIG_ENDIAN)
				unsigned char msb;
				unsigned char lsb;
#else
#error	"Please fix the endianness defines in <asm/byteorder.h>"

#endif
			} b;
			unsigned short h;
		} length;
		unsigned short byte;
		unsigned char checksum;
		unsigned char data;
		struct sk_buff *skb;
	} cocci_id/*  1 */;
}
