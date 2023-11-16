#include <map>

void translateForm(TForm* LoginForm, String Language, const std::map<String, std::map<String, String>>& translation){
	for(int i = 0; i < LoginForm->ComponentCount; i++) // iterate though all components on the form
		for(auto it_ComponentName = translation.begin(); it_ComponentName != translation.end(); it_ComponentName++)
			if(LoginForm->Components[i]->Name == it_ComponentName->first) // find component by name
				for(auto it_Language = it_ComponentName->second.begin(); it_Language != it_ComponentName->second.end(); it_Language++)
					if(it_Language->first == Language) // find translation for the target language
						if(IsPublishedProp(LoginForm->Components[i], "Caption"))
							SetPropValue(LoginForm->Components[i], "Caption", it_Language->second);
}
