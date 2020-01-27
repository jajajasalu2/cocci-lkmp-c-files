cocci_test_suite() {
	tep_plugin_unload_func cocci_id/* tools/lib/traceevent/event-plugin.c 433 */;
	void (*cocci_id/* tools/lib/traceevent/event-plugin.c 370 */)(struct tep_handle *tep,
								      const char *path,
								      const char *name,
								      void *data);
	struct tep_plugin_list {
		struct tep_plugin_list *next;
		char *name;
		void *handle;
	} cocci_id/* tools/lib/traceevent/event-plugin.c 35 */;
	DIR *cocci_id/* tools/lib/traceevent/event-plugin.c 337 */;
	struct stat cocci_id/* tools/lib/traceevent/event-plugin.c 336 */;
	struct dirent *cocci_id/* tools/lib/traceevent/event-plugin.c 335 */;
	int cocci_id/* tools/lib/traceevent/event-plugin.c 281 */;
	struct trace_plugin_options {
		struct trace_plugin_options *next;
		char *plugin;
		char *option;
		char *value;
	} *cocci_id/* tools/lib/traceevent/event-plugin.c 28 */;
	char *cocci_id/* tools/lib/traceevent/event-plugin.c 279 */;
	struct tep_plugin_list *cocci_id/* tools/lib/traceevent/event-plugin.c 277 */;
	tep_plugin_load_func cocci_id/* tools/lib/traceevent/event-plugin.c 276 */;
	struct tep_plugin_list **cocci_id/* tools/lib/traceevent/event-plugin.c 275 */;
	void *cocci_id/* tools/lib/traceevent/event-plugin.c 273 */;
	const char *cocci_id/* tools/lib/traceevent/event-plugin.c 272 */;
	struct tep_handle *cocci_id/* tools/lib/traceevent/event-plugin.c 272 */;
	void cocci_id/* tools/lib/traceevent/event-plugin.c 271 */;
	const struct tep_plugin_list *cocci_id/* tools/lib/traceevent/event-plugin.c 263 */;
	struct trace_seq *cocci_id/* tools/lib/traceevent/event-plugin.c 261 */;
	struct registered_plugin_options **cocci_id/* tools/lib/traceevent/event-plugin.c 237 */;
	struct registered_plugin_options {
		struct registered_plugin_options *next;
		struct tep_plugin_option *options;
	} *cocci_id/* tools/lib/traceevent/event-plugin.c 23 */;
	struct registered_plugin_options *cocci_id/* tools/lib/traceevent/event-plugin.c 215 */;
	struct tep_plugin_option *cocci_id/* tools/lib/traceevent/event-plugin.c 213 */;
	struct trace_plugin_options *cocci_id/* tools/lib/traceevent/event-plugin.c 156 */;
	char **cocci_id/* tools/lib/traceevent/event-plugin.c 137 */;
}
