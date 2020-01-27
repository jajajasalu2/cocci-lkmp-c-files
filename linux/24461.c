cocci_test_suite() {
	const struct ccid_dependency cocci_id/* net/dccp/feat.c 865 */[2][5];
	const struct ccid_dependency cocci_id/* net/dccp/feat.c 840 */[2][2];
	const struct ccid_dependency *cocci_id/* net/dccp/feat.c 838 */;
	const u8 *cocci_id/* net/dccp/feat.c 721 */;
	dccp_feat_val cocci_id/* net/dccp/feat.c 698 */;
	u8 cocci_id/* net/dccp/feat.c 695 */;
	struct list_head *cocci_id/* net/dccp/feat.c 695 */;
	struct sk_buff *cocci_id/* net/dccp/feat.c 630 */;
	struct dccp_request_sock *cocci_id/* net/dccp/feat.c 629 */;
	const struct list_head *cocci_id/* net/dccp/feat.c 550 */;
	void cocci_id/* net/dccp/feat.c 409 */;
	struct dccp_feat_entry cocci_id/* net/dccp/feat.c 396 */;
	struct ccid *cocci_id/* net/dccp/feat.c 39 */;
	const struct dccp_feat_entry *cocci_id/* net/dccp/feat.c 388 */;
	dccp_feat_val *cocci_id/* net/dccp/feat.c 365 */;
	unsigned long long cocci_id/* net/dccp/feat.c 337 */;
	u64 cocci_id/* net/dccp/feat.c 307 */;
	bool cocci_id/* net/dccp/feat.c 306 */;
	const bool cocci_id/* net/dccp/feat.c 304 */;
	const dccp_feat_val *cocci_id/* net/dccp/feat.c 304 */;
	const int cocci_id/* net/dccp/feat.c 303 */;
	struct sock *cocci_id/* net/dccp/feat.c 303 */;
	int cocci_id/* net/dccp/feat.c 303 */;
	unsigned long cocci_id/* net/dccp/feat.c 26 */;
	const char *const cocci_id/* net/dccp/feat.c 213 */[];
	const u8 cocci_id/* net/dccp/feat.c 211 */;
	const char *cocci_id/* net/dccp/feat.c 211 */;
	dccp_feat_val *cocci_id/* net/dccp/feat.c 1502 */[DCCP_FEAT_SUPPORTED_MAX][2];
	struct dccp_feat_entry *cocci_id/* net/dccp/feat.c 1500 */;
	struct dccp_sock *cocci_id/* net/dccp/feat.c 1499 */;
	struct {
		u8 *val;
		u8 len;
	} cocci_id/* net/dccp/feat.c 1445 */;
	const struct {
		u8 feat_num;
		enum dccp_feat_type rxtx;
		enum dccp_feat_type reconciliation;
		u8 default_value;
		int (*activation_hdlr)(struct sock *sk, u64 val, bool rx);
	} cocci_id/* net/dccp/feat.c 128 */[];
	u8 *cocci_id/* net/dccp/feat.c 1098 */;
}
