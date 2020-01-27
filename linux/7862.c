cocci_test_suite() {
	char cocci_id/* drivers/net/wan/cosa.c 999 */[COSA_MAX_ID_STRING];
	struct inode *cocci_id/* drivers/net/wan/cosa.c 982 */;
	struct fasync_struct *cocci_id/* drivers/net/wan/cosa.c 979 */[256];
	struct channel_data {
		int usage;
		int num;
		struct cosa_data *cosa;
		int txsize;
		char *txbuf;
		char name[COSA_MAX_NAME];
		char *(*setup_rx)(struct channel_data *channel, int size);
		int (*rx_done)(struct channel_data *channel);
		int (*tx_done)(struct channel_data *channel, int size);
		struct mutex rlock;
		struct semaphore wsem;
		char *rxdata;
		int rxsize;
		wait_queue_head_t txwaitq,rxwaitq;
		int tx_status,rx_status;
		struct net_device *netdev;
		struct sk_buff *rx_skb,*tx_skb;
	} cocci_id/* drivers/net/wan/cosa.c 97 */;
	__poll_t cocci_id/* drivers/net/wan/cosa.c 914 */;
	poll_table *cocci_id/* drivers/net/wan/cosa.c 914 */;
	const char __user *cocci_id/* drivers/net/wan/cosa.c 845 */;
	struct channel_data *cocci_id/* drivers/net/wan/cosa.c 832 */;
	int cocci_id/* drivers/net/wan/cosa.c 832 */;
	char *cocci_id/* drivers/net/wan/cosa.c 825 */;
	loff_t *cocci_id/* drivers/net/wan/cosa.c 770 */;
	size_t cocci_id/* drivers/net/wan/cosa.c 770 */;
	ssize_t cocci_id/* drivers/net/wan/cosa.c 769 */;
	netdev_tx_t cocci_id/* drivers/net/wan/cosa.c 661 */;
	struct sk_buff *cocci_id/* drivers/net/wan/cosa.c 661 */;
	struct net_device *cocci_id/* drivers/net/wan/cosa.c 614 */;
	unsigned short cocci_id/* drivers/net/wan/cosa.c 614 */;
	struct channel_data cocci_id/* drivers/net/wan/cosa.c 548 */;
	struct cosa_data cocci_id/* drivers/net/wan/cosa.c 432 */;
	const struct net_device_ops cocci_id/* drivers/net/wan/cosa.c 419 */;
	void __exit cocci_id/* drivers/net/wan/cosa.c 392 */;
	int __init cocci_id/* drivers/net/wan/cosa.c 347 */;
	void cocci_id/* drivers/net/wan/cosa.c 336 */(struct cosa_data *cosa,
						      int status);
	void cocci_id/* drivers/net/wan/cosa.c 335 */(struct cosa_data *cosa,
						      int data);
	irqreturn_t cocci_id/* drivers/net/wan/cosa.c 329 */(int irq,
							     void *cosa);
	int cocci_id/* drivers/net/wan/cosa.c 324 */(struct cosa_data *cosa,
						     int number);
	int cocci_id/* drivers/net/wan/cosa.c 323 */(struct cosa_data *cosa,
						     int data);
	int cocci_id/* drivers/net/wan/cosa.c 319 */(struct cosa_data *cosa,
						     char *id);
	int cocci_id/* drivers/net/wan/cosa.c 318 */(struct cosa_data *cosa,
						     char __user *data,
						     int addr, int len);
	int cocci_id/* drivers/net/wan/cosa.c 316 */(struct cosa_data *cosa,
						     const char __user *data,
						     int addr, int len);
	int cocci_id/* drivers/net/wan/cosa.c 312 */(struct cosa_data *cosa,
						     void __user *a);
	int cocci_id/* drivers/net/wan/cosa.c 311 */(struct cosa_data *cosa);
	int cocci_id/* drivers/net/wan/cosa.c 310 */(struct cosa_data *cosa,
						     int address);
	const struct file_operations cocci_id/* drivers/net/wan/cosa.c 295 */;
	int cocci_id/* drivers/net/wan/cosa.c 292 */(struct inode *inode,
						     struct file *file,
						     int on);
	long cocci_id/* drivers/net/wan/cosa.c 289 */(struct file *file,
						      unsigned int cmd,
						      unsigned long arg);
	int cocci_id/* drivers/net/wan/cosa.c 287 */(struct inode *inode,
						     struct file *file);
	unsigned int cocci_id/* drivers/net/wan/cosa.c 286 */(struct file *file,
							      poll_table *poll);
	ssize_t cocci_id/* drivers/net/wan/cosa.c 284 */(struct file *file,
							 const char __user *buf,
							 size_t count,
							 loff_t *ppos);
	ssize_t cocci_id/* drivers/net/wan/cosa.c 282 */(struct file *file,
							 char __user *buf,
							 size_t count,
							 loff_t *ppos);
	int cocci_id/* drivers/net/wan/cosa.c 281 */(struct channel_data *channel,
						     int size);
	int cocci_id/* drivers/net/wan/cosa.c 280 */(struct channel_data *channel);
	char *cocci_id/* drivers/net/wan/cosa.c 279 */(struct channel_data *channel,
						       int size);
	int cocci_id/* drivers/net/wan/cosa.c 276 */(struct net_device *dev,
						     struct ifreq *ifr,
						     int cmd);
	netdev_tx_t cocci_id/* drivers/net/wan/cosa.c 272 */(struct sk_buff *skb,
							     struct net_device *d);
	void cocci_id/* drivers/net/wan/cosa.c 271 */(struct net_device *d);
	int cocci_id/* drivers/net/wan/cosa.c 270 */(struct net_device *d);
	int cocci_id/* drivers/net/wan/cosa.c 267 */(struct net_device *dev,
						     unsigned short encoding,
						     unsigned short parity);
	int cocci_id/* drivers/net/wan/cosa.c 264 */(struct channel_data *chan,
						     char *buf, int data);
	void cocci_id/* drivers/net/wan/cosa.c 263 */(struct cosa_data *cosa);
	int cocci_id/* drivers/net/wan/cosa.c 262 */(struct channel_data *channel,
						     char *buf, int size);
	void cocci_id/* drivers/net/wan/cosa.c 261 */(struct channel_data *chan);
	int cocci_id/* drivers/net/wan/cosa.c 257 */(int ioaddr, int irq,
						     int dma);
	struct class *cocci_id/* drivers/net/wan/cosa.c 219 */;
	int cocci_id/* drivers/net/wan/cosa.c 210 */[MAX_CARDS + 1];
	struct cosa_data cocci_id/* drivers/net/wan/cosa.c 204 */[MAX_CARDS];
	unsigned cocci_id/* drivers/net/wan/cosa.c 1930 */;
	irqreturn_t cocci_id/* drivers/net/wan/cosa.c 1928 */;
	void *cocci_id/* drivers/net/wan/cosa.c 1928 */;
	char cocci_id/* drivers/net/wan/cosa.c 1605 */[5];
	short cocci_id/* drivers/net/wan/cosa.c 1554 */;
	char cocci_id/* drivers/net/wan/cosa.c 1403 */;
	struct cosa_data {
		int num;
		char name[COSA_MAX_NAME];
		unsigned int datareg,statusreg;
		unsigned short irq,dma;
		unsigned short startaddr;
		unsigned short busmaster;
		int nchannels;
		int driver_status;
		int firmware_status;
		unsigned long rxbitmap,txbitmap;
		unsigned long rxtx;
		int enabled;
		int usage;
		int txchan,txsize,rxsize;
		struct channel_data *rxchan;
		char *bouncebuf;
		char *txbuf,*rxbuf;
		struct channel_data *chan;
		spinlock_t lock;
		char id_string[COSA_MAX_ID_STRING];
		char *type;
	} cocci_id/* drivers/net/wan/cosa.c 131 */;
	void cocci_id/* drivers/net/wan/cosa.c 1214 */;
	struct cosa_data *cocci_id/* drivers/net/wan/cosa.c 1189 */;
	unsigned long cocci_id/* drivers/net/wan/cosa.c 1186 */;
	struct file *cocci_id/* drivers/net/wan/cosa.c 1185 */;
	unsigned int cocci_id/* drivers/net/wan/cosa.c 1185 */;
	long cocci_id/* drivers/net/wan/cosa.c 1185 */;
	struct ifreq *cocci_id/* drivers/net/wan/cosa.c 1174 */;
	char __user *cocci_id/* drivers/net/wan/cosa.c 1112 */;
	struct cosa_download cocci_id/* drivers/net/wan/cosa.c 1016 */;
	void __user *cocci_id/* drivers/net/wan/cosa.c 1014 */;
}
