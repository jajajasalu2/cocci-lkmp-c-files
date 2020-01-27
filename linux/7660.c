cocci_test_suite() {
	void *cocci_id/* drivers/tty/ipwireless/network.c 67 */;
	const struct ipw_network *cocci_id/* drivers/tty/ipwireless/network.c 514 */;
	int cocci_id/* drivers/tty/ipwireless/network.c 455 */;
	struct ipw_tty *cocci_id/* drivers/tty/ipwireless/network.c 453 */;
	struct ipw_hardware *cocci_id/* drivers/tty/ipwireless/network.c 416 */;
	struct ipw_network {
		struct ipw_hardware *hardware;
		struct ppp_channel *ppp_channel;
		struct ipw_tty *associated_ttys[NO_OF_IPW_CHANNELS][MAX_ASSOCIATED_TTYS];
		int ppp_blocked;
		int outgoing_packets_queued;
		spinlock_t lock;
		struct mutex close_lock;
		unsigned int flags;
		unsigned int rbits;
		u32 xaccm[8];
		u32 raccm;
		int mru;
		int shutting_down;
		unsigned int ras_control_lines;
		struct work_struct work_go_online;
		struct work_struct work_go_offline;
	} cocci_id/* drivers/tty/ipwireless/network.c 38 */;
	unsigned int cocci_id/* drivers/tty/ipwireless/network.c 346 */;
	struct sk_buff *cocci_id/* drivers/tty/ipwireless/network.c 345 */;
	unsigned char *cocci_id/* drivers/tty/ipwireless/network.c 345 */;
	struct ppp_channel *cocci_id/* drivers/tty/ipwireless/network.c 300 */;
	unsigned long cocci_id/* drivers/tty/ipwireless/network.c 295 */;
	struct ipw_network cocci_id/* drivers/tty/ipwireless/network.c 293 */;
	struct ipw_network *cocci_id/* drivers/tty/ipwireless/network.c 292 */;
	struct work_struct *cocci_id/* drivers/tty/ipwireless/network.c 290 */;
	void cocci_id/* drivers/tty/ipwireless/network.c 290 */;
	struct ppp_channel cocci_id/* drivers/tty/ipwireless/network.c 260 */;
	const struct ppp_channel_ops cocci_id/* drivers/tty/ipwireless/network.c 243 */;
	void __user *cocci_id/* drivers/tty/ipwireless/network.c 206 */;
	int __user *cocci_id/* drivers/tty/ipwireless/network.c 162 */;
	u32 cocci_id/* drivers/tty/ipwireless/network.c 161 */[8];
	unsigned char cocci_id/* drivers/tty/ipwireless/network.c 100 */[];
}