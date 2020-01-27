cocci_test_suite() {
	u16 cocci_id/* net/sctp/sm_statetable.c 979 */;
	enum sctp_state cocci_id/* net/sctp/sm_statetable.c 968 */;
	enum sctp_cid cocci_id/* net/sctp/sm_statetable.c 967 */;
	struct net *cocci_id/* net/sctp/sm_statetable.c 966 */;
	const struct sctp_sm_table_entry *cocci_id/* net/sctp/sm_statetable.c 965 */;
	union sctp_subtype cocci_id/* net/sctp/sm_statetable.c 69 */;
	enum sctp_event_type cocci_id/* net/sctp/sm_statetable.c 67 */;
	int cocci_id/* net/sctp/sm_statetable.c 60 */;
	const struct sctp_sm_table_entry cocci_id/* net/sctp/sm_statetable.c 529 */[SCTP_STATE_NUM_STATES];
	const struct sctp_sm_table_entry cocci_id/* net/sctp/sm_statetable.c 524 */[SCTP_NUM_AUTH_CHUNK_TYPES][SCTP_STATE_NUM_STATES];
	const struct sctp_sm_table_entry cocci_id/* net/sctp/sm_statetable.c 497 */[SCTP_NUM_RECONF_CHUNK_TYPES][SCTP_STATE_NUM_STATES];
	const struct sctp_sm_table_entry cocci_id/* net/sctp/sm_statetable.c 470 */[SCTP_NUM_PRSCTP_CHUNK_TYPES][SCTP_STATE_NUM_STATES];
	const struct sctp_sm_table_entry cocci_id/* net/sctp/sm_statetable.c 46 */;
	const struct sctp_sm_table_entry cocci_id/* net/sctp/sm_statetable.c 442 */[SCTP_NUM_ADDIP_CHUNK_TYPES][SCTP_STATE_NUM_STATES];
	const struct sctp_sm_table_entry *cocci_id/* net/sctp/sm_statetable.c 40 */(struct net *net,
										    enum sctp_cid cid,
										    enum sctp_state state);
	const struct sctp_sm_table_entry cocci_id/* net/sctp/sm_statetable.c 382 */[SCTP_NUM_BASE_CHUNK_TYPES][SCTP_STATE_NUM_STATES];
	const struct sctp_sm_table_entry cocci_id/* net/sctp/sm_statetable.c 37 */[SCTP_NUM_TIMEOUT_TYPES][SCTP_STATE_NUM_STATES];
	const struct sctp_sm_table_entry cocci_id/* net/sctp/sm_statetable.c 35 */[SCTP_NUM_OTHER_TYPES][SCTP_STATE_NUM_STATES];
	const struct sctp_sm_table_entry cocci_id/* net/sctp/sm_statetable.c 33 */[SCTP_NUM_PRIMITIVE_TYPES][SCTP_STATE_NUM_STATES];
}
