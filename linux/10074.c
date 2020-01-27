cocci_test_suite() {
	const char *cocci_id/* drivers/net/hamradio/baycom_epp.c 973 */;
	unsigned char cocci_id/* drivers/net/hamradio/baycom_epp.c 954 */[1];
	struct pardev_cb cocci_id/* drivers/net/hamradio/baycom_epp.c 829 */;
	unsigned char cocci_id/* drivers/net/hamradio/baycom_epp.c 826 */[128];
	struct sockaddr *cocci_id/* drivers/net/hamradio/baycom_epp.c 791 */;
	void *cocci_id/* drivers/net/hamradio/baycom_epp.c 789 */;
	struct sk_buff *cocci_id/* drivers/net/hamradio/baycom_epp.c 761 */;
	struct baycom_state cocci_id/* drivers/net/hamradio/baycom_epp.c 647 */;
	unsigned char cocci_id/* drivers/net/hamradio/baycom_epp.c 642 */;
	struct parport *cocci_id/* drivers/net/hamradio/baycom_epp.c 641 */;
	struct work_struct *cocci_id/* drivers/net/hamradio/baycom_epp.c 637 */;
	struct net_device *cocci_id/* drivers/net/hamradio/baycom_epp.c 63 */[NR_PORTS];
	const char cocci_id/* drivers/net/hamradio/baycom_epp.c 56 */[];
	unsigned cocci_id/* drivers/net/hamradio/baycom_epp.c 531 */;
	unsigned int cocci_id/* drivers/net/hamradio/baycom_epp.c 383 */;
	unsigned char cocci_id/* drivers/net/hamradio/baycom_epp.c 364 */[2];
	unsigned char *cocci_id/* drivers/net/hamradio/baycom_epp.c 318 */;
	char cocci_id/* drivers/net/hamradio/baycom_epp.c 295 */[16];
	char cocci_id/* drivers/net/hamradio/baycom_epp.c 294 */[256];
	char *cocci_id/* drivers/net/hamradio/baycom_epp.c 289 */[];
	unsigned long cocci_id/* drivers/net/hamradio/baycom_epp.c 267 */;
	void cocci_id/* drivers/net/hamradio/baycom_epp.c 264 */;
	const unsigned char *cocci_id/* drivers/net/hamradio/baycom_epp.c 253 */;
	struct baycom_state {
		int magic;
		struct pardevice *pdev;
		struct net_device *dev;
		unsigned int work_running;
		struct delayed_work run_work;
		unsigned int modem;
		unsigned int bitrate;
		unsigned char stat;
		struct {
			unsigned int intclk;
			unsigned int fclk;
			unsigned int bps;
			unsigned int extmodem;
			unsigned int loopback;
		} cfg;
		struct hdlcdrv_channel_params ch_params;
		struct {
			unsigned int bitbuf,bitstream,numbits,state;
			unsigned char *bufptr;
			int bufcnt;
			unsigned char buf[TXBUFFER_SIZE];
		} hdlcrx;
		struct {
			int calibrate;
			int slotcnt;
			int flags;
			enum{tx_idle=0, tx_keyup, tx_data, tx_tail,} state;
			unsigned char *bufptr;
			int bufcnt;
			unsigned char buf[TXBUFFER_SIZE];
		} hdlctx;
		unsigned int ptt_keyed;
		struct sk_buff *skb;
#ifdef BAYCOM_DEBUG
		struct debug_vals {
			unsigned long last_jiffies;
			unsigned cur_intcnt;
			unsigned last_intcnt;
			int cur_pllcorr;
			int last_pllcorr;
			unsigned int mod_cycles;
			unsigned int demod_cycles;
		} debug_vals;
#endif
	} cocci_id/* drivers/net/hamradio/baycom_epp.c 154 */;
	int cocci_id/* drivers/net/hamradio/baycom_epp.c 1307 */[2];
	unsigned __initdata cocci_id/* drivers/net/hamradio/baycom_epp.c 1306 */;
	char *cocci_id/* drivers/net/hamradio/baycom_epp.c 1304 */;
	int __init cocci_id/* drivers/net/hamradio/baycom_epp.c 1304 */;
	void __exit cocci_id/* drivers/net/hamradio/baycom_epp.c 1273 */;
	char cocci_id/* drivers/net/hamradio/baycom_epp.c 1224 */;
	struct baycom_state *cocci_id/* drivers/net/hamradio/baycom_epp.c 1206 */;
	struct net_device *cocci_id/* drivers/net/hamradio/baycom_epp.c 1204 */;
	void __init cocci_id/* drivers/net/hamradio/baycom_epp.c 1204 */;
	struct parport_driver cocci_id/* drivers/net/hamradio/baycom_epp.c 1198 */;
	struct device_driver *cocci_id/* drivers/net/hamradio/baycom_epp.c 1189 */;
	struct pardevice *cocci_id/* drivers/net/hamradio/baycom_epp.c 1187 */;
	int cocci_id/* drivers/net/hamradio/baycom_epp.c 1187 */;
	int cocci_id/* drivers/net/hamradio/baycom_epp.c 1174 */[NR_PORTS];
	char *cocci_id/* drivers/net/hamradio/baycom_epp.c 1173 */[NR_PORTS];
	const struct hdlcdrv_channel_params cocci_id/* drivers/net/hamradio/baycom_epp.c 1131 */;
	const struct net_device_ops cocci_id/* drivers/net/hamradio/baycom_epp.c 1114 */;
	struct hdlcdrv_ioctl cocci_id/* drivers/net/hamradio/baycom_epp.c 1011 */;
	struct ifreq *cocci_id/* drivers/net/hamradio/baycom_epp.c 1008 */;
}
