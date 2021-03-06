cocci_test_suite() {
	struct sockaddr *cocci_id/* net/key/af_key.c 929 */;
	struct xfrm_algo_desc *cocci_id/* net/key/af_key.c 858 */;
	struct sadb_x_nat_t_port cocci_id/* net/key/af_key.c 825 */;
	struct sadb_x_nat_t_type cocci_id/* net/key/af_key.c 824 */;
	struct sadb_key cocci_id/* net/key/af_key.c 812 */;
	struct sadb_x_sec_ctx cocci_id/* net/key/af_key.c 801 */;
	struct sadb_x_sa2 cocci_id/* net/key/af_key.c 797 */;
	struct sadb_address cocci_id/* net/key/af_key.c 795 */;
	struct sadb_lifetime cocci_id/* net/key/af_key.c 792 */;
	struct sadb_sa cocci_id/* net/key/af_key.c 791 */;
	struct sadb_msg cocci_id/* net/key/af_key.c 791 */;
	struct xfrm_encap_tmpl *cocci_id/* net/key/af_key.c 781 */;
	struct xfrm_sec_ctx *cocci_id/* net/key/af_key.c 775 */;
	struct sadb_x_sec_ctx *cocci_id/* net/key/af_key.c 774 */;
	struct sadb_x_sa2 *cocci_id/* net/key/af_key.c 773 */;
	struct sadb_key *cocci_id/* net/key/af_key.c 772 */;
	struct sadb_address *cocci_id/* net/key/af_key.c 771 */;
	struct sadb_lifetime *cocci_id/* net/key/af_key.c 770 */;
	struct sadb_sa *cocci_id/* net/key/af_key.c 769 */;
	struct sadb_msg *cocci_id/* net/key/af_key.c 768 */;
	int cocci_id/* net/key/af_key.c 765 */;
	const struct xfrm_state *cocci_id/* net/key/af_key.c 764 */;
	struct sk_buff *cocci_id/* net/key/af_key.c 764 */;
	const struct sock *cocci_id/* net/key/af_key.c 74 */;
	const xfrm_address_t *cocci_id/* net/key/af_key.c 734 */;
	const struct sockaddr_in6 *cocci_id/* net/key/af_key.c 684 */;
	const struct sockaddr_in *cocci_id/* net/key/af_key.c 680 */;
	int cocci_id/* net/key/af_key.c 65 */(struct sockaddr *sa,
					      int ext_len,
					      xfrm_address_t *saddr,
					      xfrm_address_t *daddr,
					      u16 *family);
	struct in6_addr cocci_id/* net/key/af_key.c 642 */;
	const struct sockaddr *cocci_id/* net/key/af_key.c 631 */;
	struct sockaddr_in6 cocci_id/* net/key/af_key.c 624 */;
	struct sockaddr_in cocci_id/* net/key/af_key.c 621 */;
	sa_family_t cocci_id/* net/key/af_key.c 617 */;
	uint16_t cocci_id/* net/key/af_key.c 520 */;
	const struct sadb_ext *cocci_id/* net/key/af_key.c 519 */;
	const char *cocci_id/* net/key/af_key.c 513 */;
	char *cocci_id/* net/key/af_key.c 513 */;
	void **cocci_id/* net/key/af_key.c 511 */;
	struct pfkey_sock {
		struct sock sk;
		int registered;
		int promisc;
		struct {
			uint8_t msg_version;
			uint32_t msg_portid;
			int (*dump)(struct pfkey_sock *sk);
			void (*done)(struct pfkey_sock *sk);
			union {
				struct xfrm_policy_walk policy;
				struct xfrm_state_walk state;
			} u;
			struct sk_buff *skb;
		} dump;
		struct mutex dump_lock;
	} cocci_id/* net/key/af_key.c 45 */;
	const struct xfrm_mark cocci_id/* net/key/af_key.c 44 */;
	typeof(*addr) cocci_id/* net/key/af_key.c 391 */;
	int __init cocci_id/* net/key/af_key.c 3879 */;
	void __exit cocci_id/* net/key/af_key.c 3871 */;
	struct netns_pfkey cocci_id/* net/key/af_key.c 3868 */;
	struct pernet_operations cocci_id/* net/key/af_key.c 3864 */;
	struct xfrm_mgr cocci_id/* net/key/af_key.c 3832 */;
	void __net_exit cocci_id/* net/key/af_key.c 3817 */;
	struct seq_net_private cocci_id/* net/key/af_key.c 3810 */;
	struct proc_dir_entry *cocci_id/* net/key/af_key.c 3807 */;
	int __net_init cocci_id/* net/key/af_key.c 3805 */;
	const void *cocci_id/* net/key/af_key.c 380 */;
	const struct seq_operations cocci_id/* net/key/af_key.c 3798 */;
	loff_t *cocci_id/* net/key/af_key.c 3784 */;
	struct seq_file *cocci_id/* net/key/af_key.c 3784 */;
	struct sadb_x_filter cocci_id/* net/key/af_key.c 376 */;
	const struct net_proto_family cocci_id/* net/key/af_key.c 3749 */;
	struct msghdr *cocci_id/* net/key/af_key.c 3684 */;
	size_t cocci_id/* net/key/af_key.c 3684 */;
	struct sadb_x_kmprivate cocci_id/* net/key/af_key.c 367 */;
	struct sadb_spirange cocci_id/* net/key/af_key.c 366 */;
	struct sadb_sens cocci_id/* net/key/af_key.c 362 */;
	struct sadb_ident cocci_id/* net/key/af_key.c 360 */;
	struct netns_pfkey {
		struct hlist_head table;
		atomic_t socks_nr;
	} cocci_id/* net/key/af_key.c 36 */;
	struct sadb_x_ipsecrequest cocci_id/* net/key/af_key.c 3561 */;
	struct sadb_x_kmaddress cocci_id/* net/key/af_key.c 3545 */;
	const struct xfrm_encap_tmpl *cocci_id/* net/key/af_key.c 3526 */;
	const struct xfrm_kmaddress *cocci_id/* net/key/af_key.c 3525 */;
	const struct xfrm_migrate *cocci_id/* net/key/af_key.c 3524 */;
	const struct xfrm_selector *cocci_id/* net/key/af_key.c 3523 */;
	uint32_t cocci_id/* net/key/af_key.c 3495 */;
	const u8 cocci_id/* net/key/af_key.c 349 */[];
	__be16 cocci_id/* net/key/af_key.c 3328 */;
	struct xfrm_user_sec_ctx *cocci_id/* net/key/af_key.c 3300 */;
	int *cocci_id/* net/key/af_key.c 3241 */;
	bool cocci_id/* net/key/af_key.c 3114 */;
	atomic_t cocci_id/* net/key/af_key.c 3106 */;
	struct sadb_comb *cocci_id/* net/key/af_key.c 2954 */;
	struct sadb_prop *cocci_id/* net/key/af_key.c 2936 */;
	void cocci_id/* net/key/af_key.c 2934 */;
	struct sadb_prop cocci_id/* net/key/af_key.c 2901 */;
	struct sadb_comb cocci_id/* net/key/af_key.c 2899 */;
	unsigned int cocci_id/* net/key/af_key.c 2869 */;
	const struct xfrm_algo_desc *cocci_id/* net/key/af_key.c 2867 */;
	const struct xfrm_tmpl *cocci_id/* net/key/af_key.c 2866 */;
	void *cocci_id/* net/key/af_key.c 2823 */[SADB_EXT_MAX];
	const pfkey_handler cocci_id/* net/key/af_key.c 2795 */[SADB_MAX + 1];
	int (*cocci_id/* net/key/af_key.c 2793 */)(struct sock *sk,
						   struct sk_buff *skb,
						   const struct sadb_msg *hdr,
						   void *const *ext_hdrs);
	uint8_t cocci_id/* net/key/af_key.c 2760 */;
	struct xfrm_kmaddress cocci_id/* net/key/af_key.c 2548 */;
	struct xfrm_migrate cocci_id/* net/key/af_key.c 2547 */[XFRM_MAX_DEPTH];
	struct xfrm_selector cocci_id/* net/key/af_key.c 2546 */;
	struct sadb_x_kmaddress *cocci_id/* net/key/af_key.c 2543 */;
	u8 *cocci_id/* net/key/af_key.c 2506 */;
	struct xfrm_migrate *cocci_id/* net/key/af_key.c 2487 */;
	struct sadb_x_ipsecrequest *cocci_id/* net/key/af_key.c 2486 */;
	u16 *cocci_id/* net/key/af_key.c 2465 */;
	xfrm_address_t *cocci_id/* net/key/af_key.c 2464 */;
	struct sock *cocci_id/* net/key/af_key.c 2426 */;
	struct netns_pfkey *cocci_id/* net/key/af_key.c 223 */;
	const struct km_event *cocci_id/* net/key/af_key.c 2205 */;
	const struct xfrm_policy *cocci_id/* net/key/af_key.c 2055 */;
	struct sadb_x_policy cocci_id/* net/key/af_key.c 1988 */;
	struct sadb_x_policy *cocci_id/* net/key/af_key.c 1985 */;
	struct xfrm_tmpl *cocci_id/* net/key/af_key.c 1940 */;
	struct xfrm_policy_walk cocci_id/* net/key/af_key.c 1917 */;
	struct net *cocci_id/* net/key/af_key.c 1915 */;
	u32 cocci_id/* net/key/af_key.c 1906 */;
	u32 *cocci_id/* net/key/af_key.c 1906 */;
	struct xfrm_policy *cocci_id/* net/key/af_key.c 1903 */;
	void *cocci_id/* net/key/af_key.c 1903 */;
	xfrm_address_t cocci_id/* net/key/af_key.c 1859 */;
	struct sadb_x_filter *cocci_id/* net/key/af_key.c 1850 */;
	struct xfrm_address_filter *cocci_id/* net/key/af_key.c 1834 */;
	u8 cocci_id/* net/key/af_key.c 1833 */;
	struct pfkey_sock *cocci_id/* net/key/af_key.c 1790 */;
	struct xfrm_state *cocci_id/* net/key/af_key.c 1788 */;
	struct sadb_alg *cocci_id/* net/key/af_key.c 1646 */;
	struct sadb_supported *cocci_id/* net/key/af_key.c 1645 */;
	struct sadb_supported cocci_id/* net/key/af_key.c 1624 */;
	struct sadb_alg cocci_id/* net/key/af_key.c 1623 */;
	gfp_t cocci_id/* net/key/af_key.c 1615 */;
	const struct sadb_msg *cocci_id/* net/key/af_key.c 1614 */;
	__u8 cocci_id/* net/key/af_key.c 1581 */;
	struct km_event cocci_id/* net/key/af_key.c 1506 */;
	void *const *cocci_id/* net/key/af_key.c 1414 */;
	struct socket *cocci_id/* net/key/af_key.c 138 */;
	struct sockaddr_in6 *cocci_id/* net/key/af_key.c 1355 */;
	struct sockaddr_in *cocci_id/* net/key/af_key.c 1350 */;
	struct pfkey_sock cocci_id/* net/key/af_key.c 135 */;
	unsigned short cocci_id/* net/key/af_key.c 1323 */;
	struct proto cocci_id/* net/key/af_key.c 132 */;
	struct sadb_spirange *cocci_id/* net/key/af_key.c 1316 */;
	const struct sadb_x_nat_t_port *cocci_id/* net/key/af_key.c 1279 */;
	const struct sadb_x_nat_t_type *cocci_id/* net/key/af_key.c 1265 */;
	const struct sadb_address *cocci_id/* net/key/af_key.c 1254 */;
	const struct sadb_x_sa2 *cocci_id/* net/key/af_key.c 1243 */;
	const struct proto_ops cocci_id/* net/key/af_key.c 113 */;
	const struct sadb_x_sec_ctx *cocci_id/* net/key/af_key.c 1071 */;
	const struct sadb_key *cocci_id/* net/key/af_key.c 1070 */;
	const struct sadb_sa *cocci_id/* net/key/af_key.c 1069 */;
	const struct sadb_lifetime *cocci_id/* net/key/af_key.c 1068 */;
	struct sadb_x_nat_t_port *cocci_id/* net/key/af_key.c 1004 */;
	struct sadb_x_nat_t_type *cocci_id/* net/key/af_key.c 1003 */;
}
