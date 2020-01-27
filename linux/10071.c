cocci_test_suite() {
	struct sockaddr *cocci_id/* drivers/net/hamradio/dmascc.c 961 */;
	struct scc_param cocci_id/* drivers/net/hamradio/dmascc.c 892 */;
	struct ifreq *cocci_id/* drivers/net/hamradio/dmascc.c 884 */;
	struct scc_info cocci_id/* drivers/net/hamradio/dmascc.c 452 */;
	char *cocci_id/* drivers/net/hamradio/dmascc.c 449 */[];
	unsigned int cocci_id/* drivers/net/hamradio/dmascc.c 446 */;
	const struct net_device_ops cocci_id/* drivers/net/hamradio/dmascc.c 431 */;
	struct net_device *cocci_id/* drivers/net/hamradio/dmascc.c 420 */;
	void __init cocci_id/* drivers/net/hamradio/dmascc.c 420 */;
	unsigned long cocci_id/* drivers/net/hamradio/dmascc.c 301 */;
	unsigned cocci_id/* drivers/net/hamradio/dmascc.c 300 */;
	int cocci_id/* drivers/net/hamradio/dmascc.c 298 */[MAX_NUM_DEVS];
	int __init cocci_id/* drivers/net/hamradio/dmascc.c 295 */;
	struct scc_info *cocci_id/* drivers/net/hamradio/dmascc.c 270 */;
	int cocci_id/* drivers/net/hamradio/dmascc.c 269 */;
	void __exit cocci_id/* drivers/net/hamradio/dmascc.c 267 */;
	void cocci_id/* drivers/net/hamradio/dmascc.c 267 */;
	struct scc_hardware cocci_id/* drivers/net/hamradio/dmascc.c 253 */[NUM_TYPES];
	int cocci_id/* drivers/net/hamradio/dmascc.c 250 */[MAX_NUM_DEVS]__initdata;
	void cocci_id/* drivers/net/hamradio/dmascc.c 244 */(struct scc_priv *priv);
	void cocci_id/* drivers/net/hamradio/dmascc.c 242 */(struct work_struct *);
	void cocci_id/* drivers/net/hamradio/dmascc.c 241 */(struct scc_priv *priv,
							     int rc);
	irqreturn_t cocci_id/* drivers/net/hamradio/dmascc.c 239 */(int irq,
								    void *dev_id);
	void cocci_id/* drivers/net/hamradio/dmascc.c 238 */(struct scc_info *info);
	unsigned char cocci_id/* drivers/net/hamradio/dmascc.c 236 */(void);
	void cocci_id/* drivers/net/hamradio/dmascc.c 235 */(struct scc_priv *priv,
							     int t, int r15);
	int cocci_id/* drivers/net/hamradio/dmascc.c 230 */(struct net_device *dev,
							    void *sa);
	int cocci_id/* drivers/net/hamradio/dmascc.c 229 */(struct sk_buff *skb,
							    struct net_device *dev);
	int cocci_id/* drivers/net/hamradio/dmascc.c 228 */(struct net_device *dev,
							    struct ifreq *ifr,
							    int cmd);
	int cocci_id/* drivers/net/hamradio/dmascc.c 227 */(struct net_device *dev);
	int cocci_id/* drivers/net/hamradio/dmascc.c 224 */(struct scc_priv *priv);
	int cocci_id/* drivers/net/hamradio/dmascc.c 223 */(struct scc_priv *priv,
							    int reg);
	void cocci_id/* drivers/net/hamradio/dmascc.c 222 */(struct scc_priv *priv,
							     int val,
							     int fast);
	void cocci_id/* drivers/net/hamradio/dmascc.c 221 */(struct scc_priv *priv,
							     int reg, int val);
	int cocci_id/* drivers/net/hamradio/dmascc.c 219 */(int card_base,
							    int type, int n)__init;
	struct scc_info {
		int irq_used;
		int twin_serial_cfg;
		struct net_device *dev[2];
		struct scc_priv priv[2];
		struct scc_info *next;
		spinlock_t register_lock;
	} cocci_id/* drivers/net/hamradio/dmascc.c 208 */;
	struct scc_priv {
		int type;
		int chip;
		struct net_device *dev;
		struct scc_info *info;
		int channel;
		int card_base,scc_cmd,scc_data;
		int tmr_cnt,tmr_ctrl,tmr_mode;
		struct scc_param param;
		char rx_buf[NUM_RX_BUF][BUF_SIZE];
		int rx_len[NUM_RX_BUF];
		int rx_ptr;
		struct work_struct rx_work;
		int rx_head,rx_tail,rx_count;
		int rx_over;
		char tx_buf[NUM_TX_BUF][BUF_SIZE];
		int tx_len[NUM_TX_BUF];
		int tx_ptr;
		int tx_head,tx_tail,tx_count;
		int state;
		unsigned long tx_start;
		int rr0;
		spinlock_t *register_lock;
		spinlock_t ring_lock;
	} cocci_id/* drivers/net/hamradio/dmascc.c 181 */;
	struct scc_hardware {
		char *name;
		int io_region;
		int io_delta;
		int io_size;
		int num_devs;
		int scc_offset;
		int tmr_offset;
		int tmr_hz;
		int pclk_hz;
	} cocci_id/* drivers/net/hamradio/dmascc.c 169 */;
	struct scc_param {
		int pclk_hz;
		int brg_tc;
		int nrzi;
		int clocks;
		int txdelay;
		int txtimeout;
		int txtail;
		int waittime;
		int slottime;
		int persist;
		int dma;
		int txpause;
		int rtsoff;
		int dcdon;
		int dcdoff;
	} cocci_id/* drivers/net/hamradio/dmascc.c 151 */;
	struct scc_priv *cocci_id/* drivers/net/hamradio/dmascc.c 1309 */;
	unsigned char *cocci_id/* drivers/net/hamradio/dmascc.c 1255 */;
	struct sk_buff *cocci_id/* drivers/net/hamradio/dmascc.c 1254 */;
	struct scc_priv cocci_id/* drivers/net/hamradio/dmascc.c 1250 */;
	struct work_struct *cocci_id/* drivers/net/hamradio/dmascc.c 1248 */;
	irqreturn_t cocci_id/* drivers/net/hamradio/dmascc.c 1118 */;
	void *cocci_id/* drivers/net/hamradio/dmascc.c 1118 */;
	unsigned char cocci_id/* drivers/net/hamradio/dmascc.c 1081 */;
}
