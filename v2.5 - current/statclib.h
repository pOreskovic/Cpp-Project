class customFileFormat{
	public:
		wchar_t name[15];
		float version;

		customFileFormat(){
			wcsncpy(name, L"LogsFileFormat",15);
			version = 1.0;
		}

 };


 class settings{
	public:
		TDateTime changeDate, changeTime;
		String lang, style, font;
		int fontSize;

		settings() = default;
		settings(String ilang, String istyle, String iFont, int ifontSize){
			lang = ilang;
			style = istyle;
			font = iFont;
			fontSize = ifontSize;
			changeDate = Date();
            changeTime = Time();
		}
 };
