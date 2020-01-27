cocci_test_suite() {
	struct sk_buff *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 764 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 685 */;
	struct rbd_struct cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 661 */;
	struct rbd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 657 */;
	struct rfd_struct cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 646 */;
	int cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 643 */;
	volatile struct rbd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 642 */;
	volatile struct rfd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 641 */;
	struct rfd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 641 */;
	unsigned short cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 64 */;
	void *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 639 */;
	struct tbd_struct cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 586 */;
	struct tbd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 585 */;
	struct transmit_cmd_struct cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 582 */;
	struct transmit_cmd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 581 */;
	volatile unsigned char *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 58 */;
	struct nop_cmd_struct cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 561 */;
	struct nop_cmd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 557 */;
	struct mcsetup_cmd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 530 */;
	struct tdr_cmd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 485 */;
	struct iasetup_cmd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 461 */;
	struct configure_cmd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 418 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 413 */;
	volatile struct mcsetup_cmd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 412 */;
	volatile struct tdr_cmd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 411 */;
	volatile struct iasetup_cmd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 410 */;
	volatile struct configure_cmd_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 409 */;
	int __init cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 343 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 332 */;
	void __iomem *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 328 */;
	struct net_device *__init cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 279 */;
	struct scb_struct cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 276 */;
	struct scp_struct cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 258 */;
	struct iscp_struct cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 255 */;
	struct scb_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 255 */;
	char *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 255 */;
	struct iscp_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 254 */;
	struct scp_struct *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 253 */;
	struct priv *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 248 */;
	struct net_device *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 246 */;
	void cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 246 */;
	unsigned long cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 214 */;
	struct priv cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 209 */;
	unsigned cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 207 */;
	void *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 138 */(struct net_device *dev,
									 void *ptr);
	void cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 136 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 135 */(struct net_device *dev,
								       char *where,
								       unsigned size);
	int cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 134 */(struct net_device *dev);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 126 */(struct net_device *dev);
	netdev_tx_t cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 124 */(struct sk_buff *,
									       struct net_device *);
	irqreturn_t cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 121 */(int irq,
									       void *dev_id);
	int cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 120 */(struct net_device *dev,
								       int ioaddr);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 1117 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/i825xx/sun3_82586.c 1006 */;
	struct priv {
		unsigned long base;
		char *memtop;
		long int lock;
		int reseted;
		volatile struct rfd_struct *rfd_last,*rfd_top,*rfd_first;
		volatile struct scp_struct *scp;
		volatile struct iscp_struct *iscp;
		volatile struct scb_struct *scb;
		volatile struct tbd_struct *xmit_buffs[NUM_XMIT_BUFFS];
		volatile struct transmit_cmd_struct *xmit_cmds[NUM_XMIT_BUFFS];
#if (NUM_XMIT_BUFFS == 1)
		volatile struct nop_cmd_struct *nop_cmds[2];
#else
		volatile struct nop_cmd_struct *nop_cmds[NUM_XMIT_BUFFS];
#endif
		volatile int nop_point,num_recv_buffs;
		volatile char *xmit_cbuffs[NUM_XMIT_BUFFS];
		volatile int xmit_count,xmit_last;
	} cocci_id/*  1 */;
}
