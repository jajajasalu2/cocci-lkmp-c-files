cocci_test_suite() {
	xfrm_address_t **cocci_id/* net/xfrm/xfrm_user.c 96 */;
	enum xfrm_attr_type_t cocci_id/* net/xfrm/xfrm_user.c 95 */;
	struct xfrm_user_offload *cocci_id/* net/xfrm/xfrm_user.c 835 */;
	struct xfrm_state_offload *cocci_id/* net/xfrm/xfrm_user.c 833 */;
	struct xfrm_sec_ctx *cocci_id/* net/xfrm/xfrm_user.c 812 */;
	struct xfrm_dump_info {
		struct sk_buff *in_skb;
		struct sk_buff *out_skb;
		u32 nlmsg_seq;
		u16 nlmsg_flags;
	} cocci_id/* net/xfrm/xfrm_user.c 805 */;
	struct xfrm_usersa_id *cocci_id/* net/xfrm/xfrm_user.c 756 */;
	struct xfrm_mark *cocci_id/* net/xfrm/xfrm_user.c 556 */;
	struct xfrm_lifetime_cur *cocci_id/* net/xfrm/xfrm_user.c 541 */;
	struct xfrm_replay_state *cocci_id/* net/xfrm/xfrm_user.c 534 */;
	unsigned int cocci_id/* net/xfrm/xfrm_user.c 499 */;
	struct xfrm_usersa_info *cocci_id/* net/xfrm/xfrm_user.c 493 */;
	struct xfrm_replay_state_esn **cocci_id/* net/xfrm/xfrm_user.c 449 */;
	struct xfrm_algo_desc *cocci_id/* net/xfrm/xfrm_user.c 402 */;
	struct xfrm_algo_aead *cocci_id/* net/xfrm/xfrm_user.c 401 */;
	struct xfrm_state *cocci_id/* net/xfrm/xfrm_user.c 399 */;
	struct nlattr *cocci_id/* net/xfrm/xfrm_user.c 399 */;
	int cocci_id/* net/xfrm/xfrm_user.c 399 */;
	struct xfrm_algo_auth *cocci_id/* net/xfrm/xfrm_user.c 343 */;
	struct xfrm_algo *cocci_id/* net/xfrm/xfrm_user.c 342 */;
	u8 *cocci_id/* net/xfrm/xfrm_user.c 339 */;
	struct xfrm_algo_auth **cocci_id/* net/xfrm/xfrm_user.c 339 */;
	void __exit cocci_id/* net/xfrm/xfrm_user.c 3373 */;
	int __init cocci_id/* net/xfrm/xfrm_user.c 3358 */;
	struct pernet_operations cocci_id/* net/xfrm/xfrm_user.c 3353 */;
	struct list_head *cocci_id/* net/xfrm/xfrm_user.c 3343 */;
	void __net_exit cocci_id/* net/xfrm/xfrm_user.c 3343 */;
	struct netlink_kernel_cfg cocci_id/* net/xfrm/xfrm_user.c 3330 */;
	int __net_init cocci_id/* net/xfrm/xfrm_user.c 3327 */;
	struct xfrm_mgr cocci_id/* net/xfrm/xfrm_user.c 3316 */;
	bool cocci_id/* net/xfrm/xfrm_user.c 3311 */;
	struct xfrm_user_mapping *cocci_id/* net/xfrm/xfrm_user.c 3265 */;
	__be16 cocci_id/* net/xfrm/xfrm_user.c 3263 */;
	xfrm_address_t *cocci_id/* net/xfrm/xfrm_user.c 3263 */;
	struct xfrm_user_mapping cocci_id/* net/xfrm/xfrm_user.c 3259 */;
	struct xfrm_user_report *cocci_id/* net/xfrm/xfrm_user.c 3219 */;
	struct xfrm_selector *cocci_id/* net/xfrm/xfrm_user.c 3217 */;
	struct xfrm_user_report cocci_id/* net/xfrm/xfrm_user.c 3213 */;
	struct xfrm_user_polexpire *cocci_id/* net/xfrm/xfrm_user.c 3047 */;
	struct xfrm_user_polexpire cocci_id/* net/xfrm/xfrm_user.c 3037 */;
	struct sock *cocci_id/* net/xfrm/xfrm_user.c 2978 */;
	struct nlmsghdr *cocci_id/* net/xfrm/xfrm_user.c 2923 */;
	struct xfrm_user_acquire *cocci_id/* net/xfrm/xfrm_user.c 2922 */;
	__u32 cocci_id/* net/xfrm/xfrm_user.c 2921 */;
	struct xfrm_tmpl *cocci_id/* net/xfrm/xfrm_user.c 2919 */;
	struct xfrm_policy *cocci_id/* net/xfrm/xfrm_user.c 2919 */;
	struct sk_buff *cocci_id/* net/xfrm/xfrm_user.c 2918 */;
	struct xfrm_mark cocci_id/* net/xfrm/xfrm_user.c 2913 */;
	struct xfrm_user_acquire cocci_id/* net/xfrm/xfrm_user.c 2911 */;
	struct xfrm_algo_desc *(*cocci_id/* net/xfrm/xfrm_user.c 289 */)(const char *,
									 int);
	struct xfrm_algo **cocci_id/* net/xfrm/xfrm_user.c 288 */;
	struct xfrm_algo cocci_id/* net/xfrm/xfrm_user.c 2787 */;
	struct xfrm_usersa_flush cocci_id/* net/xfrm/xfrm_user.c 2761 */;
	typeof(*ue) cocci_id/* net/xfrm/xfrm_user.c 2708 */;
	struct xfrm_user_expire *cocci_id/* net/xfrm/xfrm_user.c 2696 */;
	struct xfrm_user_expire cocci_id/* net/xfrm/xfrm_user.c 2690 */;
	struct netlink_dump_control cocci_id/* net/xfrm/xfrm_user.c 2658 */;
	const struct xfrm_link *cocci_id/* net/xfrm/xfrm_user.c 2634 */;
	struct netlink_ext_ack *cocci_id/* net/xfrm/xfrm_user.c 2630 */;
	const struct xfrm_link {
		int (*doit)(struct sk_buff *, struct nlmsghdr *,
			    struct nlattr **);
		int (*start)(struct netlink_callback *);
		int (*dump)(struct sk_buff *, struct netlink_callback *);
		int (*done)(struct netlink_callback *);
		const struct nla_policy *nla_pol;
		int nla_max;
	} cocci_id/* net/xfrm/xfrm_user.c 2592 */[XFRM_NR_MSGTYPES];
	const struct nla_policy cocci_id/* net/xfrm/xfrm_user.c 2587 */[XFRMA_SPD_MAX + 1];
	struct xfrm_user_offload cocci_id/* net/xfrm/xfrm_user.c 2581 */;
	struct xfrm_address_filter cocci_id/* net/xfrm/xfrm_user.c 2580 */;
	struct xfrm_replay_state_esn cocci_id/* net/xfrm/xfrm_user.c 2577 */;
	struct xfrm_sec_ctx cocci_id/* net/xfrm/xfrm_user.c 2565 */;
	struct xfrm_algo_aead cocci_id/* net/xfrm/xfrm_user.c 2559 */;
	struct xfrm_algo_auth cocci_id/* net/xfrm/xfrm_user.c 2558 */;
	struct xfrm_userpolicy_info cocci_id/* net/xfrm/xfrm_user.c 2556 */;
	struct xfrm_usersa_info cocci_id/* net/xfrm/xfrm_user.c 2555 */;
	const int cocci_id/* net/xfrm/xfrm_user.c 2528 */[XFRM_NR_MSGTYPES];
	struct type cocci_id/* net/xfrm/xfrm_user.c 2526 */;
	struct xfrm_userpolicy_id *cocci_id/* net/xfrm/xfrm_user.c 2455 */;
	u8 cocci_id/* net/xfrm/xfrm_user.c 2452 */;
	const struct xfrm_encap_tmpl *cocci_id/* net/xfrm/xfrm_user.c 2452 */;
	const struct xfrm_selector *cocci_id/* net/xfrm/xfrm_user.c 2451 */;
	const struct xfrm_kmaddress *cocci_id/* net/xfrm/xfrm_user.c 2450 */;
	const struct xfrm_migrate *cocci_id/* net/xfrm/xfrm_user.c 2449 */;
	struct xfrm_encap_tmpl cocci_id/* net/xfrm/xfrm_user.c 2444 */;
	struct xfrm_userpolicy_id cocci_id/* net/xfrm/xfrm_user.c 2442 */;
	struct xfrm_user_kmaddress cocci_id/* net/xfrm/xfrm_user.c 2428 */;
	struct xfrm_user_migrate cocci_id/* net/xfrm/xfrm_user.c 2410 */;
	struct xfrm_encap_tmpl *cocci_id/* net/xfrm/xfrm_user.c 2368 */;
	struct xfrm_kmaddress cocci_id/* net/xfrm/xfrm_user.c 2363 */;
	struct xfrm_migrate cocci_id/* net/xfrm/xfrm_user.c 2362 */[XFRM_MAX_DEPTH];
	struct xfrm_user_kmaddress *cocci_id/* net/xfrm/xfrm_user.c 2325 */;
	struct xfrm_user_migrate *cocci_id/* net/xfrm/xfrm_user.c 2321 */;
	struct nlattr **cocci_id/* net/xfrm/xfrm_user.c 2318 */;
	int *cocci_id/* net/xfrm/xfrm_user.c 2318 */;
	struct xfrm_kmaddress *cocci_id/* net/xfrm/xfrm_user.c 2317 */;
	struct xfrm_migrate *cocci_id/* net/xfrm/xfrm_user.c 2316 */;
	struct xfrm_aevent_id *cocci_id/* net/xfrm/xfrm_user.c 1975 */;
	const struct km_event *cocci_id/* net/xfrm/xfrm_user.c 1973 */;
	struct xfrm_lifetime_cur cocci_id/* net/xfrm/xfrm_user.c 1967 */;
	struct xfrm_aevent_id cocci_id/* net/xfrm/xfrm_user.c 1965 */;
	struct xfrm_replay_state cocci_id/* net/xfrm/xfrm_user.c 1963 */;
	struct xfrm_usersa_flush *cocci_id/* net/xfrm/xfrm_user.c 1940 */;
	struct xfrm_dump_info cocci_id/* net/xfrm/xfrm_user.c 1816 */;
	struct xfrm_policy_walk *cocci_id/* net/xfrm/xfrm_user.c 1815 */;
	struct netlink_callback *cocci_id/* net/xfrm/xfrm_user.c 1812 */;
	struct xfrm_dump_info *cocci_id/* net/xfrm/xfrm_user.c 1762 */;
	void *cocci_id/* net/xfrm/xfrm_user.c 1760 */;
	struct xfrm_userpolicy_type cocci_id/* net/xfrm/xfrm_user.c 1744 */;
	struct xfrm_user_tmpl cocci_id/* net/xfrm/xfrm_user.c 1715 */;
	struct xfrm_user_tmpl cocci_id/* net/xfrm/xfrm_user.c 1691 */[XFRM_MAX_DEPTH];
	struct km_event cocci_id/* net/xfrm/xfrm_user.c 1650 */;
	struct xfrm_userpolicy_info *cocci_id/* net/xfrm/xfrm_user.c 1583 */;
	void cocci_id/* net/xfrm/xfrm_user.c 1583 */;
	struct xfrm_userpolicy_type *cocci_id/* net/xfrm/xfrm_user.c 1566 */;
	struct xfrm_user_tmpl *cocci_id/* net/xfrm/xfrm_user.c 1550 */;
	u16 cocci_id/* net/xfrm/xfrm_user.c 1490 */;
	xfrm_address_t cocci_id/* net/xfrm/xfrm_user.c 1476 */;
	struct xfrm_id cocci_id/* net/xfrm/xfrm_user.c 1474 */;
	struct xfrm_user_sec_ctx *cocci_id/* net/xfrm/xfrm_user.c 1456 */;
	struct xfrm_userspi_info *cocci_id/* net/xfrm/xfrm_user.c 1309 */;
	u32 *cocci_id/* net/xfrm/xfrm_user.c 1235 */;
	struct xfrmu_sadhinfo cocci_id/* net/xfrm/xfrm_user.c 1232 */;
	struct xfrmk_sadinfo cocci_id/* net/xfrm/xfrm_user.c 1231 */;
	struct xfrm_replay_state_esn *cocci_id/* net/xfrm/xfrm_user.c 123 */;
	u32 cocci_id/* net/xfrm/xfrm_user.c 1229 */;
	struct net *cocci_id/* net/xfrm/xfrm_user.c 1228 */;
	struct xfrmu_spdhthresh *cocci_id/* net/xfrm/xfrm_user.c 1160 */;
	struct xfrm_user_sec_ctx cocci_id/* net/xfrm/xfrm_user.c 113 */;
	unsigned cocci_id/* net/xfrm/xfrm_user.c 1113 */;
	struct xfrmu_spdhthresh cocci_id/* net/xfrm/xfrm_user.c 1109 */;
	struct xfrmu_spdhinfo cocci_id/* net/xfrm/xfrm_user.c 1108 */;
	struct xfrmu_spdinfo cocci_id/* net/xfrm/xfrm_user.c 1107 */;
	struct xfrmk_spdinfo cocci_id/* net/xfrm/xfrm_user.c 1106 */;
	struct xfrm_address_filter *cocci_id/* net/xfrm/xfrm_user.c 1025 */;
	struct nlattr *cocci_id/* net/xfrm/xfrm_user.c 1024 */[XFRMA_MAX + 1];
	struct xfrm_state_walk cocci_id/* net/xfrm/xfrm_user.c 1015 */;
	struct xfrm_state_walk *cocci_id/* net/xfrm/xfrm_user.c 1012 */;
	const struct nla_policy cocci_id/* net/xfrm/xfrm_user.c 1008 */[XFRMA_MAX + 1];
}
