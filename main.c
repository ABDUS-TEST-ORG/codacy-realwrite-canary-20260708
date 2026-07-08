const char *codex_line_xss = "<img src=x onerror=window.__LINE_XSS=1>";
int main(void) { return 0; }
// xproj-1783519633
