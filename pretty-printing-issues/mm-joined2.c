/* mm/page_alloc.c 305 */
compound_page_dtor * const compound_page_dtors[] = {
	NULL,
	free_compound_page,
#ifdef CONFIG_HUGETLB_PAGE
	free_huge_page,
#endif
#ifdef CONFIG_TRANSPARENT_HUGEPAGE
	free_transhuge_page,
#endif
};
