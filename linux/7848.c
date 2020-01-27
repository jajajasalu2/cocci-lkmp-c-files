cocci_test_suite() {
	struct conf_data {
		struct frad_conf config;
		short dlci[CONFIG_DLCI_MAX];
	} cocci_id/* drivers/net/wan/sdla.c 993 */;
	short cocci_id/* drivers/net/wan/sdla.c 944 */[CONFIG_DLCI_MAX];
	struct intr_info cocci_id/* drivers/net/wan/sdla.c 942 */;
	struct timer_list *cocci_id/* drivers/net/wan/sdla.c 927 */;
	irqreturn_t cocci_id/* drivers/net/wan/sdla.c 876 */;
	const void *cocci_id/* drivers/net/wan/sdla.c 81 */;
	char *cocci_id/* drivers/net/wan/sdla.c 80 */;
	struct buf_entry cocci_id/* drivers/net/wan/sdla.c 792 */;
	struct net_device *cocci_id/* drivers/net/wan/sdla.c 78 */;
	void *cocci_id/* drivers/net/wan/sdla.c 78 */;
	int cocci_id/* drivers/net/wan/sdla.c 78 */;
	short cocci_id/* drivers/net/wan/sdla.c 78 */;
	void cocci_id/* drivers/net/wan/sdla.c 78 */;
	struct buf_entry *cocci_id/* drivers/net/wan/sdla.c 757 */;
	struct buf_info *cocci_id/* drivers/net/wan/sdla.c 756 */;
	struct sk_buff *cocci_id/* drivers/net/wan/sdla.c 753 */;
	netdev_tx_t cocci_id/* drivers/net/wan/sdla.c 656 */;
	struct dlci_conf cocci_id/* drivers/net/wan/sdla.c 636 */;
	struct dlci_local *cocci_id/* drivers/net/wan/sdla.c 620 */;
	unsigned int cocci_id/* drivers/net/wan/sdla.c 61 */[];
	short *cocci_id/* drivers/net/wan/sdla.c 567 */;
	int cocci_id/* drivers/net/wan/sdla.c 507 */(struct net_device *dev);
	volatile int cocci_id/* drivers/net/wan/sdla.c 466 */;
	long cocci_id/* drivers/net/wan/sdla.c 435 */;
	struct sdla_cmd *cocci_id/* drivers/net/wan/sdla.c 431 */;
	struct _frad_stat cocci_id/* drivers/net/wan/sdla.c 429 */;
	struct _dlci_stat cocci_id/* drivers/net/wan/sdla.c 368 */;
	struct _dlci_stat *cocci_id/* drivers/net/wan/sdla.c 340 */;
	struct _frad_stat {
		char flags;
		struct _dlci_stat dlcis[SDLA_MAX_DLCI];
	} cocci_id/* drivers/net/wan/sdla.c 332 */;
	struct _dlci_stat {
		short dlci;
		char flags;
	}__packed cocci_id/* drivers/net/wan/sdla.c 326 */;
	struct ifreq *cocci_id/* drivers/net/wan/sdla.c 276 */;
	unsigned long cocci_id/* drivers/net/wan/sdla.c 168 */;
	char cocci_id/* drivers/net/wan/sdla.c 166 */;
	struct frad_local *cocci_id/* drivers/net/wan/sdla.c 1641 */;
	void __exit cocci_id/* drivers/net/wan/sdla.c 1639 */;
	struct frad_local cocci_id/* drivers/net/wan/sdla.c 1627 */;
	int __init cocci_id/* drivers/net/wan/sdla.c 1621 */;
	const struct net_device_ops cocci_id/* drivers/net/wan/sdla.c 1586 */;
	unsigned cocci_id/* drivers/net/wan/sdla.c 1331 */;
	struct ifmap *cocci_id/* drivers/net/wan/sdla.c 1326 */;
	struct sdla_mem cocci_id/* drivers/net/wan/sdla.c 1194 */;
	struct sdla_mem __user *cocci_id/* drivers/net/wan/sdla.c 1192 */;
	struct frhdr cocci_id/* drivers/net/wan/sdla.c 1160 */;
	struct frad_conf cocci_id/* drivers/net/wan/sdla.c 1111 */;
	const char *cocci_id/* drivers/net/wan/sdla.c 111 */;
	struct conf_data cocci_id/* drivers/net/wan/sdla.c 1097 */;
	struct frad_conf __user *cocci_id/* drivers/net/wan/sdla.c 1094 */;
}
