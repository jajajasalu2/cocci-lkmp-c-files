cocci_test_suite() {
	struct sk_buff *cocci_id/* drivers/net/wan/ixp4xx_hss.c 664 */;
	unsigned int cocci_id/* drivers/net/wan/ixp4xx_hss.c 655 */;
	struct port cocci_id/* drivers/net/wan/ixp4xx_hss.c 653 */;
	struct napi_struct *cocci_id/* drivers/net/wan/ixp4xx_hss.c 651 */;
	void *cocci_id/* drivers/net/wan/ixp4xx_hss.c 639 */;
	struct desc cocci_id/* drivers/net/wan/ixp4xx_hss.c 591 */;
	struct desc *cocci_id/* drivers/net/wan/ixp4xx_hss.c 570 */;
	u8 *cocci_id/* drivers/net/wan/ixp4xx_hss.c 554 */;
	int cocci_id/* drivers/net/wan/ixp4xx_hss.c 554 */;
	const char *cocci_id/* drivers/net/wan/ixp4xx_hss.c 553 */;
	struct net_device *cocci_id/* drivers/net/wan/ixp4xx_hss.c 553 */;
	struct msg cocci_id/* drivers/net/wan/ixp4xx_hss.c 392 */;
	struct msg *cocci_id/* drivers/net/wan/ixp4xx_hss.c 357 */;
	const struct {
		int tx,txdone,rx,rxfree;
	} cocci_id/* drivers/net/wan/ixp4xx_hss.c 327 */[2];
	spinlock_t cocci_id/* drivers/net/wan/ixp4xx_hss.c 325 */;
	struct dma_pool *cocci_id/* drivers/net/wan/ixp4xx_hss.c 324 */;
	struct desc {
		u32 next;
#ifdef __ARMEB__
		u16 buf_len;
		u16 pkt_len;
		u32 data;
		u8 status;
		u8 error_count;
		u16 __reserved;
#else
		u16 pkt_len;
		u16 buf_len;
		u32 data;
		u16 __reserved;
		u8 error_count;
		u8 status;
#endif
		u32 __reserved1[4];
	} cocci_id/* drivers/net/wan/ixp4xx_hss.c 289 */;
	struct msg {
#ifdef __ARMEB__
		u8 cmd,unused,hss_port,index;
		union {
			struct {
				u8 data8a,data8b,data8c,data8d;
			};
			struct {
				u16 data16a,data16b;
			};
			struct {
				u32 data32;
			};
		};
#else
		u8 index,hss_port,unused,cmd;
		union {
			struct {
				u8 data8d,data8c,data8b,data8a;
			};
			struct {
				u16 data16b,data16a;
			};
			struct {
				u32 data32;
			};
		};
#endif
	} cocci_id/* drivers/net/wan/ixp4xx_hss.c 270 */;
	struct port {
		struct device *dev;
		struct npe *npe;
		struct net_device *netdev;
		struct napi_struct napi;
		struct hss_plat_info *plat;
		buffer_t *rx_buff_tab[RX_DESCS],*tx_buff_tab[TX_DESCS];
		struct desc *desc_tab;
		u32 desc_tab_phys;
		unsigned int id;
		unsigned int clock_type,clock_rate,loopback;
		unsigned int initialized,carrier;
		u8 hdlc_cfg;
		u32 clock_reg;
	} cocci_id/* drivers/net/wan/ixp4xx_hss.c 253 */;
	void cocci_id/* drivers/net/wan/ixp4xx_hss.c 248 */;
	struct sk_buff cocci_id/* drivers/net/wan/ixp4xx_hss.c 244 */;
	void __exit cocci_id/* drivers/net/wan/ixp4xx_hss.c 1405 */;
	int __init cocci_id/* drivers/net/wan/ixp4xx_hss.c 1393 */;
	struct platform_driver cocci_id/* drivers/net/wan/ixp4xx_hss.c 1387 */;
	hdlc_device *cocci_id/* drivers/net/wan/ixp4xx_hss.c 1329 */;
	struct platform_device *cocci_id/* drivers/net/wan/ixp4xx_hss.c 1325 */;
	const struct net_device_ops cocci_id/* drivers/net/wan/ixp4xx_hss.c 1318 */;
	sync_serial_settings __user *cocci_id/* drivers/net/wan/ixp4xx_hss.c 1246 */;
	const size_t cocci_id/* drivers/net/wan/ixp4xx_hss.c 1244 */;
	sync_serial_settings cocci_id/* drivers/net/wan/ixp4xx_hss.c 1244 */;
	struct ifreq *cocci_id/* drivers/net/wan/ixp4xx_hss.c 1242 */;
	u64 cocci_id/* drivers/net/wan/ixp4xx_hss.c 1189 */;
	u32 *cocci_id/* drivers/net/wan/ixp4xx_hss.c 1186 */;
	u32 cocci_id/* drivers/net/wan/ixp4xx_hss.c 1185 */;
	unsigned short cocci_id/* drivers/net/wan/ixp4xx_hss.c 1163 */;
	unsigned long cocci_id/* drivers/net/wan/ixp4xx_hss.c 1111 */;
	buffer_t *cocci_id/* drivers/net/wan/ixp4xx_hss.c 1017 */;
	struct port *cocci_id/* drivers/net/wan/ixp4xx_hss.c 1010 */;
}
