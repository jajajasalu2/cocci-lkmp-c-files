cocci_test_suite() {
	int cocci_id/* net/decnet/dn_fib.c 85 */(struct net_device *dev);
	int cocci_id/* net/decnet/dn_fib.c 84 */(__le16 local,
						 struct net_device *dev,
						 int force);
	void __init cocci_id/* net/decnet/dn_fib.c 788 */;
	void __exit cocci_id/* net/decnet/dn_fib.c 779 */;
	struct notifier_block cocci_id/* net/decnet/dn_fib.c 775 */;
	__le16 cocci_id/* net/decnet/dn_fib.c 697 */;
	struct notifier_block *cocci_id/* net/decnet/dn_fib.c 675 */;
	void *cocci_id/* net/decnet/dn_fib.c 675 */;
	unsigned long cocci_id/* net/decnet/dn_fib.c 675 */;
	struct {
		int error;
		u8 scope;
	} cocci_id/* net/decnet/dn_fib.c 65 */[RTN_MAX + 1];
	struct dn_dev *cocci_id/* net/decnet/dn_fib.c 635 */;
	struct dn_ifaddr *cocci_id/* net/decnet/dn_fib.c 618 */;
	void cocci_id/* net/decnet/dn_fib.c 618 */;
	struct {
		struct nlattr hdr;
		u32 oif;
	} cocci_id/* net/decnet/dn_fib.c 578 */;
	struct {
		struct nlattr hdr;
		__le16 prefsrc;
	} cocci_id/* net/decnet/dn_fib.c 572 */;
	struct {
		struct nlattr hdr;
		__le16 dst;
	} cocci_id/* net/decnet/dn_fib.c 566 */;
	struct {
		struct nlmsghdr nlh;
		struct rtmsg rtm;
	} cocci_id/* net/decnet/dn_fib.c 562 */;
	struct nlattr *cocci_id/* net/decnet/dn_fib.c 511 */[RTA_MAX + 1];
	struct rtmsg *cocci_id/* net/decnet/dn_fib.c 510 */;
	struct dn_fib_table *cocci_id/* net/decnet/dn_fib.c 509 */;
	struct net *cocci_id/* net/decnet/dn_fib.c 508 */;
	struct netlink_ext_ack *cocci_id/* net/decnet/dn_fib.c 506 */;
	struct sk_buff *cocci_id/* net/decnet/dn_fib.c 505 */;
	struct nlmsghdr *cocci_id/* net/decnet/dn_fib.c 505 */;
	u8 cocci_id/* net/decnet/dn_fib.c 497 */;
	u32 cocci_id/* net/decnet/dn_fib.c 497 */;
	const struct flowidn *cocci_id/* net/decnet/dn_fib.c 458 */;
	struct dn_fib_res *cocci_id/* net/decnet/dn_fib.c 458 */;
	struct nlattr *cocci_id/* net/decnet/dn_fib.c 298 */;
	const struct nlmsghdr *cocci_id/* net/decnet/dn_fib.c 268 */;
	int *cocci_id/* net/decnet/dn_fib.c 268 */;
	struct nlattr *cocci_id/* net/decnet/dn_fib.c 267 */[];
	struct net_device *cocci_id/* net/decnet/dn_fib.c 204 */;
	struct dn_fib_res cocci_id/* net/decnet/dn_fib.c 201 */;
	struct flowidn cocci_id/* net/decnet/dn_fib.c 200 */;
	const struct rtmsg *cocci_id/* net/decnet/dn_fib.c 195 */;
	struct dn_fib_nh *cocci_id/* net/decnet/dn_fib.c 195 */;
	struct dn_fib_info *cocci_id/* net/decnet/dn_fib.c 195 */;
	int cocci_id/* net/decnet/dn_fib.c 195 */;
	struct rtnexthop *cocci_id/* net/decnet/dn_fib.c 152 */;
	const struct nlattr *cocci_id/* net/decnet/dn_fib.c 150 */;
	const struct dn_fib_info *cocci_id/* net/decnet/dn_fib.c 134 */;
	const struct dn_fib_nh *cocci_id/* net/decnet/dn_fib.c 120 */;
}
