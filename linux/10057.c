cocci_test_suite() {
	u16 cocci_id/* drivers/net/macsec.c 934 */;
	struct macsec_eth_header *cocci_id/* drivers/net/macsec.c 933 */;
	struct macsec_rx_sc_stats {
		__u64 InOctetsValidated;
		__u64 InOctetsDecrypted;
		__u64 InPktsUnchecked;
		__u64 InPktsDelayed;
		__u64 InPktsOK;
		__u64 InPktsInvalid;
		__u64 InPktsLate;
		__u64 InPktsNotValid;
		__u64 InPktsNotUsingSA;
		__u64 InPktsUnusedSA;
	} cocci_id/* drivers/net/macsec.c 90 */;
	u32 cocci_id/* drivers/net/macsec.c 891 */;
	struct crypto_async_request *cocci_id/* drivers/net/macsec.c 883 */;
	struct pcpu_sw_netstats *cocci_id/* drivers/net/macsec.c 875 */;
	struct net_device *cocci_id/* drivers/net/macsec.c 873 */;
	struct macsec_key {
		u8 id[MACSEC_KEYID_LEN];
		struct crypto_aead *tfm;
	} cocci_id/* drivers/net/macsec.c 85 */;
	struct gcm_iv {
		union {
			u8 secure_channel_id[8];
			sci_t sci;
		};
		__be32 pn;
	} cocci_id/* drivers/net/macsec.c 72 */;
	struct ethhdr *cocci_id/* drivers/net/macsec.c 652 */;
	struct scatterlist *cocci_id/* drivers/net/macsec.c 637 */;
	unsigned char *cocci_id/* drivers/net/macsec.c 636 */;
	struct scatterlist cocci_id/* drivers/net/macsec.c 628 */;
	struct aead_request cocci_id/* drivers/net/macsec.c 624 */;
	size_t cocci_id/* drivers/net/macsec.c 620 */;
	struct scatterlist **cocci_id/* drivers/net/macsec.c 617 */;
	unsigned char **cocci_id/* drivers/net/macsec.c 616 */;
	struct crypto_aead *cocci_id/* drivers/net/macsec.c 615 */;
	struct aead_request *cocci_id/* drivers/net/macsec.c 615 */;
	struct pcpu_tx_sc_stats *cocci_id/* drivers/net/macsec.c 566 */;
	struct gcm_iv *cocci_id/* drivers/net/macsec.c 524 */;
	const struct macsec_tx_sc *cocci_id/* drivers/net/macsec.c 450 */;
	const struct macsec_secy *cocci_id/* drivers/net/macsec.c 447 */;
	struct macsec_cb cocci_id/* drivers/net/macsec.c 383 */;
	struct macsec_cb *cocci_id/* drivers/net/macsec.c 381 */;
	struct macsec_tx_sa cocci_id/* drivers/net/macsec.c 368 */;
	void __exit cocci_id/* drivers/net/macsec.c 3552 */;
	struct macsec_tx_sa __rcu *cocci_id/* drivers/net/macsec.c 353 */;
	int __init cocci_id/* drivers/net/macsec.c 3526 */;
	struct notifier_block cocci_id/* drivers/net/macsec.c 3522 */;
	struct notifier_block *cocci_id/* drivers/net/macsec.c 3464 */;
	unsigned long cocci_id/* drivers/net/macsec.c 3464 */;
	bool cocci_id/* drivers/net/macsec.c 3459 */;
	struct macsec_dev cocci_id/* drivers/net/macsec.c 3446 */;
	struct rtnl_link_ops cocci_id/* drivers/net/macsec.c 3444 */;
	u64 cocci_id/* drivers/net/macsec.c 3404 */;
	struct macsec_rx_sa cocci_id/* drivers/net/macsec.c 340 */;
	char cocci_id/* drivers/net/macsec.c 3320 */[DEFAULT_SAK_LEN];
	rx_handler_func_t *cocci_id/* drivers/net/macsec.c 3230 */;
	struct macsec_rx_sc cocci_id/* drivers/net/macsec.c 321 */;
	struct pcpu_tx_sc_stats cocci_id/* drivers/net/macsec.c 3193 */;
	struct rcu_head *cocci_id/* drivers/net/macsec.c 319 */;
	struct pcpu_secy_stats cocci_id/* drivers/net/macsec.c 3189 */;
	u8 cocci_id/* drivers/net/macsec.c 3184 */;
	__be16 cocci_id/* drivers/net/macsec.c 3179 */;
	struct list_head *cocci_id/* drivers/net/macsec.c 3112 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/macsec.c 3077 */;
	struct nlattr *cocci_id/* drivers/net/macsec.c 3075 */[];
	struct macsec_rx_sa __rcu *cocci_id/* drivers/net/macsec.c 306 */;
	const struct nla_policy cocci_id/* drivers/net/macsec.c 2978 */[IFLA_MACSEC_MAX + 1];
	const struct device_type cocci_id/* drivers/net/macsec.c 2974 */;
	const struct net_device_ops cocci_id/* drivers/net/macsec.c 2959 */;
	struct macsec_cb {
		struct aead_request *req;
		union {
			struct macsec_tx_sa *tx_sa;
			struct macsec_rx_sa *rx_sa;
		};
		u8 assoc_num;
		bool valid;
		bool has_sci;
	} cocci_id/* drivers/net/macsec.c 295 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/macsec.c 2923 */;
	struct sockaddr *cocci_id/* drivers/net/macsec.c 2889 */;
	const struct net_device *cocci_id/* drivers/net/macsec.c 285 */;
	netdev_features_t cocci_id/* drivers/net/macsec.c 2793 */;
	struct macsec_rxh_data {
		struct list_head secys;
	} cocci_id/* drivers/net/macsec.c 276 */;
	struct pcpu_sw_netstats cocci_id/* drivers/net/macsec.c 2759 */;
	netdev_tx_t cocci_id/* drivers/net/macsec.c 2707 */;
	struct macsec_dev {
		struct macsec_secy secy;
		struct net_device *real_dev;
		struct pcpu_secy_stats __percpu *stats;
		struct list_head secys;
		struct gro_cells gro_cells;
	} cocci_id/* drivers/net/macsec.c 264 */;
	const struct genl_ops cocci_id/* drivers/net/macsec.c 2633 */[];
	struct pcpu_secy_stats {
		struct macsec_dev_stats stats;
		struct u64_stats_sync syncp;
	} cocci_id/* drivers/net/macsec.c 252 */;
	void *cocci_id/* drivers/net/macsec.c 2415 */;
	struct nlattr *cocci_id/* drivers/net/macsec.c 2413 */;
	struct macsec_tx_sc *cocci_id/* drivers/net/macsec.c 2412 */;
	struct netlink_callback *cocci_id/* drivers/net/macsec.c 2409 */;
	struct macsec_secy {
		struct net_device *netdev;
		unsigned int n_rx_sc;
		sci_t sci;
		u16 key_len;
		u16 icv_len;
		enum macsec_validation_type validate_frames;
		bool operational;
		bool protect_frames;
		bool replay_protect;
		u32 replay_window;
		struct macsec_tx_sc tx_sc;
		struct macsec_rx_sc __rcu *rx_sc;
	} cocci_id/* drivers/net/macsec.c 237 */;
	const struct pcpu_secy_stats *cocci_id/* drivers/net/macsec.c 2308 */;
	struct macsec_dev_stats cocci_id/* drivers/net/macsec.c 2304 */;
	struct pcpu_secy_stats __percpu *cocci_id/* drivers/net/macsec.c 2302 */;
	const struct pcpu_tx_sc_stats *cocci_id/* drivers/net/macsec.c 2268 */;
	struct macsec_tx_sc_stats cocci_id/* drivers/net/macsec.c 2264 */;
	struct pcpu_tx_sc_stats __percpu *cocci_id/* drivers/net/macsec.c 2262 */;
	unsigned int cocci_id/* drivers/net/macsec.c 2206 */;
	const struct pcpu_rx_sc_stats *cocci_id/* drivers/net/macsec.c 2204 */;
	struct macsec_rx_sc_stats cocci_id/* drivers/net/macsec.c 2200 */;
	u64 __bitwise cocci_id/* drivers/net/macsec.c 22 */;
	struct pcpu_rx_sc_stats __percpu *cocci_id/* drivers/net/macsec.c 2198 */;
	const struct macsec_rx_sa_stats *cocci_id/* drivers/net/macsec.c 2178 */;
	struct macsec_rx_sa_stats cocci_id/* drivers/net/macsec.c 2174 */;
	struct macsec_rx_sa_stats __percpu *cocci_id/* drivers/net/macsec.c 2172 */;
	struct sk_buff *cocci_id/* drivers/net/macsec.c 2171 */;
	int cocci_id/* drivers/net/macsec.c 2170 */;
	const struct macsec_tx_sa_stats *cocci_id/* drivers/net/macsec.c 2157 */;
	struct macsec_tx_sa_stats cocci_id/* drivers/net/macsec.c 2153 */;
	struct macsec_tx_sa_stats __percpu *cocci_id/* drivers/net/macsec.c 2151 */;
	struct macsec_tx_sc {
		bool active;
		u8 encoding_sa;
		bool encrypt;
		bool send_sci;
		bool end_station;
		bool scb;
		struct macsec_tx_sa __rcu *sa[MACSEC_NUM_AN];
		struct pcpu_tx_sc_stats __percpu *stats;
	} cocci_id/* drivers/net/macsec.c 209 */;
	struct pcpu_tx_sc_stats {
		struct macsec_tx_sc_stats stats;
		struct u64_stats_sync syncp;
	} cocci_id/* drivers/net/macsec.c 193 */;
	struct macsec_tx_sa {
		struct macsec_key key;
		spinlock_t lock;
		u32 next_pn;
		refcount_t refcnt;
		bool active;
		struct macsec_tx_sa_stats __percpu *stats;
		struct rcu_head rcu;
	} cocci_id/* drivers/net/macsec.c 183 */;
	struct nlattr *cocci_id/* drivers/net/macsec.c 1660 */[MACSEC_SA_ATTR_MAX + 1];
	struct nlattr *cocci_id/* drivers/net/macsec.c 1659 */[MACSEC_RXSC_ATTR_MAX + 1];
	unsigned char cocci_id/* drivers/net/macsec.c 1658 */;
	struct genl_info *cocci_id/* drivers/net/macsec.c 1651 */;
	struct macsec_rx_sc {
		struct macsec_rx_sc __rcu *next;
		sci_t sci;
		bool active;
		struct macsec_rx_sa __rcu *sa[MACSEC_NUM_AN];
		struct pcpu_rx_sc_stats __percpu *stats;
		refcount_t refcnt;
		struct rcu_head rcu_head;
	} cocci_id/* drivers/net/macsec.c 165 */;
	const struct nla_policy cocci_id/* drivers/net/macsec.c 1595 */[NUM_MACSEC_SA_ATTR];
	const struct nla_policy cocci_id/* drivers/net/macsec.c 1590 */[NUM_MACSEC_RXSC_ATTR];
	const struct nla_policy cocci_id/* drivers/net/macsec.c 1584 */[NUM_MACSEC_ATTR];
	u8 *cocci_id/* drivers/net/macsec.c 1560 */;
	struct macsec_rx_sc **cocci_id/* drivers/net/macsec.c 1559 */;
	struct macsec_secy **cocci_id/* drivers/net/macsec.c 1558 */;
	struct net_device **cocci_id/* drivers/net/macsec.c 1557 */;
	struct pcpu_rx_sc_stats {
		struct macsec_rx_sc_stats stats;
		struct u64_stats_sync syncp;
	} cocci_id/* drivers/net/macsec.c 153 */;
	struct macsec_tx_sc **cocci_id/* drivers/net/macsec.c 1489 */;
	const struct nlattr *cocci_id/* drivers/net/macsec.c 1473 */;
	struct nlattr **cocci_id/* drivers/net/macsec.c 1458 */;
	struct net *cocci_id/* drivers/net/macsec.c 1457 */;
	struct genl_family cocci_id/* drivers/net/macsec.c 1455 */;
	struct macsec_tx_sa *cocci_id/* drivers/net/macsec.c 1448 */;
	struct macsec_rx_sa {
		struct macsec_key key;
		spinlock_t lock;
		u32 next_pn;
		refcount_t refcnt;
		bool active;
		struct macsec_rx_sa_stats __percpu *stats;
		struct macsec_rx_sc *sc;
		struct rcu_head rcu;
	} cocci_id/* drivers/net/macsec.c 142 */;
	struct pcpu_rx_sc_stats cocci_id/* drivers/net/macsec.c 1408 */;
	struct macsec_secy *cocci_id/* drivers/net/macsec.c 1397 */;
	struct macsec_rxh_data *cocci_id/* drivers/net/macsec.c 1396 */;
	struct macsec_dev *cocci_id/* drivers/net/macsec.c 1394 */;
	sci_t cocci_id/* drivers/net/macsec.c 1391 */;
	struct macsec_rx_sc *cocci_id/* drivers/net/macsec.c 1391 */;
	struct macsec_rx_sa *cocci_id/* drivers/net/macsec.c 1351 */;
	void cocci_id/* drivers/net/macsec.c 1351 */;
	char *cocci_id/* drivers/net/macsec.c 1330 */;
	struct macsec_dev_stats {
		__u64 OutPktsUntagged;
		__u64 InPktsUntagged;
		__u64 OutPktsTooLong;
		__u64 InPktsNoTag;
		__u64 InPktsBadTag;
		__u64 InPktsUnknownSCI;
		__u64 InPktsNoSCI;
		__u64 InPktsOverrun;
	} cocci_id/* drivers/net/macsec.c 123 */;
	struct macsec_tx_sc_stats {
		__u64 OutPktsProtected;
		__u64 OutPktsEncrypted;
		__u64 OutOctetsProtected;
		__u64 OutOctetsEncrypted;
	} cocci_id/* drivers/net/macsec.c 116 */;
	struct macsec_tx_sa_stats {
		__u32 OutPktsProtected;
		__u32 OutPktsEncrypted;
	} cocci_id/* drivers/net/macsec.c 111 */;
	struct pcpu_rx_sc_stats *cocci_id/* drivers/net/macsec.c 1085 */;
	rx_handler_result_t cocci_id/* drivers/net/macsec.c 1072 */;
	struct sk_buff **cocci_id/* drivers/net/macsec.c 1072 */;
	struct pcpu_secy_stats *cocci_id/* drivers/net/macsec.c 1046 */;
	struct macsec_rx_sa_stats {
		__u32 InPktsOK;
		__u32 InPktsInvalid;
		__u32 InPktsNotValid;
		__u32 InPktsNotUsingSA;
		__u32 InPktsUnusedSA;
	} cocci_id/* drivers/net/macsec.c 103 */;
	struct macsec_eth_header {
		struct ethhdr eth;
		u8 tci_an;
#if defined(__LITTLE_ENDIAN_BITFIELD)
		u8 short_length:6,unused:2;
#elif defined(__BIG_ENDIAN_BITFIELD)
		u8 unused:2,short_length:6;
#else
#error	"Please fix <asm/byteorder.h>"

#endif
		__be32 packet_number;
		u8 secure_channel_id[8];
	}__packed cocci_id/*  1 */;
}
