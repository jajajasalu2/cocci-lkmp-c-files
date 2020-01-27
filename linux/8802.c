cocci_test_suite() {
	enum{ONLY_16BIT_IO=8, ONLY_32BIT_IO=4, FORCE_FDX=0x20, REALTEK_FDX=0x40, HOLTEK_FDX=0x80, STOP_PG_0x60=0x100,} cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 97 */;
	void __exit cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 736 */;
	int __init cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 726 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 713 */;
	pm_message_t cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 680 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 641 */;
	struct ei_device *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 640 */;
	const char cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 64 */[];
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 638 */;
	u32 cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 61 */;
	unsigned long cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 568 */;
	const int cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 565 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 565 */;
	__le16 *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 550 */;
	char *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 521 */;
	long cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 520 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 518 */;
	struct net_device *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 517 */;
	int cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 517 */;
	void cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 517 */;
	u32 *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 504 */;
	struct e8390_pkt_hdr cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 495 */;
	struct e8390_pkt_hdr *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 480 */;
	int cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 38 */[MAX_UNITS];
	struct {
		unsigned char value,offset;
	} cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 313 */[];
	unsigned int cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 225 */;
	unsigned char cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 222 */[32];
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 218 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 203 */;
	struct ne2k_pci_card {
		struct net_device *dev;
		struct pci_dev *pci_dev;
	} cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 183 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 177 */;
	void cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 175 */(struct net_device *dev,
								    const int count,
								    const unsigned char *buf,
								    const int start_page);
	void cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 173 */(struct net_device *dev,
								    int count,
								    struct sk_buff *skb,
								    int ring_offset);
	void cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 171 */(struct net_device *dev,
								    struct e8390_pkt_hdr *hdr,
								    int ring_page);
	void cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 170 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 168 */(struct net_device *dev);
	const struct pci_device_id cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 138 */[];
	struct {
		char *name;
		int flags;
	} cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 119 */[];
	enum ne2k_pci_chipsets{CH_RealTek_RTL_8029=0, CH_Winbond_89C940, CH_Compex_RL2000, CH_KTI_ET32P2, CH_NetVin_NV5000SC, CH_Via_86C926, CH_SureCom_NE34, CH_Winbond_W89C940F, CH_Holtek_HT80232, CH_Holtek_HT80229, CH_Winbond_89C940_8c4a,} cocci_id/* drivers/net/ethernet/8390/ne2k-pci.c 104 */;
}
