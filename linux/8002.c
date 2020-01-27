cocci_test_suite() {
	struct s_skfp_ioctl cocci_id/* drivers/net/fddi/skfp/skfddi.c 961 */;
	struct ifreq *cocci_id/* drivers/net/fddi/skfp/skfddi.c 957 */;
	struct sockaddr *cocci_id/* drivers/net/fddi/skfp/skfddi.c 920 */;
	struct fddi_addr *cocci_id/* drivers/net/fddi/skfp/skfddi.c 875 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/fddi/skfp/skfddi.c 849 */;
	struct net_device_stats *cocci_id/* drivers/net/fddi/skfp/skfddi.c 669 */;
	const char *constcocci_id/* drivers/net/fddi/skfp/skfddi.c 66 */;
	irqreturn_t cocci_id/* drivers/net/fddi/skfp/skfddi.c 602 */;
	struct net_device *cocci_id/* drivers/net/fddi/skfp/skfddi.c 545 */;
	struct s_smc cocci_id/* drivers/net/fddi/skfp/skfddi.c 246 */;
	struct pci_driver cocci_id/* drivers/net/fddi/skfp/skfddi.c 2237 */;
	char *cocci_id/* drivers/net/fddi/skfp/skfddi.c 2067 */;
	int cocci_id/* drivers/net/fddi/skfp/skfddi.c 2064 */;
	void __iomem *cocci_id/* drivers/net/fddi/skfp/skfddi.c 204 */;
	const struct pci_device_id *cocci_id/* drivers/net/fddi/skfp/skfddi.c 200 */;
	struct pci_dev *cocci_id/* drivers/net/fddi/skfp/skfddi.c 199 */;
	struct sk_buff *cocci_id/* drivers/net/fddi/skfp/skfddi.c 1836 */;
	dma_addr_t cocci_id/* drivers/net/fddi/skfp/skfddi.c 1696 */;
	__be16 *cocci_id/* drivers/net/fddi/skfp/skfddi.c 1621 */;
	const struct net_device_ops cocci_id/* drivers/net/fddi/skfp/skfddi.c 160 */;
	unsigned char cocci_id/* drivers/net/fddi/skfp/skfddi.c 1524 */[255];
	volatile struct s_smt_fp_txd *cocci_id/* drivers/net/fddi/skfp/skfddi.c 1487 */;
	const struct pci_device_id cocci_id/* drivers/net/fddi/skfp/skfddi.c 148 */[];
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 146 */(struct s_smc *smc,
							      u_short queue);
	volatile struct s_smt_fp_rxd *cocci_id/* drivers/net/fddi/skfp/skfddi.c 1459 */;
	skfddi_priv *cocci_id/* drivers/net/fddi/skfp/skfddi.c 1458 */;
	volatile union s_fp_descr *cocci_id/* drivers/net/fddi/skfp/skfddi.c 1443 */;
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 144 */(struct s_smc *smc,
							      int mode);
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 142 */(struct s_smc *smc,
							      char far *virt,
							      u_long phys,
							      int len,
							      int frame_status);
	u_long cocci_id/* drivers/net/fddi/skfp/skfddi.c 1415 */;
	void *cocci_id/* drivers/net/fddi/skfp/skfddi.c 1415 */;
	int cocci_id/* drivers/net/fddi/skfp/skfddi.c 139 */(struct s_smc *smc,
							     u_char fc,
							     int frag_count,
							     int frame_len,
							     int frame_status);
	int cocci_id/* drivers/net/fddi/skfp/skfddi.c 136 */(struct s_smc *smc);
	u_int cocci_id/* drivers/net/fddi/skfp/skfddi.c 1353 */;
	u_int cocci_id/* drivers/net/fddi/skfp/skfddi.c 135 */(void);
	unsigned int cocci_id/* drivers/net/fddi/skfp/skfddi.c 1342 */;
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 132 */(unsigned char *Data,
							      int length);
	ulong cocci_id/* drivers/net/fddi/skfp/skfddi.c 1316 */;
	int cocci_id/* drivers/net/fddi/skfp/skfddi.c 130 */(struct s_smc *smc,
							     int len, int fc,
							     char *look_ahead,
							     int la_len);
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 128 */(struct s_smc *smc,
							      volatile struct s_smt_fp_rxd *rxd,
							      int frag_count);
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 123 */(struct s_smc *smc,
							      volatile struct s_smt_fp_rxd *rxd,
							      int frag_count,
							      int len);
	struct s_smc *cocci_id/* drivers/net/fddi/skfp/skfddi.c 1227 */;
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 121 */(struct s_smc *smc,
							      volatile struct s_smt_fp_txd *txd);
	unsigned short cocci_id/* drivers/net/fddi/skfp/skfddi.c 1208 */;
	unsigned long cocci_id/* drivers/net/fddi/skfp/skfddi.c 1205 */;
	unsigned char cocci_id/* drivers/net/fddi/skfp/skfddi.c 1203 */;
	unsigned char *cocci_id/* drivers/net/fddi/skfp/skfddi.c 1201 */;
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 1201 */;
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 119 */(struct s_smc *smc,
							      volatile union s_fp_descr *descr,
							      int flag);
	unsigned long cocci_id/* drivers/net/fddi/skfp/skfddi.c 118 */(struct s_smc *smc,
								       void *virt,
								       int len,
								       int flag);
	unsigned long cocci_id/* drivers/net/fddi/skfp/skfddi.c 117 */(struct s_smc *smc,
								       void *virt);
	void *cocci_id/* drivers/net/fddi/skfp/skfddi.c 116 */(struct s_smc *smc,
							       u_int size);
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 111 */(struct s_smc *smc);
	struct s_smt_fp_txd *cocci_id/* drivers/net/fddi/skfp/skfddi.c 1106 */;
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 110 */(unsigned char *frame,
							      unsigned char *hw_addr);
	netdev_tx_t cocci_id/* drivers/net/fddi/skfp/skfddi.c 107 */(struct sk_buff *skb,
								     struct net_device *dev);
	int cocci_id/* drivers/net/fddi/skfp/skfddi.c 106 */(struct net_device *dev,
							     struct ifreq *rq,
							     int cmd);
	int cocci_id/* drivers/net/fddi/skfp/skfddi.c 105 */(struct net_device *dev,
							     void *addr);
	netdev_tx_t cocci_id/* drivers/net/fddi/skfp/skfddi.c 1037 */;
	void cocci_id/* drivers/net/fddi/skfp/skfddi.c 103 */(struct net_device *dev);
	struct net_device_stats *cocci_id/* drivers/net/fddi/skfp/skfddi.c 102 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/fddi/skfp/skfddi.c 101 */(int irq,
								     void *dev_id);
	int cocci_id/* drivers/net/fddi/skfp/skfddi.c 100 */(struct net_device *dev);
}
