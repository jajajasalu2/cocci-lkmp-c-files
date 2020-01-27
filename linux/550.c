cocci_test_suite() {
	struct crypto_report_comp cocci_id/* crypto/crypto_user_base.c 90 */;
	struct crypto_report_cipher cocci_id/* crypto/crypto_user_base.c 74 */;
	void __exit cocci_id/* crypto/crypto_user_base.c 505 */;
	int __init cocci_id/* crypto/crypto_user_base.c 500 */;
	struct pernet_operations cocci_id/* crypto/crypto_user_base.c 495 */;
	struct net *cocci_id/* crypto/crypto_user_base.c 489 */;
	void __net_exit cocci_id/* crypto/crypto_user_base.c 489 */;
	struct netlink_kernel_cfg cocci_id/* crypto/crypto_user_base.c 481 */;
	int __net_init cocci_id/* crypto/crypto_user_base.c 479 */;
	void cocci_id/* crypto/crypto_user_base.c 472 */;
	struct netlink_dump_control cocci_id/* crypto/crypto_user_base.c 450 */;
	unsigned long cocci_id/* crypto/crypto_user_base.c 439 */;
	const struct crypto_link *cocci_id/* crypto/crypto_user_base.c 426 */;
	struct nlattr *cocci_id/* crypto/crypto_user_base.c 425 */[CRYPTOCFGA_MAX + 1];
	struct netlink_ext_ack *cocci_id/* crypto/crypto_user_base.c 422 */;
	const struct crypto_link {
		int (*doit)(struct sk_buff *, struct nlmsghdr *,
			    struct nlattr **);
		int (*dump)(struct sk_buff *, struct netlink_callback *);
		int (*done)(struct netlink_callback *);
	} cocci_id/* crypto/crypto_user_base.c 406 */[CRYPTO_NR_MSGTYPES];
	const struct nla_policy cocci_id/* crypto/crypto_user_base.c 400 */[CRYPTOCFGA_MAX + 1];
	const int cocci_id/* crypto/crypto_user_base.c 391 */[CRYPTO_NR_MSGTYPES];
	struct type cocci_id/* crypto/crypto_user_base.c 389 */;
	struct nlattr *cocci_id/* crypto/crypto_user_base.c 340 */;
	struct crypto_user_alg *cocci_id/* crypto/crypto_user_base.c 339 */;
	struct crypto_alg *cocci_id/* crypto/crypto_user_base.c 338 */;
	const char *cocci_id/* crypto/crypto_user_base.c 337 */;
	struct nlattr **cocci_id/* crypto/crypto_user_base.c 334 */;
	struct sk_buff *cocci_id/* crypto/crypto_user_base.c 333 */;
	struct nlmsghdr *cocci_id/* crypto/crypto_user_base.c 333 */;
	int cocci_id/* crypto/crypto_user_base.c 333 */;
	struct crypto_instance *cocci_id/* crypto/crypto_user_base.c 326 */;
	struct crypto_dump_info {
		struct sk_buff *in_skb;
		struct sk_buff *out_skb;
		u32 nlmsg_seq;
		u16 nlmsg_flags;
	} cocci_id/* crypto/crypto_user_base.c 29 */;
	struct crypto_dump_info cocci_id/* crypto/crypto_user_base.c 228 */;
	size_t cocci_id/* crypto/crypto_user_base.c 227 */;
	const size_t cocci_id/* crypto/crypto_user_base.c 226 */;
	struct netlink_callback *cocci_id/* crypto/crypto_user_base.c 224 */;
	struct crypto_dump_info *cocci_id/* crypto/crypto_user_base.c 155 */;
	struct crypto_report_larval cocci_id/* crypto/crypto_user_base.c 118 */;
}
