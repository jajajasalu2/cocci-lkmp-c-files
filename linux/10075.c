cocci_test_suite() {
	struct net_device *cocci_id/* drivers/net/hamradio/baycom_par.c 94 */[NR_PORTS];
	const char cocci_id/* drivers/net/hamradio/baycom_par.c 87 */[];
	int cocci_id/* drivers/net/hamradio/baycom_par.c 583 */[2];
	unsigned cocci_id/* drivers/net/hamradio/baycom_par.c 582 */;
	char *cocci_id/* drivers/net/hamradio/baycom_par.c 580 */;
	int __init cocci_id/* drivers/net/hamradio/baycom_par.c 580 */;
	void __exit cocci_id/* drivers/net/hamradio/baycom_par.c 555 */;
	struct baycom_state cocci_id/* drivers/net/hamradio/baycom_par.c 536 */;
	char cocci_id/* drivers/net/hamradio/baycom_par.c 526 */[IFNAMSIZ];
	char cocci_id/* drivers/net/hamradio/baycom_par.c 512 */;
	struct parport_driver cocci_id/* drivers/net/hamradio/baycom_par.c 503 */;
	struct device_driver *cocci_id/* drivers/net/hamradio/baycom_par.c 494 */;
	struct pardevice *cocci_id/* drivers/net/hamradio/baycom_par.c 492 */;
	int cocci_id/* drivers/net/hamradio/baycom_par.c 479 */[NR_PORTS];
	char *cocci_id/* drivers/net/hamradio/baycom_par.c 478 */[NR_PORTS];
	struct hdlcdrv_ioctl cocci_id/* drivers/net/hamradio/baycom_par.c 431 */;
	struct baycom_ioctl cocci_id/* drivers/net/hamradio/baycom_par.c 415 */;
	struct hdlcdrv_ioctl *cocci_id/* drivers/net/hamradio/baycom_par.c 412 */;
	struct net_device *cocci_id/* drivers/net/hamradio/baycom_par.c 411 */;
	struct ifreq *cocci_id/* drivers/net/hamradio/baycom_par.c 411 */;
	int cocci_id/* drivers/net/hamradio/baycom_par.c 411 */;
	const char *cocci_id/* drivers/net/hamradio/baycom_par.c 398 */;
	const struct hdlcdrv_ops cocci_id/* drivers/net/hamradio/baycom_par.c 388 */;
	int cocci_id/* drivers/net/hamradio/baycom_par.c 383 */(struct net_device *dev,
								struct ifreq *ifr,
								struct hdlcdrv_ioctl *hi,
								int cmd);
	struct parport *cocci_id/* drivers/net/hamradio/baycom_par.c 362 */;
	struct pardev_cb cocci_id/* drivers/net/hamradio/baycom_par.c 298 */;
	void *cocci_id/* drivers/net/hamradio/baycom_par.c 256 */;
	unsigned int cocci_id/* drivers/net/hamradio/baycom_par.c 206 */;
	unsigned char cocci_id/* drivers/net/hamradio/baycom_par.c 186 */;
	unsigned long cocci_id/* drivers/net/hamradio/baycom_par.c 146 */;
	struct baycom_state *cocci_id/* drivers/net/hamradio/baycom_par.c 143 */;
	void cocci_id/* drivers/net/hamradio/baycom_par.c 143 */;
	struct baycom_state {
		struct hdlcdrv_state hdrv;
		struct pardevice *pdev;
		unsigned int options;
		struct modem_state {
			short arb_divider;
			unsigned char flags;
			unsigned int shreg;
			struct modem_state_par96 {
				int dcd_count;
				unsigned int dcd_shreg;
				unsigned long descram;
				unsigned long scram;
			} par96;
		} modem;
#ifdef BAYCOM_DEBUG
		struct debug_vals {
			unsigned long last_jiffies;
			unsigned cur_intcnt;
			unsigned last_intcnt;
			int cur_pllcorr;
			int last_pllcorr;
		} debug_vals;
#endif
	} cocci_id/* drivers/net/hamradio/baycom_par.c 112 */;
}
