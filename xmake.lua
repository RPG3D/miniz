

target("MiniZ")
	set_kind("static")
	add_files("*.c")
	set_languages("c11", "cxx14")
	
	if (is_os("windows")) then
		set_kind("shared")
		add_defines("MINIZ_DLL=1")
		add_defines("MINIZ_DLL_EXPORT=1")
		
	end
	
	if (is_os("android")) then
		set_kind("shared")		
	end



