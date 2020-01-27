cocci_test_suite() {
	unsigned long long cocci_id/* tools/lib/traceevent/event-parse.c 97 */(struct trace_seq *s,
									       void *data,
									       int size,
									       struct tep_event *event,
									       struct tep_print_arg *arg);
	void cocci_id/* tools/lib/traceevent/event-parse.c 965 */;
	struct tep_function_handler {
		struct tep_function_handler *next;
		enum tep_func_arg_type ret_type;
		char *name;
		tep_func_handler func;
		struct func_params *params;
		int nr_args;
	} cocci_id/* tools/lib/traceevent/event-parse.c 88 */;
	struct tep_print_flag_sym *cocci_id/* tools/lib/traceevent/event-parse.c 855 */;
	struct func_params {
		struct func_params *next;
		enum tep_func_arg_type type;
	} cocci_id/* tools/lib/traceevent/event-parse.c 83 */;
	struct tep_event cocci_id/* tools/lib/traceevent/event-parse.c 814 */;
	struct event_handler {
		struct event_handler *next;
		int id;
		const char *sys_name;
		const char *event_name;
		tep_event_handler_func func;
		void *context;
	} cocci_id/* tools/lib/traceevent/event-parse.c 74 */;
	struct printk_map cocci_id/* tools/lib/traceevent/event-parse.c 732 */;
	struct printk_map *cocci_id/* tools/lib/traceevent/event-parse.c 728 */;
	struct printk_list *cocci_id/* tools/lib/traceevent/event-parse.c 699 */;
	struct tep_format *cocci_id/* tools/lib/traceevent/event-parse.c 6965 */;
	struct event_handler **cocci_id/* tools/lib/traceevent/event-parse.c 6886 */;
	const struct printk_map *cocci_id/* tools/lib/traceevent/event-parse.c 686 */;
	tep_event_handler_func cocci_id/* tools/lib/traceevent/event-parse.c 6847 */;
	struct printk_list {
		struct printk_list *next;
		unsigned long long addr;
		char *printk;
	} cocci_id/* tools/lib/traceevent/event-parse.c 678 */;
	struct printk_map {
		unsigned long long addr;
		char *printk;
	} cocci_id/* tools/lib/traceevent/event-parse.c 673 */;
	struct func_params **cocci_id/* tools/lib/traceevent/event-parse.c 6656 */;
	enum tep_func_arg_type cocci_id/* tools/lib/traceevent/event-parse.c 6652 */;
	tep_func_handler cocci_id/* tools/lib/traceevent/event-parse.c 6651 */;
	struct func_params *cocci_id/* tools/lib/traceevent/event-parse.c 6622 */;
	char cocci_id/* tools/lib/traceevent/event-parse.c 6597 */[128];
	unsigned cocci_id/* tools/lib/traceevent/event-parse.c 6439 */;
	unsigned long long *cocci_id/* tools/lib/traceevent/event-parse.c 6402 */;
	struct tep_event *cocci_id/* tools/lib/traceevent/event-parse.c 6335 */;
	unsigned long cocci_id/* tools/lib/traceevent/event-parse.c 6331 */;
	struct tep_event **cocci_id/* tools/lib/traceevent/event-parse.c 6330 */;
	enum tep_errno cocci_id/* tools/lib/traceevent/event-parse.c 6328 */;
	struct tep_print_arg *cocci_id/* tools/lib/traceevent/event-parse.c 6290 */;
	struct tep_format_field *cocci_id/* tools/lib/traceevent/event-parse.c 6289 */;
	struct event_handler *cocci_id/* tools/lib/traceevent/event-parse.c 6182 */;
	int (*cocci_id/* tools/lib/traceevent/event-parse.c 5770 */)(const void *a,
								     const void *b);
	enum tep_event_sort_type cocci_id/* tools/lib/traceevent/event-parse.c 5768 */;
	struct tep_event *const *cocci_id/* tools/lib/traceevent/event-parse.c 5705 */;
	va_list cocci_id/* tools/lib/traceevent/event-parse.c 5663 */;
	struct print_event_type cocci_id/* tools/lib/traceevent/event-parse.c 5658 */;
	struct print_event_type *cocci_id/* tools/lib/traceevent/event-parse.c 5583 */;
	struct print_event_type {
		enum{EVENT_TYPE_INT=1, EVENT_TYPE_STRING, EVENT_TYPE_UNKNOWN,} type;
		char format[32];
	} cocci_id/* tools/lib/traceevent/event-parse.c 5547 */;
	struct trace_seq cocci_id/* tools/lib/traceevent/event-parse.c 5231 */;
	unsigned int cocci_id/* tools/lib/traceevent/event-parse.c 5230 */;
	struct tep_record *cocci_id/* tools/lib/traceevent/event-parse.c 5224 */;
	struct trace_seq *cocci_id/* tools/lib/traceevent/event-parse.c 5223 */;
	struct func_resolver *cocci_id/* tools/lib/traceevent/event-parse.c 517 */;
	tep_func_resolver_t *cocci_id/* tools/lib/traceevent/event-parse.c 515 */;
	struct func_resolver {
		tep_func_resolver_t *func;
		void *priv;
		struct func_map map;
	} cocci_id/* tools/lib/traceevent/event-parse.c 499 */;
	char cocci_id/* tools/lib/traceevent/event-parse.c 4967 */[32];
	struct tep_print_fmt *cocci_id/* tools/lib/traceevent/event-parse.c 4958 */;
	struct func_map cocci_id/* tools/lib/traceevent/event-parse.c 486 */;
	struct tep_handle *cocci_id/* tools/lib/traceevent/event-parse.c 483 */;
	unsigned long long cocci_id/* tools/lib/traceevent/event-parse.c 483 */;
	struct func_map *cocci_id/* tools/lib/traceevent/event-parse.c 482 */;
	struct sockaddr_in6 cocci_id/* tools/lib/traceevent/event-parse.c 4814 */;
	struct sockaddr_in6 *cocci_id/* tools/lib/traceevent/event-parse.c 4812 */;
	struct sockaddr_in cocci_id/* tools/lib/traceevent/event-parse.c 4801 */;
	struct sockaddr_in *cocci_id/* tools/lib/traceevent/event-parse.c 4799 */;
	struct sockaddr_storage *cocci_id/* tools/lib/traceevent/event-parse.c 4759 */;
	struct in6_addr cocci_id/* tools/lib/traceevent/event-parse.c 4582 */;
	uint8_t cocci_id/* tools/lib/traceevent/event-parse.c 4579 */;
	uint16_t cocci_id/* tools/lib/traceevent/event-parse.c 4578 */;
	unsigned char cocci_id/* tools/lib/traceevent/event-parse.c 4575 */[8];
	const struct in6_addr *cocci_id/* tools/lib/traceevent/event-parse.c 4567 */;
	struct func_list *cocci_id/* tools/lib/traceevent/event-parse.c 445 */;
	const struct func_map *cocci_id/* tools/lib/traceevent/event-parse.c 428 */;
	uintptr_t cocci_id/* tools/lib/traceevent/event-parse.c 4246 */;
	struct save_str {
		struct save_str *next;
		char *str;
	} *cocci_id/* tools/lib/traceevent/event-parse.c 4202 */;
	uint64_t *cocci_id/* tools/lib/traceevent/event-parse.c 4116 */;
	uint32_t *cocci_id/* tools/lib/traceevent/event-parse.c 4114 */;
	uint16_t *cocci_id/* tools/lib/traceevent/event-parse.c 4112 */;
	uint8_t *cocci_id/* tools/lib/traceevent/event-parse.c 4110 */;
	struct func_list {
		struct func_list *next;
		unsigned long long addr;
		char *func;
		char *mod;
	} cocci_id/* tools/lib/traceevent/event-parse.c 402 */;
	unsigned int *cocci_id/* tools/lib/traceevent/event-parse.c 3996 */;
	struct func_map {
		unsigned long long addr;
		char *func;
		char *mod;
	} cocci_id/* tools/lib/traceevent/event-parse.c 396 */;
	unsigned char *cocci_id/* tools/lib/traceevent/event-parse.c 3921 */;
	char cocci_id/* tools/lib/traceevent/event-parse.c 3891 */[3];
	const struct flag cocci_id/* tools/lib/traceevent/event-parse.c 3840 */[];
	struct flag {
		const char *name;
		unsigned long long value;
	} cocci_id/* tools/lib/traceevent/event-parse.c 3835 */;
	int cocci_id/* tools/lib/traceevent/event-parse.c 3529 */(const void *a,
								  const void *b);
	const char *cocci_id/* tools/lib/traceevent/event-parse.c 3475 */;
	int *cocci_id/* tools/lib/traceevent/event-parse.c 3475 */;
	void *cocci_id/* tools/lib/traceevent/event-parse.c 3474 */;
	int cocci_id/* tools/lib/traceevent/event-parse.c 3474 */;
	unsigned short *cocci_id/* tools/lib/traceevent/event-parse.c 3407 */;
	struct cmdline_list *cocci_id/* tools/lib/traceevent/event-parse.c 336 */;
	bool cocci_id/* tools/lib/traceevent/event-parse.c 334 */;
	struct tep_function_handler **cocci_id/* tools/lib/traceevent/event-parse.c 2994 */;
	struct tep_function_handler *cocci_id/* tools/lib/traceevent/event-parse.c 2975 */;
	enum tep_print_arg_type cocci_id/* tools/lib/traceevent/event-parse.c 2692 */;
	struct tep_cmdline cocci_id/* tools/lib/traceevent/event-parse.c 259 */;
	struct tep_cmdline *cocci_id/* tools/lib/traceevent/event-parse.c 257 */;
	struct tep_print_flag_sym **cocci_id/* tools/lib/traceevent/event-parse.c 2518 */;
	char cocci_id/* tools/lib/traceevent/event-parse.c 2491 */[24];
	long long cocci_id/* tools/lib/traceevent/event-parse.c 2490 */;
	long long *cocci_id/* tools/lib/traceevent/event-parse.c 2322 */;
	short cocci_id/* tools/lib/traceevent/event-parse.c 2274 */;
	char cocci_id/* tools/lib/traceevent/event-parse.c 2271 */;
	char *cocci_id/* tools/lib/traceevent/event-parse.c 2215 */(struct tep_print_arg *arg);
	struct tep_print_arg **cocci_id/* tools/lib/traceevent/event-parse.c 2184 */;
	enum tep_event_type cocci_id/* tools/lib/traceevent/event-parse.c 1763 */(struct tep_event *event,
										  struct tep_print_arg *arg,
										  char **tok);
	enum tep_event_type cocci_id/* tools/lib/traceevent/event-parse.c 1747 */(struct tep_event *event,
										  struct tep_print_arg *arg,
										  char **tok,
										  enum tep_event_type type);
	long cocci_id/* tools/lib/traceevent/event-parse.c 1693 */;
	struct cmdline_list {
		struct cmdline_list *next;
		char *comm;
		int pid;
	} cocci_id/* tools/lib/traceevent/event-parse.c 164 */;
	struct tep_format_field **cocci_id/* tools/lib/traceevent/event-parse.c 1428 */;
	struct {
		const char *type;
		unsigned int size;
	} cocci_id/* tools/lib/traceevent/event-parse.c 1403 */[];
	const struct tep_cmdline *cocci_id/* tools/lib/traceevent/event-parse.c 134 */;
	const void *cocci_id/* tools/lib/traceevent/event-parse.c 132 */;
	char *cocci_id/* tools/lib/traceevent/event-parse.c 1305 */;
	enum tep_event_type cocci_id/* tools/lib/traceevent/event-parse.c 1285 */;
	char **cocci_id/* tools/lib/traceevent/event-parse.c 1285 */;
	struct tep_cmdline {
		char *comm;
		int pid;
	} cocci_id/* tools/lib/traceevent/event-parse.c 127 */;
	struct tep_print_arg cocci_id/* tools/lib/traceevent/event-parse.c 124 */;
	void cocci_id/* tools/lib/traceevent/event-parse.c 101 */(struct tep_function_handler *func);
	char cocci_id/* tools/lib/traceevent/event-parse.c 1006 */[BUFSIZ];
	enum tep_event_type cocci_id/* tools/lib/traceevent/event-parse.c 1002 */(const char *str,
										  char **tok);
}
