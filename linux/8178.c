cocci_test_suite() {
	ulong cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 983 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 973 */;
	u_long cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 913 */;
	u8 cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 824 */;
	void *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 671 */;
	tuple_t *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 670 */;
	resource_size_t cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 647 */;
	int *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 646 */;
	size_t cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 541 */;
	u8 *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 539 */;
	struct local_info cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 482 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 461 */;
	u_char cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 420 */;
	void cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 303 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 301 */(struct net_device *dev,
									int full);
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 299 */;
	int cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 298 */(struct net_device *dev,
								       struct ifreq *rq,
								       int cmd);
	int cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 297 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 296 */(struct net_device *dev,
								       struct ifmap *map);
	void cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 292 */(struct work_struct *work);
	netdev_tx_t cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 289 */(struct sk_buff *skb,
									       struct net_device *dev);
	struct local_info {
		struct net_device *dev;
		struct pcmcia_device *p_dev;
		int card_type;
		int probe_port;
		int silicon;
		int mohawk;
		int dingo;
		int new_mii;
		int modem;
		void __iomem *dingo_ccr;
		unsigned last_ptr_value;
		const char *manf_str;
		struct work_struct tx_timeout_task;
	} cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 269 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 267 */(int irq,
									       void *dev_id);
	void cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 265 */(struct pcmcia_device *p_dev);
	void cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 264 */(struct pcmcia_device *link);
	int cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 262 */(struct pcmcia_device *link);
	void cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 259 */(unsigned int ioaddr,
									u_char phyaddr,
									u_char phyreg,
									unsigned data,
									int len);
	unsigned cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 258 */(unsigned int ioaddr,
									    u_char phyaddr,
									    u_char phyreg);
	void cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 257 */(unsigned int ioaddr,
									unsigned data,
									int len);
	int cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 256 */(unsigned int ioaddr);
	void cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 255 */(unsigned int ioaddr,
									unsigned data);
	void cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 254 */(unsigned int ioaddr);
	const char *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 210 */[];
	enum xirc_cmd{Transmit=0x01, EnableRecv=0x04, DisableRecv=0x08, Abort=0x10, Online=0x20, IntrAck=0x40, Offline=0x80,} cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 184 */;
	int cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1782 */[10];
	int __init cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1778 */;
	struct pcmcia_driver cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1766 */;
	const struct pcmcia_device_id cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1739 */[];
	void cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1700 */;
	enum xirc_ecr{FullDuplex=0x04, LongTPMode=0x08, DisablePolCor=0x10, DisableLinkPulse=0x20, DisableAutoTx=0x40,} cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 155 */;
	unsigned cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1474 */;
	enum xirc_rsr{PhyPkt=0x01, BrdcstPkt=0x02, PktTooLong=0x04, AlignErr=0x10, CRCErr=0x20, PktRxOk=0x80,} cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 144 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1425 */;
	unsigned int cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1424 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1421 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1409 */;
	struct pcmcia_device *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1390 */;
	struct local_info *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1364 */;
	struct net_device *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1362 */;
	struct ifmap *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1362 */;
	int cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1361 */;
	struct set_address_info cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1304 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1303 */;
	enum xirc_isr{TxBufOvr=0x01, PktTxed=0x02, MACIntr=0x04, TxResGrant=0x08, RxFullPkt=0x20, RxPktRej=0x40, ForcedIntr=0x80,} cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 129 */;
	struct set_address_info *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1276 */;
	char *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1276 */;
	struct set_address_info {
		int reg_nr;
		int page_nr;
		int mohawk;
		unsigned int ioaddr;
	} cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1269 */;
	u_short cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1243 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1215 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1214 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1194 */;
	enum xirc_esr{FullPktRcvd=0x01, PktRejected=0x04, TxPktPend=0x08, IncorPolarity=0x10, MediaSelect=0x20,} cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 119 */;
	enum xirc_cr{TransmitPacket=0x01, SoftReset=0x02, EnableIntr=0x04, ForceIntr=0x08, ClearTxFIFO=0x10, ClearRxOvrun=0x20, RestartTx=0x40,} cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 109 */;
	u_char *cocci_id/* drivers/net/ethernet/xircom/xirc2ps_cs.c 1056 */;
}
