cocci_test_suite() {
	int cocci_id/* scripts/kconfig/mconf.c 765 */[];
	update_text_fn cocci_id/* scripts/kconfig/mconf.c 755 */;
	int *cocci_id/* scripts/kconfig/mconf.c 754 */;
	void *cocci_id/* scripts/kconfig/mconf.c 689 */;
	long cocci_id/* scripts/kconfig/mconf.c 689 */;
	struct subtitle_part cocci_id/* scripts/kconfig/mconf.c 647 */;
	const char *cocci_id/* scripts/kconfig/mconf.c 489 */;
	bool cocci_id/* scripts/kconfig/mconf.c 473 */;
	char cocci_id/* scripts/kconfig/mconf.c 472 */;
	tristate cocci_id/* scripts/kconfig/mconf.c 471 */;
	int cocci_id/* scripts/kconfig/mconf.c 470 */;
	struct property *cocci_id/* scripts/kconfig/mconf.c 468 */;
	struct symbol *cocci_id/* scripts/kconfig/mconf.c 467 */;
	struct menu *cocci_id/* scripts/kconfig/mconf.c 465 */;
	void cocci_id/* scripts/kconfig/mconf.c 465 */;
	struct jump_key *cocci_id/* scripts/kconfig/mconf.c 441 */;
	struct search_data cocci_id/* scripts/kconfig/mconf.c 436 */;
	int cocci_id/* scripts/kconfig/mconf.c 435 */[JUMP_NB + 1];
	struct menu *cocci_id/* scripts/kconfig/mconf.c 434 */[JUMP_NB];
	struct gstr cocci_id/* scripts/kconfig/mconf.c 393 */;
	struct symbol **cocci_id/* scripts/kconfig/mconf.c 392 */;
	char cocci_id/* scripts/kconfig/mconf.c 371 */[4];
	struct search_data *cocci_id/* scripts/kconfig/mconf.c 365 */;
	size_t cocci_id/* scripts/kconfig/mconf.c 363 */;
	struct search_data {
		struct list_head *head;
		struct menu **targets;
		int *keys;
	} cocci_id/* scripts/kconfig/mconf.c 357 */;
	struct subtitle_list *cocci_id/* scripts/kconfig/mconf.c 347 */;
	struct subtitle_part *cocci_id/* scripts/kconfig/mconf.c 321 */;
	struct subtitle_part {
		struct list_head entries;
		const char *text;
	} cocci_id/* scripts/kconfig/mconf.c 312 */;
	char cocci_id/* scripts/kconfig/mconf.c 298 */[PATH_MAX + 128];
	char cocci_id/* scripts/kconfig/mconf.c 295 */[PATH_MAX + 1];
	void cocci_id/* scripts/kconfig/mconf.c 292 */(const char *title,
						       const char *text);
	void cocci_id/* scripts/kconfig/mconf.c 291 */(const char *title,
						       const char *text,
						       int r, int c);
	int cocci_id/* scripts/kconfig/mconf.c 288 */(const char *title,
						      char *text, int r,
						      int c, int *keys,
						      int *vscroll,
						      int *hscroll,
						      update_text_fn update_text,
						      void *data);
	void cocci_id/* scripts/kconfig/mconf.c 286 */(void);
	void cocci_id/* scripts/kconfig/mconf.c 284 */(struct menu *menu);
	void cocci_id/* scripts/kconfig/mconf.c 283 */(struct menu *menu,
						       struct menu *active_menu);
	const char cocci_id/* scripts/kconfig/mconf.c 24 */[];
	char *cocci_id/* scripts/kconfig/mconf.c 1005 */;
	char **cocci_id/* scripts/kconfig/mconf.c 1003 */;
}
