cocci_test_suite() {
	struct net_device *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 88 */[NR_PORTS];
	const char cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 81 */[];
	int cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 658 */[4];
	unsigned cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 657 */;
	char *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 655 */;
	int __init cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 655 */;
	void __exit cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 629 */;
	struct baycom_state cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 611 */;
	char cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 601 */[IFNAMSIZ];
	char cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 592 */;
	int cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 572 */[NR_PORTS];
	char *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 569 */[NR_PORTS];
	struct hdlcdrv_ioctl cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 522 */;
	struct baycom_ioctl cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 504 */;
	struct hdlcdrv_ioctl *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 501 */;
	struct net_device *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 500 */;
	struct ifreq *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 500 */;
	int cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 500 */;
	unsigned int cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 482 */;
	const char *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 480 */;
	const struct hdlcdrv_ops cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 470 */;
	int cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 465 */(struct net_device *dev,
								    struct ifreq *ifr,
								    struct hdlcdrv_ioctl *hi,
								    int cmd);
	enum uart cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 345 */[];
	unsigned char cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 343 */;
	enum uart cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 341 */;
	const char *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 337 */[];
	enum uart{c_uart_unknown, c_uart_8250, c_uart_16450, c_uart_16550, c_uart_16550A,} cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 335 */;
	struct timespec64 cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 251 */;
	irqreturn_t cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 247 */;
	void *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 247 */;
	struct timespec64 *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 191 */;
	unsigned long cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 148 */;
	struct baycom_state *cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 145 */;
	void cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 145 */;
	struct baycom_state {
		struct hdlcdrv_state hdrv;
		unsigned int baud,baud_us,baud_arbdiv,baud_uartdiv,baud_dcdtimeout;
		int opt_dcd;
		struct modem_state {
			unsigned char flags;
			unsigned char ptt;
			unsigned int shreg;
			struct modem_state_ser12 {
				unsigned char tx_bit;
				unsigned char last_rxbit;
				int dcd_sum0,dcd_sum1,dcd_sum2;
				int dcd_time;
				unsigned int pll_time;
				unsigned int txshreg;
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
	} cocci_id/* drivers/net/hamradio/baycom_ser_fdx.c 112 */;
}
