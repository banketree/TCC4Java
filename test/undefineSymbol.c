int testUndefineSymbol() {
	#ifdef NAME
		return 1;
	#endif
		return 0;
}