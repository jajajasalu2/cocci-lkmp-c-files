cocci_test_suite() {
	struct tx_header {
		__le16 len;
#define TX_HDR_PORT_0 0x1
#define TX_HDR_PORT_1 0x2
		u8 port;
		u8 ts_enable;
#define TX_HDR_SENT 0x1
		__le32 sent;
		u8 timestamp[8];
	}__packed cocci_id/* drivers/net/ethernet/ec_bhf.c 92 */;
	struct rx_desc {
		struct rx_header header;
		u8 data[PKT_PAYLOAD_SIZE];
	}__packed cocci_id/* drivers/net/ethernet/ec_bhf.c 87 */;
	struct rx_header {
#define RXHDR_NEXT_ADDR_MASK 0xffffffu
#define RXHDR_NEXT_VALID (1u << 31)
			__le32 next;
#define RXHDR_NEXT_RECV_FLAG 0x1
		__le32 recv;
#define RXHDR_LEN_MASK 0xfffu
		__le16 len;
		__le16 port;
		__le32 reserved;
		u8 timestamp[8];
	}__packed cocci_id/* drivers/net/ethernet/ec_bhf.c 73 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/ec_bhf.c 67 */[];
	struct pci_driver cocci_id/* drivers/net/ethernet/ec_bhf.c 588 */;
	struct ec_bhf_priv cocci_id/* drivers/net/ethernet/ec_bhf.c 526 */;
	void __iomem *cocci_id/* drivers/net/ethernet/ec_bhf.c 481 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/ec_bhf.c 477 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/ec_bhf.c 477 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/ec_bhf.c 468 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/ec_bhf.c 453 */;
	struct net_device *cocci_id/* drivers/net/ethernet/ec_bhf.c 452 */;
	struct tx_desc cocci_id/* drivers/net/ethernet/ec_bhf.c 409 */;
	struct rx_desc cocci_id/* drivers/net/ethernet/ec_bhf.c 401 */;
	u32 cocci_id/* drivers/net/ethernet/ec_bhf.c 325 */;
	struct device *cocci_id/* drivers/net/ethernet/ec_bhf.c 324 */;
	struct bhf_dma *cocci_id/* drivers/net/ethernet/ec_bhf.c 319 */;
	int cocci_id/* drivers/net/ethernet/ec_bhf.c 318 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/ec_bhf.c 282 */;
	u16 cocci_id/* drivers/net/ethernet/ec_bhf.c 259 */;
	unsigned cocci_id/* drivers/net/ethernet/ec_bhf.c 254 */;
	enum hrtimer_restart cocci_id/* drivers/net/ethernet/ec_bhf.c 237 */;
	struct hrtimer *cocci_id/* drivers/net/ethernet/ec_bhf.c 237 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/ec_bhf.c 213 */;
	struct rx_header cocci_id/* drivers/net/ethernet/ec_bhf.c 211 */;
	u8 *cocci_id/* drivers/net/ethernet/ec_bhf.c 201 */;
	struct rx_desc *cocci_id/* drivers/net/ethernet/ec_bhf.c 199 */;
	struct ec_bhf_priv *cocci_id/* drivers/net/ethernet/ec_bhf.c 199 */;
	void cocci_id/* drivers/net/ethernet/ec_bhf.c 199 */;
	struct tx_desc *cocci_id/* drivers/net/ethernet/ec_bhf.c 178 */;
	struct ec_bhf_priv {
		struct net_device *net_dev;
		struct pci_dev *dev;
		void __iomem *io;
		void __iomem *dma_io;
		struct hrtimer hrtimer;
		int tx_dma_chan;
		int rx_dma_chan;
		void __iomem *ec_io;
		void __iomem *fifo_io;
		void __iomem *mii_io;
		void __iomem *mac_io;
		struct bhf_dma rx_buf;
		struct rx_desc *rx_descs;
		int rx_dnext;
		int rx_dcount;
		struct bhf_dma tx_buf;
		struct tx_desc *tx_descs;
		int tx_dcount;
		int tx_dnext;
		u64 stat_rx_bytes;
		u64 stat_tx_bytes;
	} cocci_id/* drivers/net/ethernet/ec_bhf.c 122 */;
	struct bhf_dma {
		u8 *buf;
		size_t len;
		dma_addr_t buf_phys;
		u8 *alloc;
		size_t alloc_len;
		dma_addr_t alloc_phys;
	} cocci_id/* drivers/net/ethernet/ec_bhf.c 112 */;
	long cocci_id/* drivers/net/ethernet/ec_bhf.c 110 */;
	struct tx_desc {
		struct tx_header header;
		u8 data[PKT_PAYLOAD_SIZE];
	}__packed cocci_id/* drivers/net/ethernet/ec_bhf.c 103 */;
}
