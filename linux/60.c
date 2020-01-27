cocci_test_suite() {
	match_f *cocci_id/* scripts/kconfig/nconf.c 999 */;
	void cocci_id/* scripts/kconfig/nconf.c 999 */;
	int *cocci_id/* scripts/kconfig/nconf.c 929 */;
	enum prop_type cocci_id/* scripts/kconfig/nconf.c 752 */;
	const char *cocci_id/* scripts/kconfig/nconf.c 751 */;
	char cocci_id/* scripts/kconfig/nconf.c 742 */;
	tristate cocci_id/* scripts/kconfig/nconf.c 741 */;
	int cocci_id/* scripts/kconfig/nconf.c 740 */;
	struct property *cocci_id/* scripts/kconfig/nconf.c 738 */;
	struct symbol *cocci_id/* scripts/kconfig/nconf.c 737 */;
	struct menu *cocci_id/* scripts/kconfig/nconf.c 735 */;
	struct gstr cocci_id/* scripts/kconfig/nconf.c 694 */;
	struct symbol **cocci_id/* scripts/kconfig/nconf.c 693 */;
	char cocci_id/* scripts/kconfig/nconf.c 628 */[PATH_MAX + 128];
	char cocci_id/* scripts/kconfig/nconf.c 627 */[PATH_MAX + 1];
	struct mitem *cocci_id/* scripts/kconfig/nconf.c 612 */;
	ITEM *cocci_id/* scripts/kconfig/nconf.c 611 */;
	char cocci_id/* scripts/kconfig/nconf.c 568 */[256];
	va_list cocci_id/* scripts/kconfig/nconf.c 566 */;
	match_f cocci_id/* scripts/kconfig/nconf.c 496 */;
	enum{MATCH_TINKER_PATTERN_UP, MATCH_TINKER_PATTERN_DOWN, FIND_NEXT_MATCH_DOWN, FIND_NEXT_MATCH_UP,} cocci_id/* scripts/kconfig/nconf.c 492 */;
	struct function_keys cocci_id/* scripts/kconfig/nconf.c 307 */[];
	const int cocci_id/* scripts/kconfig/nconf.c 306 */;
	struct function_keys {
		const char *key_str;
		const char *func;
		function_key key;
		function_key_handler_t handler;
	} cocci_id/* scripts/kconfig/nconf.c 299 */;
	void cocci_id/* scripts/kconfig/nconf.c 289 */(int *key,
						       struct menu *current_item);
	void (*cocci_id/* scripts/kconfig/nconf.c 288 */)(int *key,
							  struct menu *menu);
	int cocci_id/* scripts/kconfig/nconf.c 284 */(void);
	void cocci_id/* scripts/kconfig/nconf.c 281 */(void);
	void cocci_id/* scripts/kconfig/nconf.c 278 */(struct menu *menu);
	char *cocci_id/* scripts/kconfig/nconf.c 275 */;
	struct mitem cocci_id/* scripts/kconfig/nconf.c 269 */[MAX_MENU_ITEMS];
	ITEM *cocci_id/* scripts/kconfig/nconf.c 268 */[MAX_MENU_ITEMS];
	MENU *cocci_id/* scripts/kconfig/nconf.c 267 */;
	WINDOW *cocci_id/* scripts/kconfig/nconf.c 262 */;
	struct mitem {
		char str[256];
		char tag;
		void *usrptr;
		int is_visible;
	} cocci_id/* scripts/kconfig/nconf.c 248 */;
	const char cocci_id/* scripts/kconfig/nconf.c 17 */[];
	char **cocci_id/* scripts/kconfig/nconf.c 1474 */;
	void *cocci_id/* scripts/kconfig/nconf.c 1174 */;
	long cocci_id/* scripts/kconfig/nconf.c 1174 */;
	struct match_state cocci_id/* scripts/kconfig/nconf.c 1076 */;
	struct match_state *cocci_id/* scripts/kconfig/nconf.c 1021 */;
	struct match_state {
		int in_search;
		match_f match_direction;
		char pattern[256];
	} cocci_id/* scripts/kconfig/nconf.c 1010 */;
}
