cocci_test_suite() {
	struct baycom_state {
		struct hdlcdrv_state hdrv;
		int opt_dcd;
		struct modem_state {
			short arb_divider;
			unsigned char flags;
			unsigned int shreg;
			struct modem_state_ser12 {
				unsigned char tx_bit;
				int dcd_sum0,dcd_sum1,dcd_sum2;
				unsigned char last_sample;
				unsigned char last_rxbit;
				unsigned int dcd_shreg;
				unsigned int dcd_time;
				unsigned int bit_pll;
				unsigned char interm_sample;
			} ser12;
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
	} cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 98 */;
	struct net_device *cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 74 */[NR_PORTS];
	int cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 710 */[3];
	unsigned cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 709 */;
	char *cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 707 */;
	int __init cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 707 */;
	void __exit cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 679 */;
	const char cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 67 */[];
	struct baycom_state cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 662 */;
	char cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 652 */[IFNAMSIZ];
	char cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 643 */;
	int cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 624 */[NR_PORTS];
	char *cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 623 */[NR_PORTS];
	struct hdlcdrv_ioctl cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 576 */;
	struct baycom_ioctl cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 558 */;
	struct hdlcdrv_ioctl *cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 555 */;
	struct net_device *cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 554 */;
	struct ifreq *cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 554 */;
	int cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 554 */;
	const char *cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 539 */;
	const struct hdlcdrv_ops cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 529 */;
	int cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 524 */(struct net_device *dev,
								    struct ifreq *ifr,
								    struct hdlcdrv_ioctl *hi,
								    int cmd);
	enum uart cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 427 */[];
	unsigned char cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 425 */;
	enum uart cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 423 */;
	unsigned int cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 423 */;
	const char *cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 419 */[];
	enum uart{c_uart_unknown, c_uart_8250, c_uart_16450, c_uart_16550, c_uart_16550A,} cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 417 */;
	irqreturn_t cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 362 */;
	void *cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 362 */;
	unsigned long cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 135 */;
	struct baycom_state *cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 132 */;
	void cocci_id/* drivers/net/hamradio/baycom_ser_hdx.c 132 */;
}
