cocci_test_suite() {
	char cocci_id/* tools/perf/ui/browsers/hists.c 940 */[1024];
	u32 cocci_id/* tools/perf/ui/browsers/hists.c 86 */;
	struct perf_hpp_list *cocci_id/* tools/perf/ui/browsers/hists.c 81 */;
	unsigned short cocci_id/* tools/perf/ui/browsers/hists.c 786 */;
	bool (*cocci_id/* tools/perf/ui/browsers/hists.c 776 */)(struct hist_browser *browser,
								 unsigned short row);
	struct callchain_print_arg *cocci_id/* tools/perf/ui/browsers/hists.c 768 */;
	void (*cocci_id/* tools/perf/ui/browsers/hists.c 732 */)(struct hist_browser *browser,
								 struct callchain_list *chain,
								 const char *str,
								 int offset,
								 unsigned short row,
								 struct callchain_print_arg *arg);
	struct callchain_print_arg {
		off_t row_offset;
		bool is_current_entry;
		FILE *fp;
		int printed;
	} cocci_id/* tools/perf/ui/browsers/hists.c 722 */;
	char cocci_id/* tools/perf/ui/browsers/hists.c 631 */[160];
	struct hist_entry cocci_id/* tools/perf/ui/browsers/hists.c 584 */;
	struct hist_entry *cocci_id/* tools/perf/ui/browsers/hists.c 580 */;
	struct rb_node *cocci_id/* tools/perf/ui/browsers/hists.c 579 */;
	bool cocci_id/* tools/perf/ui/browsers/hists.c 577 */;
	struct hist_browser *cocci_id/* tools/perf/ui/browsers/hists.c 577 */;
	void cocci_id/* tools/perf/ui/browsers/hists.c 576 */;
	int cocci_id/* tools/perf/ui/browsers/hists.c 541 */;
	struct rb_node *cocci_id/* tools/perf/ui/browsers/hists.c 51 */(struct rb_node *nd,
									float min_pcnt);
	void cocci_id/* tools/perf/ui/browsers/hists.c 49 */(struct hist_browser *hb);
	int cocci_id/* tools/perf/ui/browsers/hists.c 48 */(struct hist_browser *browser,
							    char *bf,
							    size_t size);
	void cocci_id/* tools/perf/ui/browsers/hists.c 46 */(void);
	struct callchain_list cocci_id/* tools/perf/ui/browsers/hists.c 354 */;
	const char cocci_id/* tools/perf/ui/browsers/hists.c 3475 */[];
	struct popup_action cocci_id/* tools/perf/ui/browsers/hists.c 3474 */;
	struct block_hist *cocci_id/* tools/perf/ui/browsers/hists.c 3467 */;
	unsigned long cocci_id/* tools/perf/ui/browsers/hists.c 3457 */;
	struct hists *cocci_id/* tools/perf/ui/browsers/hists.c 3455 */;
	char *cocci_id/* tools/perf/ui/browsers/hists.c 3452 */;
	size_t cocci_id/* tools/perf/ui/browsers/hists.c 3404 */;
	struct evsel_menu cocci_id/* tools/perf/ui/browsers/hists.c 3385 */;
	struct evsel *cocci_id/* tools/perf/ui/browsers/hists.c 3384 */;
	struct annotation_options *cocci_id/* tools/perf/ui/browsers/hists.c 3382 */;
	struct perf_env *cocci_id/* tools/perf/ui/browsers/hists.c 3380 */;
	float cocci_id/* tools/perf/ui/browsers/hists.c 3379 */;
	struct hist_browser_timer *cocci_id/* tools/perf/ui/browsers/hists.c 3378 */;
	struct evlist *cocci_id/* tools/perf/ui/browsers/hists.c 3376 */;
	struct evsel cocci_id/* tools/perf/ui/browsers/hists.c 3368 */;
	void *cocci_id/* tools/perf/ui/browsers/hists.c 3366 */;
	struct ui_browser *cocci_id/* tools/perf/ui/browsers/hists.c 3365 */;
	struct evsel_menu *cocci_id/* tools/perf/ui/browsers/hists.c 3274 */;
	char cocci_id/* tools/perf/ui/browsers/hists.c 3234 */[256];
	struct evsel_menu {
		struct ui_browser b;
		struct evsel *selection;
		struct annotation_options *annotation_opts;
		bool lost_events,lost_events_warned;
		float min_pcnt;
		struct perf_env *env;
	} cocci_id/* tools/perf/ui/browsers/hists.c 3215 */;
	const void *cocci_id/* tools/perf/ui/browsers/hists.c 3049 */;
	struct popup_action cocci_id/* tools/perf/ui/browsers/hists.c 2845 */[MAX_OPTIONS];
	char *cocci_id/* tools/perf/ui/browsers/hists.c 2844 */[MAX_OPTIONS];
	struct branch_info *cocci_id/* tools/perf/ui/browsers/hists.c 2842 */;
	enum rstype cocci_id/* tools/perf/ui/browsers/hists.c 2671 */;
	struct res_sample *cocci_id/* tools/perf/ui/browsers/hists.c 2669 */;
	char cocci_id/* tools/perf/ui/browsers/hists.c 2649 */[128];
	struct thread *cocci_id/* tools/perf/ui/browsers/hists.c 2639 */;
	struct symbol *cocci_id/* tools/perf/ui/browsers/hists.c 2639 */;
	struct callchain_node cocci_id/* tools/perf/ui/browsers/hists.c 263 */;
	struct callchain_node *cocci_id/* tools/perf/ui/browsers/hists.c 263 */;
	char cocci_id/* tools/perf/ui/browsers/hists.c 2580 */[32];
	struct rb_root *cocci_id/* tools/perf/ui/browsers/hists.c 257 */;
	struct map *cocci_id/* tools/perf/ui/browsers/hists.c 2515 */;
	struct map_symbol *cocci_id/* tools/perf/ui/browsers/hists.c 2412 */;
	struct popup_action *cocci_id/* tools/perf/ui/browsers/hists.c 2411 */;
	char **cocci_id/* tools/perf/ui/browsers/hists.c 2411 */;
	struct annotation *cocci_id/* tools/perf/ui/browsers/hists.c 2376 */;
	struct popup_action {
		unsigned long time;
		struct thread *thread;
		struct map_symbol ms;
		int socket;
		struct evsel *evsel;
		enum rstype rstype;
		int (*fn)(struct hist_browser *browser,
			  struct popup_action *act);
	} cocci_id/* tools/perf/ui/browsers/hists.c 2361 */;
	char cocci_id/* tools/perf/ui/browsers/hists.c 2298 */[PATH_MAX];
	struct dirent *cocci_id/* tools/perf/ui/browsers/hists.c 2284 */;
	DIR *cocci_id/* tools/perf/ui/browsers/hists.c 2282 */;
	struct perf_top *cocci_id/* tools/perf/ui/browsers/hists.c 2244 */;
	FILE *cocci_id/* tools/perf/ui/browsers/hists.c 2127 */;
	char cocci_id/* tools/perf/ui/browsers/hists.c 2126 */[64];
	struct perf_hpp_list_node cocci_id/* tools/perf/ui/browsers/hists.c 2066 */;
	struct perf_hpp_list_node *cocci_id/* tools/perf/ui/browsers/hists.c 2054 */;
	struct perf_hpp_fmt *cocci_id/* tools/perf/ui/browsers/hists.c 2010 */;
	struct perf_hpp cocci_id/* tools/perf/ui/browsers/hists.c 2006 */;
	char cocci_id/* tools/perf/ui/browsers/hists.c 2003 */[8192];
	struct callchain_print_arg cocci_id/* tools/perf/ui/browsers/hists.c 1990 */;
	struct hist_browser cocci_id/* tools/perf/ui/browsers/hists.c 1768 */;
	unsigned cocci_id/* tools/perf/ui/browsers/hists.c 1766 */;
	unsigned int cocci_id/* tools/perf/ui/browsers/hists.c 1764 */;
	struct callchain_list *cocci_id/* tools/perf/ui/browsers/hists.c 169 */;
	const struct callchain_list *cocci_id/* tools/perf/ui/browsers/hists.c 164 */;
	char cocci_id/* tools/perf/ui/browsers/hists.c 164 */;
	const struct hist_entry *cocci_id/* tools/perf/ui/browsers/hists.c 159 */;
	char cocci_id/* tools/perf/ui/browsers/hists.c 1279 */[2048];
	struct hpp_arg cocci_id/* tools/perf/ui/browsers/hists.c 1269 */;
	off_t cocci_id/* tools/perf/ui/browsers/hists.c 1254 */;
	u64 cocci_id/* tools/perf/ui/browsers/hists.c 1194 */;
	double cocci_id/* tools/perf/ui/browsers/hists.c 1163 */;
	va_list cocci_id/* tools/perf/ui/browsers/hists.c 1162 */;
	struct hpp_arg *cocci_id/* tools/perf/ui/browsers/hists.c 1160 */;
	const char *cocci_id/* tools/perf/ui/browsers/hists.c 1158 */;
	struct perf_hpp *cocci_id/* tools/perf/ui/browsers/hists.c 1158 */;
	struct hpp_arg {
		struct ui_browser *b;
		char folded_sign;
		bool current_entry;
	} cocci_id/* tools/perf/ui/browsers/hists.c 1152 */;
	check_output_full_fn cocci_id/* tools/perf/ui/browsers/hists.c 1118 */;
	print_callchain_entry_fn cocci_id/* tools/perf/ui/browsers/hists.c 1116 */;
	const int cocci_id/* tools/perf/ui/browsers/hists.c 1098 */;
	u16 cocci_id/* tools/perf/ui/browsers/hists.c 106 */;
}
