cocci_test_suite() {
	struct slcan {
		int magic;
		struct tty_struct *tty;
		struct net_device *dev;
		spinlock_t lock;
		struct work_struct tx_work;
		unsigned char rbuff[SLC_MTU];
		int rcount;
		unsigned char xbuff[SLC_MTU];
		unsigned char *xhead;
		int xleft;
		unsigned long flags;
#define SLF_INUSE 0
#define SLF_ERROR 1
	} cocci_id/* drivers/net/can/slcan.c 80 */;
	unsigned long cocci_id/* drivers/net/can/slcan.c 730 */;
	void __exit cocci_id/* drivers/net/can/slcan.c 725 */;
	int __init cocci_id/* drivers/net/can/slcan.c 702 */;
	struct tty_ldisc_ops cocci_id/* drivers/net/can/slcan.c 690 */;
	void __user *cocci_id/* drivers/net/can/slcan.c 678 */;
	int cocci_id/* drivers/net/can/slcan.c 67 */;
	unsigned int cocci_id/* drivers/net/can/slcan.c 666 */;
	struct file *cocci_id/* drivers/net/can/slcan.c 665 */;
	struct tty_struct *cocci_id/* drivers/net/can/slcan.c 638 */;
	void *cocci_id/* drivers/net/can/slcan.c 539 */;
	struct can_ml_priv cocci_id/* drivers/net/can/slcan.c 532 */;
	struct net_device *cocci_id/* drivers/net/can/slcan.c 516 */;
	char cocci_id/* drivers/net/can/slcan.c 515 */[IFNAMSIZ];
	struct slcan *cocci_id/* drivers/net/can/slcan.c 512 */;
	void cocci_id/* drivers/net/can/slcan.c 512 */;
	const unsigned char *cocci_id/* drivers/net/can/slcan.c 468 */;
	const struct net_device_ops cocci_id/* drivers/net/can/slcan.c 429 */;
	netdev_tx_t cocci_id/* drivers/net/can/slcan.c 353 */;
	struct slcan cocci_id/* drivers/net/can/slcan.c 315 */;
	struct work_struct *cocci_id/* drivers/net/can/slcan.c 313 */;
	canid_t cocci_id/* drivers/net/can/slcan.c 259 */;
	unsigned char *cocci_id/* drivers/net/can/slcan.c 257 */;
	struct can_frame *cocci_id/* drivers/net/can/slcan.c 254 */;
	unsigned char cocci_id/* drivers/net/can/slcan.c 228 */;
	struct can_skb_priv cocci_id/* drivers/net/can/slcan.c 207 */;
	u64 *cocci_id/* drivers/net/can/slcan.c 190 */;
	char *cocci_id/* drivers/net/can/slcan.c 149 */;
	u32 cocci_id/* drivers/net/can/slcan.c 148 */;
	struct can_frame cocci_id/* drivers/net/can/slcan.c 146 */;
	struct sk_buff *cocci_id/* drivers/net/can/slcan.c 145 */;
	struct net_device **cocci_id/* drivers/net/can/slcan.c 101 */;
}
