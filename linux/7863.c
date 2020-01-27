cocci_test_suite() {
	struct fr_hdr *cocci_id/* drivers/net/wan/hdlc_fr.c 870 */;
	u32 cocci_id/* drivers/net/wan/hdlc_fr.c 791 */;
	struct frad_state *cocci_id/* drivers/net/wan/hdlc_fr.c 600 */;
	struct timer_list *cocci_id/* drivers/net/wan/hdlc_fr.c 598 */;
	u8 cocci_id/* drivers/net/wan/hdlc_fr.c 460 */;
	netdev_tx_t cocci_id/* drivers/net/wan/hdlc_fr.c 409 */;
	fr_proto_pvc_info cocci_id/* drivers/net/wan/hdlc_fr.c 384 */;
	struct sk_buff *cocci_id/* drivers/net/wan/hdlc_fr.c 277 */;
	struct sk_buff **cocci_id/* drivers/net/wan/hdlc_fr.c 274 */;
	struct net_device **cocci_id/* drivers/net/wan/hdlc_fr.c 264 */;
	struct pvc_device **cocci_id/* drivers/net/wan/hdlc_fr.c 247 */;
	void cocci_id/* drivers/net/wan/hdlc_fr.c 245 */;
	hdlc_device *cocci_id/* drivers/net/wan/hdlc_fr.c 193 */;
	u16 cocci_id/* drivers/net/wan/hdlc_fr.c 191 */;
	struct pvc_device *cocci_id/* drivers/net/wan/hdlc_fr.c 191 */;
	struct net_device *cocci_id/* drivers/net/wan/hdlc_fr.c 191 */;
	u8 *cocci_id/* drivers/net/wan/hdlc_fr.c 162 */;
	int cocci_id/* drivers/net/wan/hdlc_fr.c 153 */(struct net_device *dev,
							struct ifreq *ifr);
	struct frad_state {
		fr_proto settings;
		struct pvc_device *first_pvc;
		int dce_pvc_count;
		struct timer_list timer;
		struct net_device *dev;
		unsigned long last_poll;
		int reliable;
		int dce_changed;
		int request;
		int fullrep_sent;
		u32 last_errors;
		u8 n391cnt;
		u8 txseq;
		u8 rxseq;
	} cocci_id/* drivers/net/wan/hdlc_fr.c 134 */;
	void __exit cocci_id/* drivers/net/wan/hdlc_fr.c 1284 */;
	int __init cocci_id/* drivers/net/wan/hdlc_fr.c 1277 */;
	struct frad_state cocci_id/* drivers/net/wan/hdlc_fr.c 1232 */;
	fr_proto_pvc cocci_id/* drivers/net/wan/hdlc_fr.c 1183 */;
	const size_t cocci_id/* drivers/net/wan/hdlc_fr.c 1180 */;
	fr_proto cocci_id/* drivers/net/wan/hdlc_fr.c 1180 */;
	fr_proto __user *cocci_id/* drivers/net/wan/hdlc_fr.c 1179 */;
	struct ifreq *cocci_id/* drivers/net/wan/hdlc_fr.c 1177 */;
	struct hdlc_proto cocci_id/* drivers/net/wan/hdlc_fr.c 1166 */;
	struct pvc_device {
		struct net_device *frad;
		struct net_device *main;
		struct net_device *ether;
		struct pvc_device *next;
		int dlci;
		int open_count;
		struct {
			unsigned int new:1;
			unsigned int active:1;
			unsigned int exist:1;
			unsigned int deleted:1;
			unsigned int fecn:1;
			unsigned int becn:1;
			unsigned int bandwidth;
		} state;
	} cocci_id/* drivers/net/wan/hdlc_fr.c 115 */;
	__be16 *cocci_id/* drivers/net/wan/hdlc_fr.c 1089 */;
	unsigned int cocci_id/* drivers/net/wan/hdlc_fr.c 1056 */;
	int cocci_id/* drivers/net/wan/hdlc_fr.c 1056 */;
	const struct net_device_ops cocci_id/* drivers/net/wan/hdlc_fr.c 1049 */;
	struct fr_hdr {
#if defined(__LITTLE_ENDIAN_BITFIELD)
		unsigned ea1:1;
		unsigned cr:1;
		unsigned dlcih:6;
		unsigned ea2:1;
		unsigned de:1;
		unsigned becn:1;
		unsigned fecn:1;
		unsigned dlcil:4;
#else
		unsigned dlcih:6;
		unsigned cr:1;
		unsigned ea1:1;
		unsigned dlcil:4;
		unsigned fecn:1;
		unsigned becn:1;
		unsigned de:1;
		unsigned ea2:1;
#endif
	}__packed cocci_id/*  1 */;
}
