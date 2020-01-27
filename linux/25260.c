cocci_test_suite() {
	const struct tep_filter_type *cocci_id/* tools/lib/traceevent/parse-filter.c 98 */;
	const void *cocci_id/* tools/lib/traceevent/parse-filter.c 96 */;
	enum op_type cocci_id/* tools/lib/traceevent/parse-filter.c 952 */;
	struct tep_filter_arg **cocci_id/* tools/lib/traceevent/parse-filter.c 909 */;
	enum filter_vals{FILTER_VAL_NORM, FILTER_VAL_FALSE, FILTER_VAL_TRUE,} cocci_id/* tools/lib/traceevent/parse-filter.c 749 */;
	enum tep_filter_exp_type *cocci_id/* tools/lib/traceevent/parse-filter.c 658 */;
	enum tep_filter_cmp_type *cocci_id/* tools/lib/traceevent/parse-filter.c 657 */;
	enum tep_filter_op_type *cocci_id/* tools/lib/traceevent/parse-filter.c 656 */;
	char **cocci_id/* tools/lib/traceevent/parse-filter.c 65 */;
	enum op_type{OP_NONE, OP_BOOL, OP_NOT, OP_EXP, OP_CMP,} cocci_id/* tools/lib/traceevent/parse-filter.c 647 */;
	enum tep_errno cocci_id/* tools/lib/traceevent/parse-filter.c 619 */;
	struct tep_filter_arg *cocci_id/* tools/lib/traceevent/parse-filter.c 619 */;
	char *cocci_id/* tools/lib/traceevent/parse-filter.c 445 */;
	enum tep_filter_cmp_type cocci_id/* tools/lib/traceevent/parse-filter.c 429 */;
	enum tep_filter_exp_type cocci_id/* tools/lib/traceevent/parse-filter.c 414 */;
	enum tep_filter_op_type cocci_id/* tools/lib/traceevent/parse-filter.c 399 */;
	va_list cocci_id/* tools/lib/traceevent/parse-filter.c 37 */;
	struct tep_format_field *cocci_id/* tools/lib/traceevent/parse-filter.c 340 */;
	enum tep_event_type cocci_id/* tools/lib/traceevent/parse-filter.c 338 */;
	struct event_list {
		struct event_list *next;
		struct tep_event *event;
	} cocci_id/* tools/lib/traceevent/parse-filter.c 28 */;
	regex_t cocci_id/* tools/lib/traceevent/parse-filter.c 263 */;
	struct tep_handle *cocci_id/* tools/lib/traceevent/parse-filter.c 259 */;
	regex_t *cocci_id/* tools/lib/traceevent/parse-filter.c 247 */;
	struct event_list *cocci_id/* tools/lib/traceevent/parse-filter.c 234 */;
	struct tep_event *cocci_id/* tools/lib/traceevent/parse-filter.c 232 */;
	struct event_list **cocci_id/* tools/lib/traceevent/parse-filter.c 231 */;
	int cocci_id/* tools/lib/traceevent/parse-filter.c 231 */;
	struct tep_format_field cocci_id/* tools/lib/traceevent/parse-filter.c 20 */;
	struct tep_filter_arg cocci_id/* tools/lib/traceevent/parse-filter.c 186 */;
	void cocci_id/* tools/lib/traceevent/parse-filter.c 184 */;
	unsigned int *cocci_id/* tools/lib/traceevent/parse-filter.c 1717 */;
	char cocci_id/* tools/lib/traceevent/parse-filter.c 1709 */[64];
	unsigned int cocci_id/* tools/lib/traceevent/parse-filter.c 1708 */;
	struct tep_record *cocci_id/* tools/lib/traceevent/parse-filter.c 1638 */;
	enum tep_errno *cocci_id/* tools/lib/traceevent/parse-filter.c 1638 */;
	unsigned long long cocci_id/* tools/lib/traceevent/parse-filter.c 1636 */;
	unsigned long long cocci_id/* tools/lib/traceevent/parse-filter.c 1577 */(struct tep_event *event,
										  struct tep_filter_arg *arg,
										  struct tep_record *record,
										  enum tep_errno *err);
	long long cocci_id/* tools/lib/traceevent/parse-filter.c 1572 */;
	short cocci_id/* tools/lib/traceevent/parse-filter.c 1568 */;
	char cocci_id/* tools/lib/traceevent/parse-filter.c 1566 */;
	unsigned long cocci_id/* tools/lib/traceevent/parse-filter.c 1552 */;
	int cocci_id/* tools/lib/traceevent/parse-filter.c 1527 */(struct tep_event *event,
								   struct tep_filter_arg *arg,
								   struct tep_record *record,
								   enum tep_errno *err);
	const char *cocci_id/* tools/lib/traceevent/parse-filter.c 1458 */;
	char *cocci_id/* tools/lib/traceevent/parse-filter.c 1450 */(struct tep_event_filter *filter,
								     struct tep_filter_arg *arg);
	size_t cocci_id/* tools/lib/traceevent/parse-filter.c 1367 */;
	struct tep_event_filter *cocci_id/* tools/lib/traceevent/parse-filter.c 127 */;
	struct tep_filter_type *cocci_id/* tools/lib/traceevent/parse-filter.c 126 */;
	struct tep_filter_type cocci_id/* tools/lib/traceevent/parse-filter.c 114 */;
}
