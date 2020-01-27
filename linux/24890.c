cocci_test_suite() {
	struct atm_vcc *cocci_id/* net/atm/lec.c 999 */;
	struct socket *cocci_id/* net/atm/lec.c 997 */;
	unsigned int cocci_id/* net/atm/lec.c 997 */;
	const struct seq_operations cocci_id/* net/atm/lec.c 989 */;
	struct lec_arp_table cocci_id/* net/atm/lec.c 980 */;
	void cocci_id/* net/atm/lec.c 98 */(struct lec_priv *priv,
					    const struct atmlec_ioc *ioc_data,
					    struct atm_vcc *vcc,
					    void (*old_push)(struct atm_vcc *vcc, struct sk_buff *skb));
	const char cocci_id/* net/atm/lec.c 969 */[];
	void cocci_id/* net/atm/lec.c 95 */(struct lec_priv *priv,
					    const unsigned char *atm_addr,
					    unsigned long tran_id);
	int cocci_id/* net/atm/lec.c 94 */(struct lec_priv *priv,
					   struct atm_vcc *vcc);
	void cocci_id/* net/atm/lec.c 93 */(struct lec_priv *priv,
					    unsigned long tran_id);
	loff_t cocci_id/* net/atm/lec.c 921 */;
	void cocci_id/* net/atm/lec.c 89 */(struct lec_priv *priv,
					    const unsigned char *mac_addr,
					    const unsigned char *atm_addr,
					    unsigned long remoteflag,
					    unsigned int targetless_le_arp);
	struct hlist_head *cocci_id/* net/atm/lec.c 871 */[];
	loff_t *cocci_id/* net/atm/lec.c 853 */;
	struct lec_state *cocci_id/* net/atm/lec.c 853 */;
	void *cocci_id/* net/atm/lec.c 853 */;
	struct atm_vcc *cocci_id/* net/atm/lec.c 85 */(struct lec_priv *priv,
						       const unsigned char *mac_to_find,
						       int is_rdesc,
						       struct lec_arp_table **ret_entry);
	void cocci_id/* net/atm/lec.c 83 */(struct lec_priv *priv);
	struct lec_state {
		unsigned long flags;
		struct lec_priv *locked;
		struct hlist_node *node;
		struct net_device *dev;
		int itf;
		int arp_table;
		int misc_table;
	} cocci_id/* net/atm/lec.c 822 */;
	void cocci_id/* net/atm/lec.c 81 */(struct lec_priv *priv,
					    struct atm_vcc *vcc,
					    struct sk_buff *skb);
	struct seq_file *cocci_id/* net/atm/lec.c 800 */;
	int cocci_id/* net/atm/lec.c 79 */(struct lec_priv *priv,
					   const unsigned char *atm_addr,
					   unsigned long permanent);
	const char *const cocci_id/* net/atm/lec.c 786 */[];
	int cocci_id/* net/atm/lec.c 76 */(struct net_device *dev,
					   const u8 *lan_dst, const u8 *tlvs,
					   u32 sizeoftlvs);
	int cocci_id/* net/atm/lec.c 74 */(struct net_device *dev,
					   const u8 *dst_mac, int force,
					   u8 **tlvs, u32 *sizeoftlvs);
	void cocci_id/* net/atm/lec.c 72 */(struct net_device *dev,
					    const u8 *mac_address,
					    const u8 *tlvs, u32 sizeoftlvs);
	int cocci_id/* net/atm/lec.c 69 */(struct lec_priv *priv,
					   struct lec_arp_table *to_remove);
	struct atmlec_ioc cocci_id/* net/atm/lec.c 687 */;
	struct lec_arp_table *cocci_id/* net/atm/lec.c 67 */(struct lec_priv *priv,
							     const unsigned char *mac_addr);
	int cocci_id/* net/atm/lec.c 66 */(struct net_device *dev);
	struct atm_skb_data cocci_id/* net/atm/lec.c 659 */;
	netdev_tx_t cocci_id/* net/atm/lec.c 64 */(struct sk_buff *skb,
						   struct net_device *dev);
	__be16 *cocci_id/* net/atm/lec.c 620 */;
	const unsigned char cocci_id/* net/atm/lec.c 566 */[];
	const struct net_device_ops cocci_id/* net/atm/lec.c 558 */;
	atmlec_msg_type cocci_id/* net/atm/lec.c 509 */;
	struct atm_dev cocci_id/* net/atm/lec.c 497 */;
	const struct atmdev_ops cocci_id/* net/atm/lec.c 492 */;
	struct sock *cocci_id/* net/atm/lec.c 443 */;
	unsigned char cocci_id/* net/atm/lec.c 38 */[];
	struct atmlec_msg cocci_id/* net/atm/lec.c 354 */;
	char *cocci_id/* net/atm/lec.c 349 */;
	struct atmlec_msg *cocci_id/* net/atm/lec.c 346 */;
	long cocci_id/* net/atm/lec.c 226 */;
	unsigned char *cocci_id/* net/atm/lec.c 2246 */;
	struct lecdatahdr_8023 *cocci_id/* net/atm/lec.c 2245 */;
	struct lec_vcc_priv cocci_id/* net/atm/lec.c 2153 */;
	netdev_tx_t cocci_id/* net/atm/lec.c 204 */;
	void (*cocci_id/* net/atm/lec.c 1942 */)(struct atm_vcc *vcc,
						 struct sk_buff *skb);
	const struct atmlec_ioc *cocci_id/* net/atm/lec.c 1940 */;
	struct hlist_node *cocci_id/* net/atm/lec.c 1811 */;
	const unsigned char *cocci_id/* net/atm/lec.c 1807 */;
	struct lec_arp_table **cocci_id/* net/atm/lec.c 1714 */;
	struct lec_priv cocci_id/* net/atm/lec.c 1673 */;
	struct work_struct *cocci_id/* net/atm/lec.c 1669 */;
	struct lec_priv *cocci_id/* net/atm/lec.c 1611 */;
	unsigned long cocci_id/* net/atm/lec.c 1610 */;
	bool cocci_id/* net/atm/lec.c 1609 */;
	struct lec_arp_table *cocci_id/* net/atm/lec.c 1609 */;
	struct timer_list *cocci_id/* net/atm/lec.c 1566 */;
	int cocci_id/* net/atm/lec.c 1357 */;
	char cocci_id/* net/atm/lec.c 1356 */[256];
	void cocci_id/* net/atm/lec.c 1353 */;
	const char *cocci_id/* net/atm/lec.c 1336 */;
	unsigned char cocci_id/* net/atm/lec.c 1336 */;
	struct hlist_head *cocci_id/* net/atm/lec.c 1285 */;
	struct net_device *cocci_id/* net/atm/lec.c 126 */[MAX_LEC_ITF];
	struct lec_vcc_priv *cocci_id/* net/atm/lec.c 1259 */;
	unsigned short cocci_id/* net/atm/lec.c 1243 */;
	void cocci_id/* net/atm/lec.c 1230 */(struct timer_list *t);
	unsigned char cocci_id/* net/atm/lec.c 123 */[ETH_ALEN];
	void cocci_id/* net/atm/lec.c 1229 */(struct work_struct *work);
	struct lane2_ops cocci_id/* net/atm/lec.c 117 */;
	u32 cocci_id/* net/atm/lec.c 1165 */;
	const u8 *cocci_id/* net/atm/lec.c 1164 */;
	struct net_device *cocci_id/* net/atm/lec.c 1164 */;
	struct sk_buff *cocci_id/* net/atm/lec.c 1132 */;
	u32 *cocci_id/* net/atm/lec.c 1083 */;
	u8 **cocci_id/* net/atm/lec.c 1083 */;
	void __exit cocci_id/* net/atm/lec.c 1053 */;
	struct lec_state cocci_id/* net/atm/lec.c 1041 */;
	struct proc_dir_entry *cocci_id/* net/atm/lec.c 1038 */;
	int __init cocci_id/* net/atm/lec.c 1035 */;
	struct atm_ioctl cocci_id/* net/atm/lec.c 1030 */;
	void cocci_id/* net/atm/lec.c 103 */(struct lec_priv *priv,
					     struct atm_vcc *vcc);
	void __user *cocci_id/* net/atm/lec.c 1023 */;
}
