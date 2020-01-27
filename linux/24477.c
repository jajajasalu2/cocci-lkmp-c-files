cocci_test_suite() {
	bool cocci_id/* net/dccp/qpolicy.c 98 */;
	struct dccp_qpolicy_operations {
		void (*push)(struct sock *sk, struct sk_buff *skb);
		bool (*full)(struct sock *sk);
		struct sk_buff *(*top)(struct sock *sk);
		__be32 params;
	} cocci_id/* net/dccp/qpolicy.c 69 */[DCCPQ_POLICY_MAX];
	__be32 cocci_id/* net/dccp/qpolicy.c 128 */;
	struct sock *cocci_id/* net/dccp/qpolicy.c 103 */;
	struct sk_buff *cocci_id/* net/dccp/qpolicy.c 103 */;
	void cocci_id/* net/dccp/qpolicy.c 103 */;
}
